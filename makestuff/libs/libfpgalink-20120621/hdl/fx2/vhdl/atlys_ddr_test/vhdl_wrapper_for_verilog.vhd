----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:16:59 05/27/2014 
-- Design Name: 
-- Module Name:    vhdl_wrapper_for_verilog - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity vhdl_wrapper_for_verilog is
   PORT (
      DDR2CLK_P : OUT STD_LOGIC;
      DDR2CLK_N : OUT STD_LOGIC;
      DDR2CKE   : OUT STD_LOGIC;
      DDR2RASN  : OUT STD_LOGIC;
      DDR2CASN  : OUT STD_LOGIC;
      DDR2WEN   : OUT STD_LOGIC;
      DDR2RZQ   : INOUT STD_LOGIC;
      DDR2ZIO   : INOUT STD_LOGIC;
      DDR2BA    : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);

      DDR2A  : OUT STD_LOGIC_VECTOR(12 DOWNTO 0);
      DDR2DQ : INOUT STD_LOGIC_VECTOR(15 DOWNTO 0);

      DDR2UDQS_P : INOUT STD_LOGIC;
      DDR2UDQS_N : INOUT STD_LOGIC;
      DDR2LDQS_P : INOUT STD_LOGIC;
      DDR2LDQS_N : INOUT STD_LOGIC;
      DDR2LDM    : OUT STD_LOGIC;
      DDR2UDM    : OUT STD_LOGIC;
      DDR2ODT    : OUT STD_LOGIC;

      clk  : IN STD_LOGIC; -- 100 MHz oscillator = 10ns period (top level pin)
      leds : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      sw   : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
      
      -- FX2 interface -----------------------------------------------------------------------------
		fx2Clk_in     : in    std_logic;                    -- 48MHz clock from FX2
		fx2Addr_out   : out   std_logic_vector(1 downto 0); -- select FIFO: "10" for EP6OUT, "11" for EP8IN
		fx2Data_io    : inout std_logic_vector(7 downto 0); -- 8-bit data to/from FX2

		-- When EP6OUT selected:
		fx2Read_out   : out   std_logic;                    -- asserted (active-low) when reading from FX2
		fx2OE_out     : out   std_logic;                    -- asserted (active-low) to tell FX2 to drive bus
		fx2GotData_in : in    std_logic;                    -- asserted (active-high) when FX2 has data for us

		-- When EP8IN selected:
		fx2Write_out  : out   std_logic;                    -- asserted (active-low) when writing to FX2
		fx2GotRoom_in : in    std_logic;                    -- asserted (active-high) when FX2 has room for more data from us
		fx2PktEnd_out : out   std_logic                    -- asserted (active-low) when a host read needs to be committed early
   );
end vhdl_wrapper_for_verilog;

architecture Behavioral of vhdl_wrapper_for_verilog is
   
   -- ddr test code in verilog for DDR RAM
   COMPONENT atlys_ddr_test IS
      PORT (
         DDR2CLK_P : OUT STD_LOGIC;
         DDR2CLK_N : OUT STD_LOGIC;
         DDR2CKE   : OUT STD_LOGIC;
         DDR2RASN  : OUT STD_LOGIC;
         DDR2CASN  : OUT STD_LOGIC;
         DDR2WEN   : OUT STD_LOGIC;
         DDR2RZQ   : INOUT STD_LOGIC;
         DDR2ZIO   : INOUT STD_LOGIC;
         DDR2BA    : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);

         DDR2A  : OUT STD_LOGIC_VECTOR(12 DOWNTO 0);
         DDR2DQ : INOUT STD_LOGIC_VECTOR(15 DOWNTO 0);

         DDR2UDQS_P : INOUT STD_LOGIC;
         DDR2UDQS_N : INOUT STD_LOGIC;
         DDR2LDQS_P : INOUT STD_LOGIC;
         DDR2LDQS_N : INOUT STD_LOGIC;
         DDR2LDM    : OUT STD_LOGIC;
         DDR2UDM    : OUT STD_LOGIC;
         DDR2ODT    : OUT STD_LOGIC;

         clk : IN STD_LOGIC; -- 100 MHz oscillator = 10ns period (top level pin)
         --leds : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
         
         CALIBRATION : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
         p0_rd_data  : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
         p0_rd_empty : OUT STD_LOGIC;
         p0_rd_en    : OUT STD_LOGIC;
         p1_rd_count : OUT STD_LOGIC_VECTOR(6 DOWNTO 0)
      );
   END COMPONENT;
   
   SIGNAL CALIBRATION : STD_LOGIC_VECTOR(1 DOWNTO 0);
   SIGNAL p0_rd_data  : STD_LOGIC_VECTOR(63 DOWNTO 0);
   SIGNAL p0_rd_empty : STD_LOGIC;
   SIGNAL p0_rd_en    : STD_LOGIC;
   SIGNAL p1_rd_count  : STD_LOGIC_VECTOR(6 DOWNTO 0);
   
   TYPE array_ddr_out IS ARRAY (0 TO 5) OF STD_LOGIC_VECTOR(63 DOWNTO 0);
   SIGNAL arrayDDR_out : array_ddr_out := (OTHERS => (OTHERS => '0'));
   SIGNAL ndx : INTEGER := 0;
   SIGNAL cnt : INTEGER := 0;
   SIGNAL enable : STD_LOGIC := '1';
   
   -- Channel read/write interface -----------------------------------------------------------------
	signal chanAddr  : std_logic_vector(6 downto 0);  -- the selected channel (0-127)

	-- Host >> FPGA pipe:
	signal h2fData   : std_logic_vector(7 downto 0);  -- data lines used when the host writes to a channel
	signal h2fValid  : std_logic;                     -- '1' means "on the next clock rising edge, please accept the data on h2fData"
	signal h2fReady  : std_logic;                     -- channel logic can drive this low to say "I'm not ready for more data yet"

	-- Host << FPGA pipe:
	signal f2hData   : std_logic_vector(7 downto 0);  -- data lines used when the host reads from a channel
	signal f2hValid  : std_logic;                     -- channel logic can drive this low to say "I don't have data ready for you"
	signal f2hReady  : std_logic;                     -- '1' means "on the next clock rising edge, put your next byte of data on f2hData"
	-- ----------------------------------------------------------------------------------------------

	-- Needed so that the comm_fpga_fx2 module can drive both fx2Read_out and fx2OE_out
	signal fx2Read                 : std_logic;

	-- Flags for display on the 7-seg decimal points
	--signal flags                   : std_logic_vector(3 downto 0);

	-- Registers implementing the channels
	signal checksum, checksum_next : std_logic_vector(15 downto 0) := x"0000";
	signal reg0, reg0_next         : std_logic_vector(7 downto 0)  := x"00";
	signal reg1, reg1_next         : std_logic_vector(7 downto 0)  := x"00";
	signal reg2, reg2_next         : std_logic_vector(7 downto 0)  := x"00";
	signal reg3, reg3_next         : std_logic_vector(7 downto 0)  := x"00";

   signal pos : std_logic := '0';
   
begin

   -- Infer registers
	process(fx2Clk_in)
	begin
		if ( rising_edge(fx2Clk_in) ) then
			checksum <= checksum_next;
--         if (pos = '0') then
--            reg0 <= FbRdData(15 downto 8); --reg0_next;
--         else
--            reg0 <= FbRdData(7 downto 0);
--         end if;
         reg0 <= reg0_next;
         reg1 <= reg1_next;--FbRdData(15 downto 11) & "000"; --reg1_next;
			reg2 <= reg2_next;--FbRdData(10 downto 5) & "00"; --reg2_next;
			reg3 <= reg3_next;--FbRdData(4 downto 0) & "000"; --reg3_next;
         
         pos <= NOT(pos);
		end if;
	end process;

--RED_I => FbRdData(15 downto 11) & "000",
--GREEN_I => FbRdData(10 downto 5) & "00",
--BLUE_I => FbRdData(4 downto 0) & "000",

	-- Drive register inputs for each channel when the host is writing
	checksum_next <=
		std_logic_vector(unsigned(checksum) + unsigned(h2fData))
			when chanAddr = "0000000" and h2fValid = '1'
		else x"0000"
			when chanAddr = "0000001" and h2fValid = '1' and h2fData(0) = '1'
		else checksum;
	reg0_next <= h2fData when chanAddr = "0000000" and h2fValid = '1' else reg0;
	reg1_next <= p0_rd_data(7 DOWNTO 0);-- when chanAddr = "0000001" and h2fValid = '1' else reg1; --CamBD(15 downto 8) when pos = '0' else CamBD(7 downto 0); --h2fData when chanAddr = "0000001" and h2fValid = '1' else reg1;
	reg2_next <= x"00"; --h2fData when chanAddr = "0000010" and h2fValid = '1' else reg2;
	reg3_next <= x"ff"; --h2fData when chanAddr = "0000011" and h2fValid = '1' else reg3;
	
	-- Select values to return for each channel when the host is reading
	with chanAddr select f2hData <=
		SW    when "0000000",
		--FbRdData(15 downto 11) & "000" when "0000001",
      reg1  when "0000001",
		reg2  when "0000010",
		reg3  when "0000011",
		x"00" when others;

	-- Assert that there's always data for reading, and always room for writing
	f2hValid <= '1';
	h2fReady <= '1';                                                         --END_SNIPPET(registers)

	-- CommFPGA module
	fx2Read_out <= fx2Read;
	fx2OE_out <= fx2Read;
	fx2Addr_out(1) <= '1';  -- Use EP6OUT/EP8IN, not EP2OUT/EP4IN.
	comm_fpga_fx2 : entity work.comm_fpga_fx2
		port map(
			-- FX2 interface
			fx2Clk_in      => fx2Clk_in,
			fx2FifoSel_out => fx2Addr_out(0),
			fx2Data_io     => fx2Data_io,
			fx2Read_out    => fx2Read,
			fx2GotData_in  => fx2GotData_in,
			fx2Write_out   => fx2Write_out,
			fx2GotRoom_in  => fx2GotRoom_in,
			fx2PktEnd_out  => fx2PktEnd_out,

			-- Channel read/write interface
			chanAddr_out   => chanAddr,
			h2fData_out    => h2fData,
			h2fValid_out   => h2fValid,
			h2fReady_in    => h2fReady,
			f2hData_in     => f2hData,
			f2hValid_in    => f2hValid,
			f2hReady_out   => f2hReady
		);
      
   -- Port map for verilog to vhdl
   ddr_wrapper : atlys_ddr_test
      PORT MAP(
         DDR2CLK_P,
         DDR2CLK_N,
         DDR2CKE,
         DDR2RASN,
         DDR2CASN,
         DDR2WEN,
         DDR2RZQ,
         DDR2ZIO,
         DDR2BA,

         DDR2A,
         DDR2DQ,

         DDR2UDQS_P,
         DDR2UDQS_N,
         DDR2LDQS_P,
         DDR2LDQS_N,
         DDR2LDM,
         DDR2UDM,
         DDR2ODT,

         clk, -- 100 MHz oscillator = 10ns period (top level pin)
         
         CALIBRATION,
         p0_rd_data,
         p0_rd_empty,
         p0_rd_en,
         p1_rd_count
      );

--   ddr_read : PROCESS (p0_rd_data)
--   BEGIN
--      arrayDDR_out <= arrayDDR_out;
--      IF (ndx >= 5) THEN
--         arrayDDR_out(ndx) <= p0_rd_data;
--         ndx <= ndx;
--      ELSE
--         arrayDDR_out(ndx) <= p0_rd_data;
--         ndx <= ndx + 1;
--      END IF;
--   END PROCESS;

--   ddr_read : PROCESS (p0_rd_data, p0_rd_empty, arrayDDR_out, p0_rd_en, p1_rd_count)
--   BEGIN
--      arrayDDR_out <= arrayDDR_out;
--      IF (p0_rd_en = '1' AND p0_rd_empty = '0') THEN --ndx >= 5) THEN
--         arrayDDR_out(TO_INTEGER(UNSIGNED(p1_rd_count))) <= p0_rd_data;
--         --ndx <= ndx + 1;
--      --ELSE
--         --arrayDDR_out(TO_INTEGER(UNSIGNED(p1_rd_count))) <= p0_rd_data;
--         --ndx <= ndx;
--      END IF;
--   END PROCESS;
   
--   -- How many clock cycles p0_rd_empty is low for
--   cnt_read : PROCESS (p0_rd_empty, enable)
--   BEGIN
--      IF (p0_rd_empty = '0' AND enable = '1') THEN
--         cnt <= cnt + 1;
--         enable <= '1';
--      ELSE
--         cnt <= cnt;
--         enable <= '0';
--      END IF;
--   END PROCESS;

  leds <= p0_rd_data(7 DOWNTO 0); -- & CALIBRATION;
--   led_out : PROCESS (clk)
--   BEGIN
--      IF (RISING_EDGE(clk)) THEN
--         CASE sw IS
--            WHEN x"00" => 
--               leds <= arrayDDR_out(0)(7 DOWNTO 0);
--            WHEN x"01" => 
--               leds <= arrayDDR_out(1)(7 DOWNTO 0);
--            WHEN x"02" => 
--               leds <= arrayDDR_out(2)(7 DOWNTO 0);
--            WHEN x"03" => 
--               leds <= arrayDDR_out(3)(7 DOWNTO 0);
--            WHEN x"04" => 
--               leds <= arrayDDR_out(4)(7 DOWNTO 0);
--            WHEN x"05" => 
--               leds <= arrayDDR_out(5)(7 DOWNTO 0);
--            WHEN OTHERS => 
--               leds <= "000000" & CALIBRATION;
--         END CASE;
--      END IF;
--   END PROCESS led_out;

--   WITH sw SELECT leds <=
--      arrayDDR_out(0)(7 DOWNTO 0) WHEN x"00",
--      arrayDDR_out(1)(7 DOWNTO 0) WHEN x"01",
--      arrayDDR_out(2)(7 DOWNTO 0) WHEN x"02",
--      arrayDDR_out(3)(7 DOWNTO 0) WHEN x"03",
--      arrayDDR_out(4)(7 DOWNTO 0) WHEN x"04",
--      arrayDDR_out(5)(7 DOWNTO 0) WHEN x"05",
--      STD_LOGIC_VECTOR(TO_UNSIGNED(cnt, 8)) WHEN x"06",
--      "000000" & CALIBRATION      WHEN OTHERS;

--   ddr : atlys_ddr_test
--      PORT MAP(
--         .DDR2CLK_P(DDR2CLK_P),
--         .DDR2CLK_N(DDR2CLK_N),
--         .DDR2CKE(DDR2CKE),
--         .DDR2RASN(DDR2RASN),
--         .DDR2CASN(DDR2CASN),
--         .DDR2WEN(DDR2WEN),
--         .DDR2RZQ(DDR2RZQ),
--         .DDR2ZIO(DDR2ZIO),
--         .DDR2BA(DDR2BA),
--
--         .DDR2A(DDR2A),
--         .DDR2DQ(DDR2DQ),
--
--         .DDR2UDQS_P(DDR2UDQS_P),
--         .DDR2UDQS_N(DDR2UDQS_N),
--         .DDR2LDQS_P(DDR2LDQS_P),
--         .DDR2LDQS_N(DDR2LDQS_N),
--         .DDR2LDM(DDR2LDM),
--         .DDR2UDM(DDR2UDM),
--         .DDR2ODT(DDR2ODT),
--
--         .clk(clk), -- 100 MHz oscillator = 10ns period (top level pin)
--         .leds(leds)
--      );

end Behavioral;

