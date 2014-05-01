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

entity top_level is
   generic (
      C3_P0_MASK_SIZE           : integer := 4;
      C3_P0_DATA_PORT_SIZE      : integer := 32;
      C3_P1_MASK_SIZE           : integer := 4;
      C3_P1_DATA_PORT_SIZE      : integer := 32;
      C3_MEMCLK_PERIOD          : integer := 3000;
      C3_RST_ACT_LOW            : integer := 0;
      C3_INPUT_CLK_TYPE         : string := "SINGLE_ENDED";
      C3_CALIB_SOFT_IP          : string := "TRUE";
      C3_SIMULATION             : string := "FALSE";
      DEBUG_EN                  : integer := 0;
      C3_MEM_ADDR_ORDER         : string := "ROW_BANK_COLUMN";
      C3_NUM_DQ_PINS            : integer := 16;
      C3_MEM_ADDR_WIDTH         : integer := 13;
      C3_MEM_BANKADDR_WIDTH     : integer := 3
   );
	port(
		CLK_I          : in  STD_LOGIC;
		RESET_I        : in  STD_LOGIC;
      --calib_done     : out std_logic;
      --error          : out std_logic;
      c3_sys_clk     : in  std_logic;
      c3_sys_rst_i   : in  std_logic;
      
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
		sw_in         : in    std_logic_vector(7 downto 0);  -- eight switches
		
----------------------------------------------------------------------------------
-- DDR2 Interface
----------------------------------------------------------------------------------
		mcb3_dram_dq            	: inout std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);
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
		mcb3_dram_ck_n             : out std_logic
	);
end top_level;

architecture behavioural of top_level is
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
	type array_type is array (0 to 8) of std_logic_vector(7 downto 0);
	signal array0 : array_type := (x"fc", x"11", x"05",
	                               x"02", x"fe", x"13",
	                               x"15", x"01", x"fd");

	-- Counter which endlessly puts items into the read FIFO for the host to read
	signal count, count_next       : std_logic_vector(7 downto 0) := (others => '0');

	-- Producer and consumer timers
	signal producerSpeed           : std_logic_vector(3 downto 0);
	signal consumerSpeed           : std_logic_vector(3 downto 0);
	
	-- Title : Port 1 - read & write
   signal c3_p1_cmd_clk           : std_logic;
   signal c3_p1_cmd_en            : std_logic;
   signal c3_p1_cmd_instr         : std_logic_vector(2 downto 0);
   signal c3_p1_cmd_bl            : std_logic_vector(5 downto 0);
   signal c3_p1_cmd_byte_addr     : std_logic_vector(29 downto 0);
   signal c3_p1_cmd_empty         : std_logic;
   signal c3_p1_cmd_full          : std_logic;
   signal c3_p1_wr_clk            : std_logic;
   signal c3_p1_wr_en             : std_logic;
   signal c3_p1_wr_mask           : std_logic_vector(C3_P1_MASK_SIZE - 1 downto 0);
   signal c3_p1_wr_data           : std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
   signal c3_p1_wr_full           : std_logic;
   signal c3_p1_wr_empty          : std_logic;
   signal c3_p1_wr_count          : std_logic_vector(6 downto 0);
   signal c3_p1_wr_underrun       : std_logic;
   signal c3_p1_wr_error          : std_logic;
   signal c3_p1_rd_clk            : std_logic;
   signal c3_p1_rd_en             : std_logic;
   signal c3_p1_rd_data           : std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
   signal c3_p1_rd_full           : std_logic;
   signal c3_p1_rd_empty          : std_logic;
   signal c3_p1_rd_count          : std_logic_vector(6 downto 0);
   signal c3_p1_rd_overflow       : std_logic;
   signal c3_p1_rd_error          : std_logic;
   
-- Title : Port 3 - read only
   signal c3_p3_cmd_clk           : std_logic;
   signal c3_p3_cmd_en            : std_logic;
   signal c3_p3_cmd_instr         : std_logic_vector(2 downto 0);
   signal c3_p3_cmd_bl            : std_logic_vector(5 downto 0);
   signal c3_p3_cmd_byte_addr     : std_logic_vector(29 downto 0);
   signal c3_p3_cmd_empty         : std_logic;
   signal c3_p3_cmd_full          : std_logic;
   signal c3_p3_rd_clk            : std_logic;
   signal c3_p3_rd_en             : std_logic;
   signal c3_p3_rd_data           : std_logic_vector(31 downto 0);
   signal c3_p3_rd_full           : std_logic;
   signal c3_p3_rd_empty          : std_logic;
   signal c3_p3_rd_count          : std_logic_vector(6 downto 0);
   signal c3_p3_rd_overflow       : std_logic;
   signal c3_p3_rd_error          : std_logic;
   
   signal c3_clk0 : std_logic := '0';
   --signal c3_rst0 : std_logic;
   signal c3_calib_done : std_logic;
	
   signal st : std_logic_vector(3 downto 0) := "0000";
   signal outer : std_logic_vector(7 downto 0) := "00000000";
   
begin                                                                     --BEGIN_SNIPPET(fifos)
	
   process (CLK_I)
   begin
      c3_clk0 <= NOT(c3_clk0);
   end process;
   
   
   -- Infer registers
	process(fx2Clk_in)
	begin
		if ( rising_edge(fx2Clk_in) ) then
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
	count_next <=
		std_logic_vector(unsigned(count) + 1) when readFifoInputValid = '1'
		else count;
	readFifoInputData <= count;
--	f2hValid <=
--		'0' when readFifoOutputValid = '0' and chanAddr = "0000000"
--		else '1';
--	readFifoOutputReady <=
--		'1' when f2hReady = '1' and chanAddr = "0000000"
--		else '0';
	
	f2hValid <=
		'1';
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
	producerSpeed <= not(sw_in(3 downto 0));
	producer_timer : entity work.timer
		port map(
			clk_in     => fx2Clk_in,
			ceiling_in => producerSpeed,
			tick_out   => readFifoInputValid
		);

	-- Consumer timer: how fast stuff is drained from the write FIFO
	consumerSpeed <= not(sw_in(7 downto 4));
	consumer_timer : entity work.timer
		port map(
			clk_in     => fx2Clk_in,
			ceiling_in => consumerSpeed,
			tick_out   => writeFifoOutputReady
		);

	-- LEDs
	--led_out <= writeFifoOutputData;
	--led_out <= c3_p1_rd_data(4 downto 0) & c3_p1_rd_empty & NOT(c3_calib_done) & c3_calib_done;
   
   -- use switches to manually test ddr2
--   c3_p1_wr_en <= sw_in(7);
--   c3_p1_wr_data <= x"0000001" & '0' & sw_in(2 downto 0);
--   
--   c3_p1_cmd_bl <= "000111" when sw_in(6) = '1' else "001111"; -- a total of seven words or Read 16 words (note, 0 will read one word)
--   c3_p1_cmd_byte_addr <= "00" & x"0000010"; -- to address 16
--   c3_p1_cmd_instr <= "000" when sw_in(5) = '1' else "001"; -- Prepare to write or issue a read command
--   
--   c3_p1_cmd_en <= sw_in(4);
--   c3_p1_rd_en <= sw_in(3);
   
   
   
   -- DDR2 Interface
   Inst_DD2: entity work.ddr_interface
   GENERIC MAP (
      C3_P0_MASK_SIZE           => 4,
      C3_P0_DATA_PORT_SIZE      => 32,
      C3_P1_MASK_SIZE           => 4,
      C3_P1_DATA_PORT_SIZE      => 32,
      C3_MEMCLK_PERIOD          => 3000,
      C3_RST_ACT_LOW            => 0,
      C3_INPUT_CLK_TYPE         => "SINGLE_ENDED",
      C3_CALIB_SOFT_IP          => "TRUE",
      C3_SIMULATION             => "FALSE",
      DEBUG_EN                  => 0,
      C3_MEM_ADDR_ORDER         => "ROW_BANK_COLUMN",
      C3_NUM_DQ_PINS            => 16,
      C3_MEM_ADDR_WIDTH         => 13,
      C3_MEM_BANKADDR_WIDTH     => 3
   )
   PORT MAP (
      CLK_I                => CLK_I,
		RESET_I              => RESET_I,
      --c3_clk0              => c3_clk0,
      --c3_rst0              => c3_rst0,
      c3_calib_done        => c3_calib_done,
      
      -- Port 1
      c3_p1_cmd_clk                           =>  c3_clk0, --c3_p1_cmd_clk, -- 
      c3_p1_cmd_en                            =>  c3_p1_cmd_en, -- 
      c3_p1_cmd_instr                         =>  c3_p1_cmd_instr, -- 
      c3_p1_cmd_bl                            =>  c3_p1_cmd_bl, -- 
      c3_p1_cmd_byte_addr                     =>  c3_p1_cmd_byte_addr, -- 
      c3_p1_cmd_empty                         =>  c3_p1_cmd_empty, -- 
      c3_p1_cmd_full                          =>  c3_p1_cmd_full, -- 
      
      c3_p1_wr_clk                            =>  c3_clk0, --c3_p1_wr_clk, -- 
      c3_p1_wr_en                             =>  c3_p1_wr_en, -- 
      c3_p1_wr_mask                           =>  c3_p1_wr_mask, -- 
      c3_p1_wr_data                           =>  c3_p1_wr_data, -- 
      c3_p1_wr_full                           =>  c3_p1_wr_full, -- 
      c3_p1_wr_empty                          =>  c3_p1_wr_empty, -- 
      c3_p1_wr_count                          =>  c3_p1_wr_count, -- 
      c3_p1_wr_underrun                       =>  c3_p1_wr_underrun, -- 
      c3_p1_wr_error                          =>  c3_p1_wr_error, -- 
      
      c3_p1_rd_clk                            =>  c3_clk0, --c3_p1_rd_clk,
      c3_p1_rd_en                             =>  c3_p1_rd_en,
      c3_p1_rd_data                           =>  c3_p1_rd_data,
      c3_p1_rd_full                           =>  c3_p1_rd_full,
      c3_p1_rd_empty                          =>  c3_p1_rd_empty,
      c3_p1_rd_count                          =>  c3_p1_rd_count,
      c3_p1_rd_overflow                       =>  c3_p1_rd_overflow,
      c3_p1_rd_error                          =>  c3_p1_rd_error,
      
      -- Port 3
      c3_p3_cmd_clk                           =>  c3_clk0, --c3_p3_cmd_clk, -- 
      c3_p3_cmd_en                            =>  c3_p3_cmd_en, -- 
      c3_p3_cmd_instr                         =>  c3_p3_cmd_instr, -- 
      c3_p3_cmd_bl                            =>  c3_p3_cmd_bl, -- 
      c3_p3_cmd_byte_addr                     =>  c3_p3_cmd_byte_addr, -- 
      c3_p3_cmd_empty                         =>  c3_p3_cmd_empty, -- 
      c3_p3_cmd_full                          =>  c3_p3_cmd_full, -- 
      
      c3_p3_rd_clk                            =>  c3_clk0, --c3_p3_rd_clk, -- 
      c3_p3_rd_en                             =>  c3_p3_rd_en, -- 
      c3_p3_rd_data                           =>  c3_p3_rd_data, -- 
      c3_p3_rd_full                           =>  c3_p3_rd_full, -- 
      c3_p3_rd_empty                          =>  c3_p3_rd_empty, -- 
      c3_p3_rd_count                          =>  c3_p3_rd_count, -- 
      c3_p3_rd_overflow                       =>  c3_p3_rd_overflow, -- 
      c3_p3_rd_error                          =>  c3_p3_rd_error, --
      
      -- DDR2 Interface
      mcb3_dram_dq         => mcb3_dram_dq,
		mcb3_dram_a          => mcb3_dram_a,
		mcb3_dram_ba         => mcb3_dram_ba,
		mcb3_dram_ras_n      => mcb3_dram_ras_n,
		mcb3_dram_cas_n      => mcb3_dram_cas_n,
		mcb3_dram_we_n       => mcb3_dram_we_n,
		mcb3_dram_odt        => mcb3_dram_odt,
		mcb3_dram_cke        => mcb3_dram_cke,
		mcb3_dram_dm         => mcb3_dram_dm,
		mcb3_dram_udqs       => mcb3_dram_udqs,
		mcb3_dram_udqs_n     => mcb3_dram_udqs_n,
		mcb3_rzq             => mcb3_rzq,
		mcb3_zio             => mcb3_zio,
		mcb3_dram_udm        => mcb3_dram_udm,
		mcb3_dram_dqs        => mcb3_dram_dqs,
		mcb3_dram_dqs_n      => mcb3_dram_dqs_n,
		mcb3_dram_ck         => mcb3_dram_ck,
		mcb3_dram_ck_n       => mcb3_dram_ck_n
   );
   
   
   c3_p1_wr_data <= x"00000014"; -- 20 in dec
   
   process (c3_clk0)
   begin
      if (rising_edge (c3_clk0)) then
         case st is
            when "0000" =>
               c3_p1_wr_en <= '1'; -- Start writing to the FIFO
               c3_p1_cmd_instr <= "000";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0';
               c3_p1_rd_en <= '0';
               outer <= outer;
               st <= "0001";
            when "0001" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "000"; -- Prepare to write
               c3_p1_cmd_bl <= "000000"; -- a total of one word
               c3_p1_cmd_byte_addr <= "00" & x"0000010"; -- to address 16
               c3_p1_cmd_en <= '0';
               c3_p1_rd_en <= '0';
               outer <= outer;
               st <= "0010";
            when "0010" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "000";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '1'; -- Write to command FIFO
               outer <= outer;
               st <= "0011";
            when "0011" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "000";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0'; -- Stop writing to command FIFO
               outer <= outer;
               st <= "0100";
            when "0100" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "000";
               c3_p1_cmd_bl <= "000000"; -- Read 1 word (note, 0 will read one word)
               c3_p1_cmd_byte_addr <= "00" & x"0000010"; -- From address 16
               c3_p1_cmd_en <= '0';
               outer <= outer;
               st <= "0101";
            when "0101" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "001"; -- Issue a read command
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0';
               outer <= outer;
               st <= "0110";
            when "0110" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "001";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '1'; -- Write to command FIFO
               outer <= outer;
               st <= "0111";
            when "0111" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "001";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0'; -- Stop writing to command FIFO
               outer <= outer;
               st <= "1000";
            when "1000" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "001";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0';
               c3_p1_rd_en <= '1'; -- Start reading data
               outer <= outer;
               st <= "1001";
            when "1001" =>
               c3_p1_wr_en <= '0';
               c3_p1_cmd_instr <= "001";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0';
               c3_p1_rd_en <= '1';
               outer <= c3_p1_rd_data (7 downto 0);
               st <= "1010";
            when others =>
               c3_p1_wr_en <= '0'; -- Start writing to the FIFO
               c3_p1_cmd_instr <= "001";
               c3_p1_cmd_bl <= "000000";
               c3_p1_cmd_byte_addr <= "00" & x"0000010";
               c3_p1_cmd_en <= '0';
               c3_p1_rd_en <= '0';
               outer <= outer;
               st <= "0000";
         end case;
      end if;
   end process;

   led_out <= outer;

end behavioural;
