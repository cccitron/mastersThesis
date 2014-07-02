-- CopyLeft :-) Cristinel Ababei (cababei@buffalo.edu), October 2012
-- this is a simple design, in which we use an SPI controller 
-- to read one ore more byte starting from a desired location inside the 
-- Flash memory chip (N25Q128) available on the Atlys board; see the 
-- lab document for more details;
-- the SPI controller was developed by Johannes Hausensteiner 
-- and it is available at http://opencores.org/project,spiflashcontroller
-- I gratefully acknowledge and thank Johannes for making his work
-- publicly available;
-- NOTE: if you find a bug please send me an e-mail to let me know;

library ieee;
use ieee.std_logic_1164.all;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

--this is the top level design entity that uses the SPI controler
--as a component to interface with the memory on the Atlys board
--to read from it and "display" memory content on the 8 LEDs.
entity top_level_spi is
	port (
		clk_100MHz : in std_logic; -- 100MHz clk, FPGA's external oscillator
		leds : buffer std_logic_vector (6 downto 0); -- drives all eight LEDs on board
		reset_btn : in std_logic; -- attached to center push-button
		spi_clk : buffer std_logic;
		spi_cs : out std_logic;
		spi_din : in std_logic;
		spi_dout : out std_logic;
		spi_wp_bar : out std_logic;
		spi_hold_bar : out std_logic;
      
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
end top_level_spi;

architecture rtl of top_level_spi is

component spi_ctrl
	port (
		clk_in   : in std_logic;
		rst      : in std_logic;
		spi_clk  : buffer std_logic;
		spi_cs   : out std_logic;
		spi_din  : in std_logic;
		spi_dout : out std_logic;
		sel      : in std_logic;
		wr       : in std_logic;
		addr     : in std_logic_vector (2 downto 0);
		d_in     : in std_logic_vector (7 downto 0);
		d_out    : out std_logic_vector (7 downto 0);
		spi_wp_bar   : out std_logic;
		spi_hold_bar : out std_logic
	);
end component;

-- clock divider; I'll divide the 100MHz clock by 8;
component clk_divider
	generic (N: integer := 8); 
   port(
      clk, reset: in std_logic;
      clkout: out std_logic
   );
end component;

-- debounce circuit;
component debounce
   port(
      clk: in std_logic;
      sw: in std_logic;
      db_level, db_tick: out std_logic
   );
end component;

-- FLASH commands
constant NOP  : std_logic_vector (7 downto 0) := x"FF";  -- no cmd to execute
constant WREN : std_logic_vector (7 downto 0) := x"06";  -- write enable
constant WRDI : std_logic_vector (7 downto 0) := x"04";  -- write disable
constant RDSR : std_logic_vector (7 downto 0) := x"05";  -- read status reg
constant WRSR : std_logic_vector (7 downto 0) := x"01";  -- write stat. reg
constant RDCMD: std_logic_vector (7 downto 0) := x"03";  -- read data
constant F_RD : std_logic_vector (7 downto 0) := x"0B";  -- fast read data
constant PP :   std_logic_vector (7 downto 0) := x"02";  -- page program
constant SE :   std_logic_vector (7 downto 0) := x"D8";  -- sector erase
constant BE :   std_logic_vector (7 downto 0) := x"C7";  -- bulk erase
constant DP :   std_logic_vector (7 downto 0) := x"B9";  -- deep power down
constant RES :  std_logic_vector (7 downto 0) := x"AB";  -- read signature

-- all seven LEDs on Atlys board are driven by this register;
signal leds_next: std_logic_vector (7 downto 0);
-- debounced reset button; I do not think I should debounce
-- the reset button because Atlys manaul says that all buttons
-- and switches are already debaunced; but just to be on the safe
-- side ('coz not everything that the manual says is true);
signal reset: std_logic;
signal clk_100MHz_divided: std_logic; 

type state_t is (S0, S1, S2, S3, S4, S5, S6, S7, S8);
signal state, next_state: state_t;

-- auxiliary signals: communication between application logic and
-- the SPI controller
signal sel: std_logic;
signal wr: std_logic;
signal addr: std_logic_vector (2 downto 0);
signal d_in, d_out: std_logic_vector (7 downto 0);

-- I need two counters;
signal spi_clk_cnt, spi_clk_cnt_next: std_logic_vector (5 downto 0);
signal locations_cnt, locations_cnt_next: std_logic_vector (3 downto 0);

-- this is a signal that triggers re-setting counter1 to
-- the magic number 32, from where reading a new memory
-- location begins;
signal reset_spi_clk_cnt_to_32 : std_logic;

-- two signals that I use to hard-code from what address
-- I start reading and how many locations I will read;
signal start_address: std_logic_vector (23 downto 0);
signal howmany_locations_to_read: std_logic_vector (3 downto 0);

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


begin -- the fun here :)

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
	reg1_next <= x"00" when pos = '1' else x"ff"; --CamBD(15 downto 8) when pos = '0' else CamBD(7 downto 0); --h2fData when chanAddr = "0000001" and h2fValid = '1' else reg1;
	reg2_next <= ('0' & leds) when chanAddr = "0000010" and h2fValid = '1' else reg2;
	reg3_next <= ('0' & leds); --x"ff"; --h2fData when chanAddr = "0000011" and h2fValid = '1' else reg3;
	
	-- Select values to return for each channel when the host is reading
	with chanAddr select f2hData <=
		reg0 when "0000000",
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

-- hard coded constants: the start address from where I start 
-- to read memory locations; and how many locations will I read?
-- TODO: change this according to your needs;
start_address <= x"18A194"; -- x"000005" x"18A194" x"199A83" x"ffffa6" 
howmany_locations_to_read <= "0011"; -- for now I play with up to 16;


-- divide clock by 4 to be on the safe side; some of the things
-- inside the operation of SPI controller happen on falling
-- some on rising edge of the clock and I suspect some timing 
-- issues related to the push-button switches;
-- NOTE:
-- instantiate clk divider;
dut_clock_divider: clk_divider
   generic map(N=>8)
	port map(
      clk    => clk_100MHz, 
      reset  => reset,
      clkout => clk_100MHz_divided);

-- instantiate debounce circuit;
dut_reset_debounce: debounce 
   port map(
	clk      => clk_100MHz, 
   sw       => reset_btn,
	db_level => reset, 
   db_tick  => open);
				
-- instantiate spi controller; 
dut_spi_ctrl : spi_ctrl port map (
		clk_in => clk_100MHz_divided,
		rst => reset,
		spi_clk => spi_clk,
		spi_cs => spi_cs, 
		spi_din => spi_din,
		spi_dout => spi_dout,
		sel => sel,
		wr => wr,
		addr => addr,
		d_in => d_in,
		d_out => d_out,
		spi_wp_bar => spi_wp_bar,
		spi_hold_bar => spi_hold_bar);

-- look at Fig.3 in the lab document and study Aldec-HDL simulation;
-- when a memory location is read and brought in the application
-- logic (top-level), the information is stored in rx_sreg, which is then
-- transferred to rx_data --> d_out == leds_next --> leds;
-- therefore, it takes a few steps until state S8, when I can 
-- "pick-up" leds and drive the LEDs; this is tricky to see right
-- away and can be understood only by simulation in Aldec-HDL;
-- register for driving the 8 LEDs; use a register like this
-- in case we want to control the precise time when we want to
-- pick info and display;
process (reset, clk_100MHz_divided, state)
begin
	if reset = '1' then	 		
		leds <= "1111101";--"00111100";
	elsif (rising_edge(clk_100MHz_divided) and state = S8) then
		leds <= leds_next(6 downto 0);
	end if;
end process; 

-- counter that monitors chunks of 8 spi clocks;
counter1: process (reset, spi_clk, reset_spi_clk_cnt_to_32)
begin
	if reset = '1' then
		spi_clk_cnt <= "000000";
	elsif reset_spi_clk_cnt_to_32 = '1' then
		spi_clk_cnt <= "100000";
	elsif falling_edge (spi_clk) then
		spi_clk_cnt <= spi_clk_cnt_next;	
	end if;
end process;
spi_clk_cnt_next <= STD_LOGIC_VECTOR(UNSIGNED(spi_clk_cnt) + 1); --spi_clk_cnt + 1;

-- counter that monitors how many memory locations have 
-- been read so far; it is incremented each time we visit 
-- state S6 and SPI controller says (via d_out(2)) that 
-- data has been read and is available;
counter2: process (reset, clk_100MHz_divided, state)
begin
	if reset = '1' then
		locations_cnt <= "0000";
	elsif (rising_edge(clk_100MHz_divided) and state = S6 and d_out(2) = '1') then
		locations_cnt <= locations_cnt_next;	
	end if;
end process;
locations_cnt_next <= STD_LOGIC_VECTOR(UNSIGNED(locations_cnt) + 1); --locations_cnt + 1;

-- advance the ad-hoc state machine responsible with reading
-- one Fash memory location; we use the spi_clk (which is
-- obtained by division by 4 of the main oscullator);
process (reset, clk_100MHz_divided)
begin
	if reset = '1' then	 		
		state <= S0;
	elsif rising_edge(clk_100MHz_divided) then
		state <= next_state;
	end if;
end process;  

-- next description is taken from numonyx's N25Q128 datasheet:
-- "The device is first selected by driving Chip Select (S) Low. The instruction code for the Read
-- Data Bytes (READ) instruction is followed by a 3-byte address (A23-A0), each bit being
-- latched-in during the rising edge of Serial Clock (C). Then the memory contents, at that
-- address, is shifted out on Serial Data output (DQ1), each bit being shifted out, at a
-- maximum frequency fR, during the falling edge of Serial Clock (C).
-- The first byte addressed can be at any location. The address is automatically incremented
-- to the next higher address after each byte of data is shifted out. The whole memory can,
-- therefore, be read with a single Read Data Bytes (READ) instruction. When the highest
-- address is reached, the address counter rolls over to 000000h, allowing the read sequence
-- to be continued indefinitely."
-- state machine description: 
process (reset, clk_100MHz_divided, state, spi_clk_cnt)
begin
	leds_next <= d_out;
	reset_spi_clk_cnt_to_32 <= '0';
	case state is
		when S0 =>	
			sel <= '1'; addr <= "000"; wr <= '0'; d_in <= NOP;
			if reset = '1' then
				next_state <= S0;
			else
				next_state <= S1;
			end if;
		when S1 => -- the command 
			-- NOTE: there is a tricky subtlety about SPI controller in that
			-- here, I tell SPI controller that the command that needs to be
			-- communicated to the flash memory chip will be a reading from
			-- the chip, BUT, from the perspective of the application logic
			-- that talks to the SPI controller, the application logic "writes"
			-- something on d_in; that is why the bits formed by sel&addr&wr
			-- will be used to set a writing activity signal, wr_data, inside
			-- the SPI controller code spi_ctrl.vhd;
			-- NOTE: the notations all over the code are with the meaning that
			-- the SPI controller transmits (tx_) or receives (rx_) and the 
			-- aplication logic which uses the SPI controller, reads (rd_) or 
			-- writes (wr_) into the controller;
			sel <= '1'; 
			addr <= "001"; -- tells the spi_ctrl this is a command 
			wr <= '1';
			d_in <= RDCMD; -- read command is x"03"	 
			if spi_clk_cnt < "001000" then -- it takes 8 spi_clk ticks to transmit command 
				next_state <= S1;
			else
				next_state <= S2;
			end if;
		when S2 => -- address high 
			sel <= '1'; 
			addr <= "100"; -- tells the spi_ctrl this is high byte of address in Flash
			wr <= '1';
			d_in <= start_address(23 downto 16); -- high byte 00 of address x"000005"	
			if spi_clk_cnt < "010000" then -- 8+8=16 more clock cycles 
				next_state <= S2;
			else
				next_state <= S3;
			end if;
		when S3 => -- address mid 
			sel <= '1'; 
			addr <= "011"; -- tells the spi_ctrl this is mid byte of address in Flash
			wr <= '1';
			d_in <= start_address(15 downto 8); -- mid byte 00 of address x"000005"	  
			if  spi_clk_cnt < "011000" then -- 16+8=24
				next_state <= S3;
			else
				next_state <= S4;
			end if;
		when S4 => -- address low 
			sel <= '1'; 
			addr <= "010"; -- tells the spi_ctrl this is low byte of address in Flash
			wr <= '1';
			d_in <= start_address(7 downto 0); -- low byte 05 of address x"000005" 
			if spi_clk_cnt < "100000" then -- 24+8=32
				next_state <= S4;
			else
				next_state <= S5;
			end if;
		when S5 => -- memory data is being received	 
			sel <= '1'; addr <= "001"; wr <= '0'; d_in <= NOP;
			if  spi_clk_cnt < "101000" then -- 32+8=40
				next_state <= S5;
			else
				next_state <= S6;
			end if;
		when S6 => 
			-- at this time the contents of currently read memory location should've been 
			-- transmitted via SPI from Flash to the SPI controller; that is true, but
			-- we need a few more cycles to have basically the info going:
			-- rx_sreg --> rx_data --> d_out == leds_next --> leds
			sel <= '1'; addr <= "001"; wr <= '0'; d_in <= NOP;	
			if d_out(2) = '0' then
				next_state <= S6;
			else
				-- this is unique moment when I must increment locations_cnt
				-- counter2 to mark the fact that a memory locations has been read 
				-- and its content brought into the SPI controller; nex, this must
				-- be taken by the application logic that drives the LEDs;
				-- NOTE: you should study this (and convince yourself about it) with the
				-- Aldec-HDL simulations;
				-- this counter is incremented in its own process above;
				next_state <= S7;
			end if;
		when S7 => 
			--leds_next <= d_out;
			sel <= '1'; addr <= "000"; wr <= '0'; d_in <= NOP; 
			next_state <= S8;
		when S8 => 
			sel <= '1'; addr <= "000"; wr <= '0'; d_in <= NOP;
			-- NOTE: locations_cnt is the one that keeps track - in this
			-- hard coded manner - of how many locations we want to read;
			-- NOTE on the Atlys board only the content of the last memory
			-- location will be displayed; well, in fact each, but they are
			-- displayed at high frequency and we cannot see it :);
			if locations_cnt < howmany_locations_to_read then	
				-- reset counter1 to 32 and go back to state S5 to start
				-- receiving the contets of the next memory location;
				-- this is done by setting reset_spi_clk_cnt_to_32
				-- which triggers the counter reset in a different process;
				-- NOTE: you should study this (and convince yourself about it) with the
				-- Aldec-HDL simulations;
				reset_spi_clk_cnt_to_32 <= '1';				
				next_state <= S5; 
			else   
				reset_spi_clk_cnt_to_32 <= '0';
				next_state <= S8;
			end if;				
			
	end case;
end process;
  
end rtl;