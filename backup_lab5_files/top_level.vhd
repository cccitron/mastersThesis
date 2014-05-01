-- This is a simple design, in which we use two memories:
-- memory1: ROM created using a case statement and initialized to desired values
-- This should be inferred as a distributed RAM memory by the Xilinx tool
-- memory2: block RAM created using the Core Generator and then only instantiated
-- This mmeory is initialized using a .coe file
-- The contents of these memories will be displayed on the 7 LED of Atlys.
-- Slide switch SW(0) is used to select between the two memories.

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top_level is
    Port ( clk_100MHz : in  STD_LOGIC; -- FPGA's external oscillator
           switch : in  STD_LOGIC; -- hooked to slide switch SW(0) on Atlys board
           leds : out  STD_LOGIC_VECTOR (7 downto 0)); -- drives all eight LEDs on board
end top_level;

architecture Structural of top_level is

component ck_divider
	Port (CK_IN : in STD_LOGIC;
			CK_OUT : out STD_LOGIC);
end component;

-- Question: what would be different if instead of using this component we would
-- simply declare an array that would also need to be initialized with desired values?
-- type ram_t is array (0 to 7) of std_logic_vector(7 downto 0);
-- signal ram : ram_t := (others => (others => '0'));
-- Exersize: Currently if mem_selector changes the counter does not reset. Change 
-- the code such that each time the mem_selector changes the counter is reset to
-- zero.
component rom8x8
	PORT (addr : in  std_logic_vector(2 downto 0);
			dout : out std_logic_vector(7 downto 0));
end component;

-- This component is created using the Core Generator. Its VHDL description
-- is inside ipcore_dir/my_bram8x8.vhd, which was created during the use
-- Core Generator as explained in the lab.
component my_bram8x8
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0); 
    addra : IN STD_LOGIC_VECTOR(2 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
end component;

signal clk_1Hz : STD_LOGIC;
signal my_addr_counter : STD_LOGIC_VECTOR (2 downto 0) := "000";
signal dout_rom8x8, dout_bram8x8 : STD_LOGIC_VECTOR (7 downto 0);
-- for the time being, we'll only read from this block RAM, so
-- let's set all data ins to zero;
signal dina_null : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
signal wea_null : STD_LOGIC_VECTOR(0 DOWNTO 0) := "0"; -- no need for writing in this example

begin

clock_divider : ck_divider port map (clk_100MHz, clk_1Hz); -- poor instantiation
memory1 : rom8x8 port map (addr => my_addr_counter, dout => dout_rom8x8); -- better instantiation
-- Instantiate BRAM.
memory2 : my_bram8x8 port map (
	clka => clk_1Hz, -- clock for writing data to RAM
	wea => wea_null, -- write enable signal for Port A
	addra => my_addr_counter, -- 3 bit address for the RAM
	dina => dina_null, -- 8 bit data input to the RAM
	douta => dout_bram8x8); --8 bit data output to the RAM

multiplex_out : process (clk_1Hz) is
begin
	if (clk_1Hz'event and clk_1Hz = '1') then
		case switch is
			when '0' =>
				leds <= dout_rom8x8;
			when '1' =>
				leds <= dout_bram8x8;
			when others => NULL; 
		end case;
		my_addr_counter <= std_logic_vector( unsigned(my_addr_counter) + 1);
	end if;
end process;

end Structural;

