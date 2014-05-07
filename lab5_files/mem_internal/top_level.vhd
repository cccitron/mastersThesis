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
           sw_i : in  STD_LOGIC_VECTOR (7 downto 0); -- hooked to slide switch SW_I on Atlys board
           leds : out  STD_LOGIC_VECTOR (7 downto 0);  -- drives all eight LEDs on board
           btn  : in  std_logic_vector (5 downto 0)
      );
end top_level;

architecture Structural of top_level is

component ck_divider
	Port (CK_IN : in STD_LOGIC;
			CK_OUT : out STD_LOGIC);
end component;

-- Question: what would be different if instead of using this component we would
-- simply declare an array that would also need to be initialized with desired values?
-- typeram_tisarray(0to7)ofstd_logic_vector(7downto0);
-- signalram:ram_t:=(others=>(others=>'0'));
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

COMPONENT my_bram8x8
  PORT (
    clka : IN STD_LOGIC;
    ena : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
END COMPONENT;

--SIGNAL clkR,  clkL  : STD_LOGIC := '0';
--SIGNAL enR,   enL   : STD_LOGIC := '1';
--SIGNAL weR,   weL   : STD_LOGIC_VECTOR(0 DOWNTO 0) := "0";
--SIGNAL addrR, addrL : STD_LOGIC_VECTOR(5 DOWNTO 0) := "000000";
--SIGNAL dinR,  dinL  : STD_LOGIC_VECTOR(7 DOWNTO 0);
--SIGNAL doutR, doutL : STD_LOGIC_VECTOR(7 DOWNTO 0);

signal clk_1Hz : STD_LOGIC;
signal ena : std_logic := '1';
signal my_addr_counter : STD_LOGIC_VECTOR (2 downto 0) := "000";
signal bram_addr : std_logic_vector (5 downto 0) := "000000";
signal dout_rom8x8 : STD_LOGIC_VECTOR (7 downto 0);
signal bram_dout : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
-- for the time being, we'll only read from this block RAM, so
-- let's set all data ins to zero;
signal dina : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
signal bram_dina : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
signal wea : STD_LOGIC_VECTOR(0 DOWNTO 0) := "0"; -- no need for writing in this example
signal we : std_logic := '0';

type array_type_templ is array (0 to 56) of std_logic_vector(7 downto 0);
signal templateArray : array_type_templ;

   TYPE state_type_right IS (read_bramR, hold_bramR); --write_bramR, hold_bramR);
   SIGNAL stateR_PS_v : state_type_right := read_bramR;
   SIGNAL stateR_NS_v : state_type_right := read_bramR;

begin

   sync_readRightBRAM : PROCESS(clk_100MHz) IS
   BEGIN
      IF (RISING_EDGE(clk_100MHz)) THEN
         stateR_PS_v <= stateR_NS_v;
      END IF;
   END PROCESS sync_readRightBRAM;

   readRightBRAM : PROCESS(stateR_PS_v) IS
   BEGIN
        
      CASE stateR_PS_v IS
         WHEN read_bramR =>
            templateArray(TO_INTEGER(UNSIGNED(bram_addr))) <= bram_dout;
            stateR_NS_v <= hold_bramR;
            bram_addr <= "000000"; 
         WHEN hold_bramR =>
            --templateArray <= templateArray;
            stateR_NS_v <= hold_bramR;
            bram_addr <= "000000";
         WHEN OTHERS =>
            --templateArray <= templateArray;
            stateR_NS_v <= hold_bramR;
            bram_addr <= "000000";
      END CASE;
   END PROCESS readRightBRAM;


clock_divider : ck_divider port map (clk_100MHz, clk_1Hz); -- poor instantiation
memory1 : rom8x8 port map (
      addr => my_addr_counter, 
      dout => dout_rom8x8
   ); -- better instantiation
   
-- Instantiate BRAM.
memory2 : my_bram8x8 port map (
      clka => clk_1Hz, -- clock for writing data to RAM
      ena => ena,
      wea => wea, -- write enable signal for Port A
      addra => bram_addr, -- 3 bit address for the RAM
      dina =>  bram_dina, -- 8 bit data input to the RAM
      douta => bram_dout --8 bit data output to the RAM
   );

multiplex_out : process (clk_100MHz) is
begin
	if (clk_100MHz'event and clk_100MHz = '1') then
		case sw_i(7) is
			when '0' =>
				leds <= "00" & bram_addr; --dout_rom8x8;
			when '1' =>
				leds <= templateArray(0);
			when others => 
            leds <= x"ff"; 
		end case;
		my_addr_counter <= std_logic_vector( unsigned(my_addr_counter) + 1);
      dina <= std_logic_vector( unsigned(dina) + 1);
      --wea <=  std_logic_vector( unsigned(wea) + 1);
	end if;
end process;

--bram_dina <= "00" & sw_i(5 downto 0);
--
---- Enable writing to bram when switch(1) is high
--process (sw_i(6))
--begin
--   case sw_i(6) is
--      when '1' =>
--         wea <= "1";
--      when others =>
--         wea <= "0";
--   end case;
--end process;
--
---- Increase bram addr position when btn(1) (top button) is pressed
---- Decrease bram addr position when btn(3) (bottom button) is pressed
--process (btn)
--begin
--   if (btn(1) = '1') then
--      bram_addr <= std_logic_vector(unsigned(bram_addr) + 1);
--   elsif (btn(3) = '1') then
--      bram_addr <= std_logic_vector(unsigned(bram_addr) - 1);
--   elsif (btn(5) = '1') then
--      bram_addr <= "000000";
--   else
--      bram_addr <= bram_addr;
--   end if;
--end process;

end Structural;

