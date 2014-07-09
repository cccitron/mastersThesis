--
-- Copyright (C) 2009-2012 Chris McClelland
--
-- This program is free software: you can redistribute it and/or modify
-- it under the terms of the GNU Lesser General Public License as published by
-- the Free Software Foundation, either version 3 of the License, or
-- (at your option) any later version.
--
-- This program is distributed in the hope that it will be useful,
-- but WITHOUT ANY WARRANTY; without even the implied warranty of
-- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
-- GNU Lesser General Public License for more details.
--
-- You should have received a copy of the GNU Lesser General Public License
-- along with this program.  If not, see <http://www.gnu.org/licenses/>.
--
library ieee;

use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

USE work.window_array.all;

--package arrays is
--	TYPE pixelWindow IS ARRAY(0 TO 8) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
--end;
--package body arrays is
--end package body;

entity top_level is
	port(
		clk           : in std_logic;
      reset         : IN STD_LOGIC;
	
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
		fx2PktEnd_out : out   std_logic;                    -- asserted (active-low) when a host read needs to be committed early

		-- Onboard peripherals -----------------------------------------------------------------------
		--sseg_out      : out   std_logic_vector(7 downto 0); -- seven-segment display cathodes (one for each segment)
		--anode_out     : out   std_logic_vector(3 downto 0); -- seven-segment display anodes (one for each digit)
		led_out       : out   std_logic_vector(7 downto 0); -- eight LEDs
		sw_in         : in    std_logic_vector(7 downto 0)  -- eight switches
	);
end top_level;

architecture behavioural of top_level is

   -- Test component
--   component myComp is
--      Port ( CLK : in STD_LOGIC;
--             A   : in STD_LOGIC;
--             B   : in STD_LOGIC;
--             C   : out std_logic_vector(7 downto 0));
--   end component;

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

	-- Counter which endlessly puts items into the read FIFO for the host to read
	signal count, count_next       : std_logic_vector(7 downto 0) := (others => '0');

	-- Producer and consumer timers
	signal producerSpeed           : std_logic_vector(3 downto 0);
	signal consumerSpeed           : std_logic_vector(3 downto 0);	

--	-- Needed so that the comm_fpga_fx2 module can drive both fx2Read_out and fx2OE_out
--	signal fx2Read                 : std_logic;
--
--	-- Flags for display on the 7-seg decimal points
--	signal flags                   : std_logic_vector(3 downto 0);
--
--	-- Registers implementing the channels
--	signal checksum, checksum_next : std_logic_vector(15 downto 0) := x"0000";
--	signal reg0, reg0_next         : std_logic_vector(7 downto 0)  := x"00";
--	signal reg1, reg1_next         : std_logic_vector(7 downto 0)  := x"00";
--	signal reg2, reg2_next         : std_logic_vector(7 downto 0)  := x"00";
--	signal reg3, reg3_next         : std_logic_vector(7 downto 0)  := x"00";
	
	
	
	-- first define the type of array
	type array_type is array (0 to 2, 0 to 2) of std_logic_vector(7 downto 0);
	--type array_type is array (3 downto 0) of std_logic_vector(23 downto 0); -- reg4 is a 4 element array of 24-bit vectors
	signal array0 : array_type := ((x"fc", x"11", x"05"),
	                               (x"02", x"fe", x"13"),
	                               (x"15", x"01", x"fd"));
   --signal array1 : array_type := ((x"ff", x"11", x"05"),
	--                               (x"02", x"ff", x"13"),
	--                               (x"15", x"01", x"ff")); 
   --signal array2 : array_type := ((x"ff", x"11", x"05"),
	--                              (x"02", x"ff", x"13"),
	--                               (x"15", x"01", x"ff")); 
	                               
	-- initializing a 4 element array of 24 bit elements to zero.
	--array0 <= (others => (others => '0'));
	----- Alternate idea: single array w/ every 3 bytes being a diff pixel -----
--	signal reg4, reg4_next : std_logic_vector(7 downto 0) := x"00";
--	signal reg5, reg5_next : std_logic_vector(7 downto 0) := x"00";
--	signal reg6 : std_logic_vector(7 downto 0) := x"00";
	--array0(0) = x"05";
	--array0(1) := x"12";
	--array0(2) := x"ff";
	--array0(3) <= x"0000ff";
--	signal c_sig : std_logic_vector(7 downto 0) := x"00";
	
	signal reg0_templ, reg1_search, reg2_sad, reg3_disp : std_logic_vector(7 downto 0)  := x"00";
	signal reg4_bram_t, reg5_bram_s : STD_LOGIC_VECTOR(7 DOWNTO 0) := x"00";
	
	signal i, j : integer := 0;
	
--	-- pipeline adder stuff
--	SIGNAL dinA_template, dinB_search : pixelWindow := (OTHERS => (OTHERS => '0')); --STD_LOGIC_VECTOR(7 DOWNTO 0);
--	SIGNAL dout : STD_LOGIC_VECTOR(7 DOWNTO 0);
--	
--	-- bram stuff
--	COMPONENT bram_9x8
--		PORT (
--			clka : IN STD_LOGIC;
--			ena : IN STD_LOGIC;
--			wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
--			addra : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
--			dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
--			douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
--		);
--	END COMPONENT;
--	
--	SIGNAL ena : STD_LOGIC := '0';
--	SIGNAL wea : STD_LOGIC_VECTOR(0 DOWNTO 0) := "0";
--	SIGNAL addra, addra_next : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
--	SIGNAL dina, douta : STD_LOGIC_VECTOR(7 DOWNTO 0);
--	
--	-- State machine stuff
--	TYPE state_type IS (s0, s1, s2, s3); 
--	SIGNAL curr_s, next_s : state_type := s0;
--	SIGNAL posT, posT_next : INTEGER := 0;
--	
--	-- Other SAD things
--	SIGNAL reg0_templ : STD_LOGIC_VECTOR(7 DOWNTO 0);

	-- Currently for output of values over fpgalink
--   signal pos : std_logic_vector(1 downto 0) := "00";
   SIGNAL pos         : INTEGER := 0; -- RANGE 0 to 3 := 0;
   SIGNAL pos_next    : INTEGER := 0; -- RANGE 0 to 3 := 0;
   SIGNAL switch      : STD_LOGIC := '0';
   SIGNAL switch_next : STD_LOGIC := '0';
	
begin                                                                     --BEGIN_SNIPPET(registers)
	
--   comp : myComp port map ( CLK => fx2Clk_in,
--                            A   => sw_in(0),
--                            B   => sw_in(1),
--                            C   => c_sig);

   -- Infer registers
	process(fx2Clk_in)
	begin
		if ( rising_edge(fx2Clk_in) ) then
--			checksum <= checksum_next;
--			reg0 <= reg0_next;
--			reg1 <= reg1_next;
--			reg2 <= reg2_next;
--			reg3 <= reg3_next;
--			reg4 <= reg4_next;
--			reg5 <= reg5_next;
--			if (chanAddr = "0000100") then
--			   if (j > 2) then
--			      j <= 0;
--			      i <= i + 1;
--			      if (i > 2) then
--			         i <= 0;
--			      end if;
--			   else
--			      j <= j + 1;
--            end if;
--         end if;
			count <= count_next;
--			IF (pos = 2) THEN
--            pos <= 0;
--            switch <= NOT(switch);
--         ELSE
--            pos <= pos_next;
--            switch <= switch;
--         END IF;
		end if;
	end process;

	-- Wire up write FIFO to channel 0 writes:
	--   flags(2) driven by writeFifoOutputValid
	--   writeFifoOutputReady driven by consumer_timer
	--   LEDs driven by writeFifoOutputData
	writeFifoInputData <= h2fData;
	writeFifoInputValid <=
		'1' when h2fValid = '1' --and chanAddr = "0000000"
		else '0';
	h2fReady <=
		'0' when writeFifoInputReady = '0' -- and chanAddr = "0000000"
		else '1';

   output : PROCESS(chanAddr) IS --readFifoInputValid, switch) IS
   BEGIN
--      IF (readFifoInputValid = '1') THEN
--         IF (chanAad) THEN
--            count_next <= reg4_bram_t; --templateArray(ncol_c + 2 + pos);
--         ELSE
--            count_next <= reg5_bram_s; --"0000" & disparityArray(pos + 1);
--         END IF;
			CASE chanAddr IS
				WHEN "0000000" => count_next <= reg4_bram_t; --x"f0"; 
				WHEN "0000001" => count_next <= x"f1";
				WHEN "0000010" => count_next <= reg2_sad;
				WHEN "0000011" => count_next <= x"f3";
				WHEN "0000100" => count_next <= reg4_bram_t;
				WHEN "0000101" => count_next <= reg5_bram_s;
				WHEN OTHERS    => count_next <= x"ff";
			END CASE;
--      ELSE
--         IF (switch = '0') THEN
--            count_next <= reg2_sad; --templateArray(ncol_c + 1 + pos);
--         ELSE
--            count_next <= "0000" & disparityArray(pos);
--         END IF;
--			count_next <= reg2_sad;
--      END IF;
   END PROCESS output;

--   pos_next <= pos+1 WHEN readFifoInputValid = '1'
--      ELSE pos;

	readFifoInputData <= count;

	f2hValid <= '1' WHEN f2hReady = '1' ELSE '0';
	readFifoOutputReady <=
		'1' when f2hReady = '1' --and chanAddr = "0000000"
		else '0';
	
	-- Select values to return for each channel when the host is reading
	with chanAddr select f2hData <=
		readFifoOutputData     when "0000000",  -- get data from read FIFO
		fifoCount(15 downto 8) when "0000001",  -- read the depth of the write FIFO
		reg2_sad               WHEN "0000010", --fifoCount(7 downto 0)  when "0000010",  -- read the depth of the read FIFO
		reg4_bram_t				  WHEN "0000100",
		x"00"                  when others;
		
--	f2hData <= readFifoOutputData;

	
	-- Drive register inputs for each channel when the host is writing
--	checksum_next <=
--		std_logic_vector(unsigned(checksum) + unsigned(h2fData))
--			when chanAddr = "0000000" and h2fValid = '1'
--		else x"0000"
--			when chanAddr = "0000001" and h2fValid = '1' and h2fData(0) = '1'
--		else checksum;
--	reg0_next <= h2fData when chanAddr = "0000000" and h2fValid = '1' else reg0;
--	reg1_next <= h2fData when chanAddr = "0000001" and h2fValid = '1' else reg1;
--	reg2_next <= reg2_sad; --h2fData when chanAddr = "0000010" and h2fValid = '1' else reg2;
--	reg3_next <= h2fData when chanAddr = "0000011" and h2fValid = '1' else reg3;
--	reg4_next <= reg4_bram_t; --h2fData when chanAddr = "0000100" and h2fValid = '1' else reg4;
--	reg5_next <= reg5_bram_s;

	--reg4_next <= x"8a";
	--reg4 <= x"8a";
	
	-- Select values to return for each channel when the host is reading
--	with chanAddr select f2hData <=
--		reg0  when "0000000",
--		reg1  when "0000001",
--		reg2  when "0000010",
--		reg3  when "0000011",
--		reg4  when "0000100",
--		reg5  when "0000101",
--		x"00" when others;

	-- Assert that there's always data for reading, and always room for writing
	--f2hValid <= '1';
--	f2hValid <= '1' WHEN f2hReady = '1' ELSE '0';
--	h2fReady <= '1';                                                         --END_SNIPPET(registers)

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
	producerSpeed <= not("0000");--sw_in(3 downto 0));
	producer_timer : entity work.timer
		port map(
			clk_in     => fx2Clk_in,
			ceiling_in => producerSpeed,
			tick_out   => readFifoInputValid
		);
	
	-- Consumer timer: how fast stuff is drained from the write FIFO
	consumerSpeed <= not("0000");--sw_in(7 downto 4));
	consumer_timer : entity work.timer
		port map(
			clk_in     => fx2Clk_in,
			ceiling_in => consumerSpeed,
			tick_out   => writeFifoOutputReady
		);
	
	
	













		
	state_wrappings : entity work.state_wrapper
		Port map( 
			clk_I 		=> fx2Clk_in,
			
			h2fData_I  	=> h2fData,
			
			chanAddr_I 	=> chanAddr,
			f2hReady_I 	=> f2hReady,
			h2fValid_I 	=> h2fValid,
			
			sad_O			=> reg2_sad,
			--disp_O      => reg3_disp,
			
			bram_t_O		=> reg4_bram_t,
			bram_s_O		=> reg5_bram_s,
			
			sw_I  		=> sw_in,
			led_O 		=> led_out
		);
	
end behavioural;
