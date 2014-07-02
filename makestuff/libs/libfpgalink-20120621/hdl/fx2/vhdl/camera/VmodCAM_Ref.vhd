----------------------------------------------------------------------------------
-- Company: Digilent Ro
-- Engineer: Elod Gyorgy
-- 
-- Create Date:    12:50:18 04/06/2011 
-- Design Name:		VmodCAM Reference Design 1
-- Module Name:    	VmodCAM_Ref - Behavioral
-- Project Name: 		
-- Target Devices: 
-- Tool versions: 
-- Description: The design shows off the video feed from two cameras located on
-- a VmodCAM add-on board connected to an Atlys. The video feeds are displayed on
-- a DVI-capable flat panel.
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
use ieee.numeric_std.all;
use IEEE.math_real.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

library digilent;
use digilent.Video.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity VmodCAM_Ref is
Generic (
		C3_NUM_DQ_PINS          : integer := 16; 
		C3_MEM_ADDR_WIDTH       : integer := 13; 
		C3_MEM_BANKADDR_WIDTH   : integer := 3
	);
   Port (
		TMDS_TX_2_P : out  STD_LOGIC;
		TMDS_TX_2_N : out  STD_LOGIC;
		TMDS_TX_1_P : out  STD_LOGIC;
		TMDS_TX_1_N : out  STD_LOGIC;
		TMDS_TX_0_P : out  STD_LOGIC;
		TMDS_TX_0_N : out  STD_LOGIC;
		TMDS_TX_CLK_P : out  STD_LOGIC;
		TMDS_TX_CLK_N : out  STD_LOGIC;
		TMDS_TX_SCL : inout  STD_LOGIC;
		TMDS_TX_SDA : inout  STD_LOGIC;
		SW_I : in STD_LOGIC_VECTOR(7 downto 0);
		LED_O : out STD_LOGIC_VECTOR(7 downto 0);
		CLK_I : in  STD_LOGIC;
		RESET_I : in  STD_LOGIC;
----------------------------------------------------------------------------------
-- Camera Board signals
----------------------------------------------------------------------------------
		CAMA_SDA : inout  STD_LOGIC;
		CAMA_SCL : inout  STD_LOGIC;
		CAMA_D_I : in  STD_LOGIC_VECTOR (7 downto 0);
		CAMA_PCLK_I : inout  STD_LOGIC;
		CAMA_MCLK_O : out STD_LOGIC;		
		CAMA_LV_I : in STD_LOGIC;
		CAMA_FV_I : in STD_LOGIC;
		CAMA_RST_O : out STD_LOGIC; --Reset active LOW
		CAMA_PWDN_O : out STD_LOGIC; --Power-down active HIGH

		CAMX_VDDEN_O : out STD_LOGIC; -- common power supply enable (can do power cycle)
		
		CAMB_SDA : inout  STD_LOGIC;
		CAMB_SCL : inout  STD_LOGIC;
		CAMB_D_I : in  STD_LOGIC_VECTOR (7 downto 0);
		CAMB_PCLK_I : inout  STD_LOGIC;
		CAMB_MCLK_O : out STD_LOGIC;		
		CAMB_LV_I : in STD_LOGIC;
		CAMB_FV_I : in STD_LOGIC;
		CAMB_RST_O : out STD_LOGIC; --Reset active LOW
		CAMB_PWDN_O : out STD_LOGIC; --Power-down active HIGH			  
----------------------------------------------------------------------------------
-- DDR2 Interface
----------------------------------------------------------------------------------
		mcb3_dram_dq            	: inout  std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);
		mcb3_dram_a                : out std_logic_vector(C3_MEM_ADDR_WIDTH-1 downto 0);
		mcb3_dram_ba               : out std_logic_vector(C3_MEM_BANKADDR_WIDTH-1 downto 0);
		mcb3_dram_ras_n            : out std_logic;
		mcb3_dram_cas_n            : out std_logic;
		mcb3_dram_we_n             : out std_logic;
		mcb3_dram_odt              : out std_logic;
		mcb3_dram_cke              : out std_logic;
		mcb3_dram_dm               : out std_logic;
		mcb3_dram_udqs             : inout  std_logic;
		mcb3_dram_udqs_n           : inout  std_logic;
		mcb3_rzq                   : inout  std_logic;
		mcb3_zio                   : inout  std_logic;
		mcb3_dram_udm              : out std_logic;
		mcb3_dram_dqs              : inout  std_logic;
		mcb3_dram_dqs_n            : inout  std_logic;
		mcb3_dram_ck               : out std_logic;
		mcb3_dram_ck_n             : out std_logic;

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
		fx2PktEnd_out : out   std_logic                     -- asserted (active-low) when a host read needs to be committed early
	);
end VmodCAM_Ref;

architecture Behavioral of VmodCAM_Ref is
signal SysClk, PClk, PClkX2, SysRst, SerClk, SerStb : std_logic;
signal MSel : std_logic_vector(1 downto 0);

signal VtcHs, VtcVs, VtcVde, VtcRst : std_logic;
signal VtcHCnt, VtcVCnt : NATURAL;

signal CamClk, CamClk_180, CamAPClk, CamBPClk, CamADV, CamBDV, CamAVddEn, CamBVddEn : std_logic;
signal CamAD, CamBD : std_logic_vector(15 downto 0);
signal dummy_t, int_CAMA_PCLK_I, int_CAMB_PCLK_I : std_logic;

attribute S: string;
attribute S of CAMA_PCLK_I: signal is "TRUE";
attribute S of CAMB_PCLK_I: signal is "TRUE";
attribute S of dummy_t: signal is "TRUE";

signal ddr2clk_2x, ddr2clk_2x_180, mcb_drp_clk, pll_ce_0, pll_ce_90, pll_lock, async_rst : std_logic;
signal FbRdy, FbRdEn, FbRdRst, FbRdClk : std_logic;
signal FbRdData : std_logic_vector(16-1 downto 0);
signal FbWrARst, FbWrBRst, int_FVA, int_FVB : std_logic;

--signal counter : integer range 0 to 29 := 0;
--signal clk_div, clk_buff : std_logic;
--signal red, green, blue : std_logic_vector(7 downto 0);

signal calib_done : std_logic;

-- FIFO --
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

-- FIFOs implementing the channels
signal fifoCount               : std_logic_vector(15 downto 0); -- MSB=writeFifo, LSB=readFifo

-- Write FIFO:
signal writeFifoInputData      : std_logic_vector(7 downto 0);  -- producer: data
signal writeFifoInputValid     : std_logic;                     --           valid flag
signal writeFifoInputReady     : std_logic;                     --           ready flag
signal writeFifoOutputData     : std_logic_vector(7 downto 0);  -- consumer: data
signal writeFifoOutputValid    : std_logic;                     --           valid flag
signal writeFifoOutputReady    : std_logic;                     --           ready flag

-- Read FIFO:
signal readFifoInputData       : std_logic_vector(7 downto 0);  -- producer: data
signal readFifoInputValid      : std_logic;                     --           valid flag
signal readFifoInputReady      : std_logic;                     --           ready flag
signal readFifoOutputData      : std_logic_vector(7 downto 0);  -- consumer: data
signal readFifoOutputValid     : std_logic;                     --           valid flag
signal readFifoOutputReady     : std_logic;                     --           ready flag

-- Arrays
-- first define the type of array
--type array_type is array (0 to 8) of std_logic_vector(7 downto 0);
--signal array0 : array_type := (x"fc", x"11", x"05",
--										 x"02", x"fe", x"13",
--										 x"15", x"01", x"fd");

--type array_type is array (0 to 480) of std_logic_vector(10240 downto 0);
--signal arrayA : array_type := (x"0f", x"f0", x"ff");
--signal colA : std_logic_vector(10240 downto 0) := x"00";
--signal rowA : integer := 0;
-- 2D array declaration
--type array_col is array (0 to 640) of std_logic_vector(15 downto 0);
--type array_vga is array (0 to 480, 0 to 640) of std_logic_vector(15 downto 0);

type array_vga is array (0 to 4, 0 to 9) of std_logic_vector(15 downto 0);
signal arrayA, prev_arrayA : array_vga;
---- initialization to zeros
----arrayA<=((others=>(others=>'0')), 
signal colA : integer := 0;
signal rowA : integer := 0;

--type array_rgb is array (0 to 2) of std_logic_vector(7 downto 0);
--signal rgb : array_rgb;

-- Counter which endlessly puts items into the read FIFO for the host to read
signal count, count_next       : std_logic_vector(7 downto 0) := (others => '0');


-- Producer and consumer timers
signal producerSpeed           : std_logic_vector(3 downto 0);
signal consumerSpeed           : std_logic_vector(3 downto 0);

begin
	
--	IBUFG_inst : IBUFG
--	port map(
--		O => clk_div,
--		I => CLK_I
--   );
--	
--	freq_div: process (RESET_I, CLK_I) begin
--	   if (RESET_I = '1') then
--		   counter <= 0;
--			clk_buff <= '0';
--		elsif (rising_edge(CLK_I)) then
--			if (counter = 29) then
--				clk_buff <= not(clk_buff);
--				counter <= 0;
--		   else
--			   counter <= counter + 1;
--		   end if;
--		end if;
--	end process;
	
--	process(clk_buff)
--	begin
--		if Rising_Edge(clk_buff) then
--			clk_div <= not clk_div;
--		end if;
--	end process;
	
	
	
	
--	clk_div <= CLK_I;
	---------------------------
	-- Start FIFO Stuff
	---------------------------
	-- Infer registers
	process(fx2Clk_in)
	begin
		if ( rising_edge(fx2Clk_in) ) then
--			if (count = x"02") then
--				count <= x"00";
--			else
--				count <= count_next;
--			end if;
         count <= count_next;
		end if;
	end process;

-- Wire up write FIFO to channel 0 writes:
	--   flags(2) driven by writeFifoOutputValid
	--   writeFifoOutputReady driven by consumer_timer
	--   LEDs driven by writeFifoOutputData
	writeFifoInputData <= h2fData;
	writeFifoInputValid <=
		'1' when h2fValid = '1' and chanAddr = "0000000"
		else '0';
	h2fReady <=
		'0' when writeFifoInputReady = '0' and chanAddr = "0000000"
		else '1';

	-- Wire up read FIFO to channel 0 reads:
	--   readFifoInputValid driven by producer_timer
	--   flags(0) driven by readFifoInputReady
	count_next <= --FbRdData(7 downto 0);
		std_logic_vector(unsigned(count) + 1) when readFifoInputValid = '1'
		else count;
	readFifoInputData <= count;
	f2hValid <=
		'0' when readFifoOutputValid = '0' and chanAddr = "0000000"
		else '1';
	readFifoOutputReady <=
		'1' when f2hReady = '1' and chanAddr = "0000000"
		else '0';
	
	-- Select values to return for each channel when the host is reading
	with chanAddr select f2hData <=
		readFifoOutputData     when "0000000",  -- get data from read FIFO
		fifoCount(15 downto 8) when "0000001",  -- read the depth of the write FIFO
		fifoCount(7 downto 0)  when "0000010",  -- read the depth of the read FIFO
		x"00"                  when others;                                   --END_SNIPPET(fifos)
	
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

	-- Write FIFO: written by host, read by LEDs
	write_fifo : entity work.fifo_wrapper
		port map(
			clk_in          => fx2Clk_in,
			depth_out       => fifoCount(15 downto 8),

			-- Production end
			inputData_in    => writeFifoInputData,
			inputValid_in   => writeFifoInputValid,
			inputReady_out  => writeFifoInputReady,

			-- Consumption end
			outputData_out  => writeFifoOutputData,
			outputValid_out => writeFifoOutputValid,
			outputReady_in  => writeFifoOutputReady
		);
	
	-- Read FIFO: written by counter, read by host
	read_fifo : entity work.fifo_wrapper
		port map(
			clk_in          => fx2Clk_in,
			depth_out       => fifoCount(7 downto 0),

			-- Production end
			inputData_in    => readFifoInputData,
			inputValid_in   => readFifoInputValid,
			inputReady_out  => readFifoInputReady,

			-- Consumption end
			outputData_out  => readFifoOutputData,
			outputValid_out => readFifoOutputValid,
			outputReady_in  => readFifoOutputReady
		);

	-- Producer timer: how fast stuff is put into the read FIFO
	producerSpeed <= not(sw_i(3 downto 0));
	producer_timer : entity work.timer
		port map(
			clk_in     => fx2Clk_in,
			ceiling_in => producerSpeed,
			tick_out   => readFifoInputValid
		);

	-- Consumer timer: how fast stuff is drained from the write FIFO
	consumerSpeed <= not(sw_i(7 downto 4));
	consumer_timer : entity work.timer
		port map(
			clk_in     => fx2Clk_in,
			ceiling_in => consumerSpeed,
			tick_out   => writeFifoOutputReady
		);


--	process(CamClk)
--	begin
--		if ( rising_edge(CamClk) ) then
--			if (count = x"02") then
--				count <= x"00";
--			else
--				count <= count_next;
--			end if;
--		end if;
--	end process;

	-- Wire up write FIFO to channel 0 writes:
	--   flags(2) driven by writeFifoOutputValid
	--   writeFifoOutputReady driven by consumer_timer
	--   LEDs driven by writeFifoOutputData
--	writeFifoInputData <= h2fData;
--	writeFifoInputValid <=
--		'1' when h2fValid = '1' and chanAddr = "0000000"
--		else '0';
--	h2fReady <=
--		'0' when writeFifoInputReady = '0' and chanAddr = "0000000"
--		else '1';
--
--	--array3(0) <= red;
--	--array3(1) <= green;
--	--array3(2) <= blue;
--	
--	process(CamClk)
--	begin
--		if (rising_edge (CamClk)) then
--			if (rowA = 5) then
--				rowA <= 0;
--			else
--				rowA <= rowA + 1;
--			end if;
--			
--			if (colA = 10) then
--				colA <= 0;
--			else
--				colA <= colA + 1;
--			end if;
--		end if;
--	end process;
--	
--	process(CLK_I)
--	begin
--		prev_arrayA <= arrayA;
--	end process;
--	
--	process(CamClk)
--	begin
--		if (rising_edge(CamClk)) then
--			arrayA <= prev_arrayA;
--			arrayA(rowA, colA) <= CamAD;
--		else
--			arrayA <= prev_arrayA;
--		end if;
--	end process;
--	
------- Replace rowA & colA with variables that change when it's being read
--	with count select readFifoInputData <=
--		arrayA(rowA, colA)(15 downto 8) when "00000000",
--		arrayA(rowA, colA)(7 downto 0)  when "00000001",
--		x"00"                           when others;
--	
--	-- Wire up read FIFO to channel 0 reads:
--	--   readFifoInputValid driven by producer_timer
--	--   flags(0) driven by readFifoInputReady
--	count_next <=
--		std_logic_vector(unsigned(count) + 1) when readFifoInputValid = '1'
--		else count;
--	
----	process(count) begin
----		case count is
----			when x"00" =>
----				readFifoInputData <= arrayA(rowA, colA)(15 downto 11) & "000";
----			when x"01" =>
----				readFifoInputData <= arrayA(rowA, colA)(10 downto 5) & "00";
----			when x"02" =>
----				readFifoInputData <= arrayA(rowA, colA)(4 downto 0) & "000";
----			when others =>
----				readFifoInputData <= x"00";
----		end case;
----	end process;
--
----	with count select readFifoInputData <=
----		arrayA(rowA, colA)(15 downto 11) & "000" when "00000000",
----		arrayA(rowA, colA)(10 downto 5)  & "00"  when "00000001",
----		arrayA(rowA, colA)(4 downto 0)   & "000" when "00000010",
----		x"00"                                    when others;
--
----	with count select readFifoInputData <=
----		CamAD(15 downto 11) & "000" when "00000000",
----		CamAD(10 downto 5)  & "00"  when "00000001",
----		CamAD(4 downto 0)   & "000" when "00000010",
----		x"00"                       when others;
--
----	with count select readFifoInputData <=
----		CamAD(15 downto 8) when "00000000",
----		CamAD(7 downto 0)  when "00000001",
----		x"00"              when others;
--
--	f2hValid <=
--		'0' when readFifoOutputValid = '0' and chanAddr = "0000000"
--		else '1';
--	readFifoOutputReady <=
--		'1' when f2hReady = '1' and chanAddr = "0000000"
--		else '0';
--	
--	-- Select values to return for each channel when the host is reading
--	with chanAddr select f2hData <=
--		readFifoOutputData when "0000000",  -- get data from read FIFO
--		CamAD(15 downto 8) when "0000001",  -- read the depth of the write FIFO
--		CamAD(7 downto 0)  when "0000010",  -- read the depth of the read FIFO
--		x"00"                  when others;                                   --END_SNIPPET(fifos)
--	
--	-- CommFPGA module
--	fx2Read_out <= fx2Read;
--	fx2OE_out <= fx2Read;
--	fx2Addr_out(1) <= '1';  -- Use EP6OUT/EP8IN, not EP2OUT/EP4IN.
--	comm_fpga_fx2 : entity work.comm_fpga_fx2
--		port map(
--			-- FX2 interface
--			fx2Clk_in      => fx2Clk_in,
--			fx2FifoSel_out => fx2Addr_out(0),
--			fx2Data_io     => fx2Data_io,
--			fx2Read_out    => fx2Read,
--			fx2GotData_in  => fx2GotData_in,
--			fx2Write_out   => fx2Write_out,
--			fx2GotRoom_in  => fx2GotRoom_in,
--			fx2PktEnd_out  => fx2PktEnd_out,
--
--			-- Channel read/write interface
--			chanAddr_out   => chanAddr,
--			h2fData_out    => h2fData,
--			h2fValid_out   => h2fValid,
--			h2fReady_in    => h2fReady,
--			f2hData_in     => f2hData,
--			f2hValid_in    => f2hValid,
--			f2hReady_out   => f2hReady
--		);
--
--	-- Write FIFO: written by host, read by LEDs
--	write_fifo : entity work.fifo_wrapper
--		port map(
--			clk_in          => fx2Clk_in,
--			depth_out       => fifoCount(15 downto 8),
--
--			-- Production end
--			inputData_in    => writeFifoInputData,
--			inputValid_in   => writeFifoInputValid,
--			inputReady_out  => writeFifoInputReady,
--
--			-- Consumption end
--			outputData_out  => writeFifoOutputData,
--			outputValid_out => writeFifoOutputValid,
--			outputReady_in  => writeFifoOutputReady
--		);
--	
--	-- Read FIFO: written by counter, read by host
--	read_fifo : entity work.fifo_wrapper
--		port map(
--			clk_in          => fx2Clk_in,
--			depth_out       => fifoCount(7 downto 0),
--
--			-- Production end
--			inputData_in    => readFifoInputData,
--			inputValid_in   => readFifoInputValid,
--			inputReady_out  => readFifoInputReady,
--
--			-- Consumption end
--			outputData_out  => readFifoOutputData,
--			outputValid_out => readFifoOutputValid,
--			outputReady_in  => readFifoOutputReady
--		);
--
--	-- Producer timer: how fast stuff is put into the read FIFO
--	producerSpeed <= not(SW_I(3 downto 0));
--	producer_timer : entity work.timer
--		port map(
--			clk_in     => fx2Clk_in,
--			ceiling_in => producerSpeed,
--			tick_out   => readFifoInputValid
--		);
--
--	-- Consumer timer: how fast stuff is drained from the write FIFO
--	consumerSpeed <= not(SW_I(7 downto 4));
--	consumer_timer : entity work.timer
--		port map(
--			clk_in     => fx2Clk_in,
--			ceiling_in => consumerSpeed,
--			tick_out   => writeFifoOutputReady
--		);
--	---------------------------
	-- End FIFO Stuff
	---------------------------
		
----------------------------------------------------------------------------------

--LED_O <= VtcHs & VtcHs & VtcVde & async_rst & "0000";
LED_O <= "000000" & NOT(calib_done) & calib_done;--CamAD(15 downto 8);
----------------------------------------------------------------------------------
-- System Control Unit
-- This component provides a System Clock, a Synchronous Reset and other signals
-- needed for the 40:4 serialization:
--	- Serialization clock (5x System Clock)
-- - Serialization strobe
-- - 2x Pixel Clock
----------------------------------------------------------------------------------
	Inst_SysCon: entity work.SysCon PORT MAP(
		CLK_I => CLK_I,
		CLK_O => open,
		RSTN_I => RESET_I,
		SW_I => SW_I,
		SW_O => open,
		RSEL_O => open, --resolution selector synchronized with PClk
		MSEL_O => MSel, --mode selector synchornized with PClk
		CAMCLK_O => CamClk,
		CAMCLK_180_O => CamClk_180,
		PCLK_O => PClk,
		PCLK_X2_O => PClkX2,
		PCLK_X10_O => SerClk,
		SERDESSTROBE_O => SerStb,
		
		DDR2CLK_2X_O => DDR2Clk_2x,
		DDR2CLK_2X_180_O => DDR2Clk_2x_180,
		MCB_DRP_CLK_O => mcb_drp_clk,
		PLL_CE_0_O => pll_ce_0,
		PLL_CE_90_O => pll_ce_90,
		PLL_LOCK => pll_lock,
		ASYNC_RST => async_rst
	);
	
----------------------------------------------------------------------------------
-- Video Timing Controller
-- Generates horizontal and vertical sync and video data enable signals.
----------------------------------------------------------------------------------
	Inst_VideoTimingCtl: entity digilent.VideoTimingCtl PORT MAP (
		PCLK_I => PClk,
		RSEL_I => R640_480P, --this project supports only VGA
		RST_I => VtcRst,
		VDE_O => VtcVde,
		HS_O => VtcHs,
		VS_O => VtcVs,
		HCNT_O => VtcHCnt,
		VCNT_O => VtcVCnt
	);
	VtcRst <= async_rst or not FbRdy;
----------------------------------------------------------------------------------
-- Frame Buffer
----------------------------------------------------------------------------------
	Inst_FBCtl: entity work.FBCtl 
	GENERIC MAP (
		DEBUG_EN => 0,
		COLORDEPTH=> 16
	)
	PORT MAP(
		RDY_O => FbRdy,
		ENC => FbRdEn,
		RSTC_I => FbRdRst,
		DOC => FbRdData,
		CLKC => FbRdClk,
		RD_MODE => MSel,
      CALIBRATION => calib_done,
		
		ENA => CamADV,
		RSTA_I => FbWrARst,
		DIA => CamAD,
		CLKA => CamAPClk,
		
		ENB => CamBDV,
		RSTB_I	=> FbWrBRst,
		DIB => CamBD,
		CLKB => CamBPClk,
		
		ddr2clk_2x => DDR2Clk_2x,
		ddr2clk_2x_180 => DDR2Clk_2x_180,
		pll_ce_0 => pll_ce_0,
		pll_ce_90 => pll_ce_90,
		pll_lock => pll_lock,
		async_rst => async_rst,
		mcb_drp_clk => mcb_drp_clk,
		mcb3_dram_dq => mcb3_dram_dq,
		mcb3_dram_a => mcb3_dram_a,
		mcb3_dram_ba => mcb3_dram_ba,
		mcb3_dram_ras_n => mcb3_dram_ras_n,
		mcb3_dram_cas_n => mcb3_dram_cas_n,
		mcb3_dram_we_n => mcb3_dram_we_n,
		mcb3_dram_odt => mcb3_dram_odt,
		mcb3_dram_cke => mcb3_dram_cke,
		mcb3_dram_dm => mcb3_dram_dm,
		mcb3_dram_udqs => mcb3_dram_udqs,
		mcb3_dram_udqs_n => mcb3_dram_udqs_n,
		mcb3_rzq => mcb3_rzq,
		mcb3_zio => mcb3_zio,
		mcb3_dram_udm => mcb3_dram_udm,
		mcb3_dram_dqs => mcb3_dram_dqs,
		mcb3_dram_dqs_n => mcb3_dram_dqs_n,
		mcb3_dram_ck => mcb3_dram_ck,
		mcb3_dram_ck_n => mcb3_dram_ck_n
	);

FbRdEn <= VtcVde;
FbRdRst <= async_rst;
FbRdClk <= PClk;
--Register FV signal to meet timing for FbWrXRst
	Inst_InputSync_FVA: entity digilent.InputSync PORT MAP(
		D_I => CAMA_FV_I,
		D_O => int_FVA,
		CLK_I => CamAPClk
	);
	Inst_InputSync_FVB: entity digilent.InputSync PORT MAP(
		D_I => CAMB_FV_I,
		D_O => int_FVB,
		CLK_I => CamBPClk
	);

FbWrARst <= async_rst or not int_FVA;
FbWrBRst <= async_rst or not int_FVB;

----------------------------------------------------------------------------------
-- DVI Transmitter
----------------------------------------------------------------------------------
	Inst_DVITransmitter: entity digilent.DVITransmitter PORT MAP(
		RED_I => FbRdData(15 downto 11) & "000",
		GREEN_I => FbRdData(10 downto 5) & "00",
		BLUE_I => FbRdData(4 downto 0) & "000",
		HS_I => VtcHs,
		VS_I => VtcVs,
		VDE_I => VtcVde,
		PCLK_I => PClk,
		PCLK_X2_I => PClkX2,
		SERCLK_I => SerClk,
		SERSTB_I => SerStb,
		TMDS_TX_2_P => TMDS_TX_2_P,
		TMDS_TX_2_N => TMDS_TX_2_N,
		TMDS_TX_1_P => TMDS_TX_1_P,
		TMDS_TX_1_N => TMDS_TX_1_N,
		TMDS_TX_0_P => TMDS_TX_0_P,
		TMDS_TX_0_N => TMDS_TX_0_N,
		TMDS_TX_CLK_P => TMDS_TX_CLK_P,
		TMDS_TX_CLK_N => TMDS_TX_CLK_N
	);

----------------------------------------------------------------------------------
-- Camera A Controller
----------------------------------------------------------------------------------
	Inst_camctlA: entity work.camctl
	PORT MAP (
		D_O => CamAD,
		PCLK_O => CamAPClk,
		DV_O => CamADV,
		RST_I => async_rst,
		CLK => CamClk,
		CLK_180 => CamClk_180,
		SDA => CAMA_SDA,
		SCL => CAMA_SCL,
		D_I => CAMA_D_I,
		PCLK_I => int_CAMA_PCLK_I,
		MCLK_O => CAMA_MCLK_O,
		LV_I => CAMA_LV_I,
		FV_I => CAMA_FV_I,
		RST_O => CAMA_RST_O,
		PWDN_O => CAMA_PWDN_O,
		VDDEN_O => CamAVddEn
	);
----------------------------------------------------------------------------------
-- Camera B Controller
----------------------------------------------------------------------------------
	Inst_camctlB: entity work.camctl
	PORT MAP (
		D_O => CamBD,
		PCLK_O => CamBPClk,
		DV_O => CamBDV,
		RST_I => async_rst,
		CLK => CamClk,
		CLK_180 => CamClk_180,
		SDA => CAMB_SDA,
		SCL => CAMB_SCL,
		D_I => CAMB_D_I,
		PCLK_I => int_CAMB_PCLK_I,
		MCLK_O => CAMB_MCLK_O,
		LV_I => CAMB_LV_I,
		FV_I => CAMB_FV_I,
		RST_O => CAMB_RST_O,
		PWDN_O => CAMB_PWDN_O,
		VDDEN_O => CamBVddEn
	);
	CAMX_VDDEN_O <= CamAVddEn and CamBVddEn;
	
----------------------------------------------------------------------------------
-- Workaround for IN_TERM bug AR# 	40818
----------------------------------------------------------------------------------
   Inst_IOBUF_CAMA_PCLK : IOBUF
   generic map (
      DRIVE => 12,
      IOSTANDARD => "DEFAULT",
      SLEW => "SLOW")
   port map (
      O => int_CAMA_PCLK_I,     -- Buffer output
      IO => CAMA_PCLK_I,   -- Buffer inout port (connect directly to top-level port)
      I => '0',     -- Buffer input
      T => dummy_t      -- 3-state enable input, high=input, low=output 
   );
   Inst_IOBUF_CAMB_PCLK : IOBUF
   generic map (
      DRIVE => 12,
      IOSTANDARD => "DEFAULT",
      SLEW => "SLOW")
   port map (
      O => int_CAMB_PCLK_I,     -- Buffer output
      IO => CAMB_PCLK_I,   -- Buffer inout port (connect directly to top-level port)
      I => '0',     -- Buffer input
      T => dummy_t      -- 3-state enable input, high=input, low=output 
   );	
dummy_t <= '1';
end Behavioral;
