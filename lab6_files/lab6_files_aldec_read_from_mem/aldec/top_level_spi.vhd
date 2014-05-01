library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity top_level_spi is
	port (
		clk_100MHz : in std_logic; -- 100MHz clk, FPGA's external oscillator
		leds : buffer std_logic_vector (7 downto 0); -- drives all eight LEDs on board
		reset : in std_logic; -- attached to center push-button
		spi_clk : buffer std_logic;
		spi_cs : out std_logic;
		spi_din : in std_logic;
		spi_dout : out std_logic
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
		d_out    : out std_logic_vector (7 downto 0)
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
signal rg_spi_clk : std_logic;

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


begin
	
	
-- hard coded constants: the start address from where I start 
-- to read memory locations; and how many locations will I read?
start_address <= x"18A194"; 
howmany_locations_to_read <= "0011"; 
	
-- instantiate the spi controller; 
dut_spi_ctrl : spi_ctrl port map (
		clk_in => clk_100MHz,
		rst => reset,
		spi_clk => rg_spi_clk,
		spi_cs => spi_cs, 
		spi_din => spi_din,
		spi_dout => spi_dout,
		sel => sel,
		wr => wr,
		addr => addr,
		d_in => d_in,
		d_out => d_out);

spi_clk <= rg_spi_clk; -- buffer clock 'coz it's used by user application too;

-- register for driving the 8 LEDs; use a register like this
-- in case we want to control the precise time when we want to
-- pick info and display;
process (reset, clk_100MHz, state)
begin
	if reset = '1' then	 		
		leds <= "00111100";
	elsif (rising_edge(clk_100MHz) and state = S8) then
		leds <= leds_next;
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
spi_clk_cnt_next <= spi_clk_cnt + 1;

-- counter that monitors how many memory locations have 
-- been read so far; it is incremented each time we visit 
-- state S6 and SPI controller says (via d_out(2)) that 
-- data has been read and is available;
counter2: process (reset, clk_100MHz, state)
begin
	if reset = '1' then
		locations_cnt <= "0000";
	elsif (rising_edge(clk_100MHz) and state = S6 and d_out(2) = '1') then
		locations_cnt <= locations_cnt_next;	
	end if;
end process;
locations_cnt_next <= locations_cnt + 1;

-- advance the ad-hoc state machine responsible with reading
-- one Fash memory location; we use the spi_clk (which is
-- obtained by division by 4 of the main oscullator);
process (reset, clk_100MHz)
begin
	if reset = '1' then	 		
		state <= S0;
	elsif rising_edge(clk_100MHz) then
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
process (reset, clk_100MHz, state)
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