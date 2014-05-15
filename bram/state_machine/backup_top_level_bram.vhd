----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:01:11 05/04/2014 
-- Design Name: 
-- Module Name:    top_level - Behavioral 
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

entity top_level is
   port (
      clk           : in std_logic;
      reset         : IN STD_LOGIC;
      
      led_out       : out   std_logic_vector(7 downto 0); -- eight LEDs
      sw_in         : in    std_logic_vector(7 downto 0)  -- eight switches
   );
end top_level;

architecture Behavioral of top_level is

   SIGNAL clkR,  clkL  : STD_LOGIC := '0';
   SIGNAL enR,   enL   : STD_LOGIC := '1';
   --SIGNAL weR,   weL   : STD_LOGIC_VECTOR(0 DOWNTO 0) := "1";
   SIGNAL weR,   weL   : STD_LOGIC := '1';
   SIGNAL addrR, addrL : STD_LOGIC_VECTOR(5 DOWNTO 0) := "000000";
   SIGNAL dinR,  dinL  : STD_LOGIC_VECTOR(7 DOWNTO 0);
   SIGNAL doutR, doutL : STD_LOGIC_VECTOR(7 DOWNTO 0);

   type array_type_templ is array (0 to 56) of std_logic_vector(7 downto 0);
	signal templateArray : array_type_templ := (others => (others => '0'));
   
   SIGNAL buff : STD_LOGIC_VECTOR(7 DOWNTO 0);
   
   type array_type_search is array (0 to 56) of std_logic_vector(7 downto 0);
	signal searchArray : array_type_search := (x"02", x"07", x"05", x"08", x"06", x"00", x"02", x"07", x"05", x"08", x"06", x"00", x"02", x"07", x"05", x"08", x"06", x"00", x"00",
                                              x"01", x"07", x"04", x"02", x"07", x"09", x"01", x"07", x"04", x"02", x"07", x"09", x"01", x"07", x"04", x"02", x"07", x"09", x"00",
                                              x"08", x"04", x"06", x"08", x"05", x"03", x"08", x"04", x"06", x"08", x"05", x"03", x"08", x"04", x"06", x"08", x"05", x"03", x"00");

   SIGNAL nxt : STD_LOGIC := '0';
   SIGNAL bck : STD_LOGIC := '0';
   SIGNAL pos : STD_LOGIC_VECTOR(5 DOWNTO 0) := "000000";
   
   SIGNAL addr : INTEGER := 0;
   SIGNAL ndx : INTEGER := 0;
   SIGNAL output : STD_LOGIC := '0';
   
   COMPONENT bram_right_single
     PORT (
       clka : IN STD_LOGIC;
       ena : IN STD_LOGIC;
       wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
       addra : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
       dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
       douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
     );
   END COMPONENT;

   SIGNAL DATA    : integer := 8;
   --SIGNAL ADDR    : integer := 6;
   
--   type mem_type is array ( 0 to (2**ADDR)-1 ) of std_logic_vector(DATA-1 downto 0);
--   signal mem : mem_type;
--   type ram_t is array (0 to 255) of std_logic_vector(7 downto 0);
--   signal ram : ram_t := (others => (others => '0'));
   
begin

      -- Drives other internal clocks with fx2Clk_in
   clocks : PROCESS (clk)
   BEGIN
      clkR     <= NOT(clkR);
      --clkL     <= NOT(clkL);
   END PROCESS clocks;

--   PROCESS(clkR, reset) IS
--   BEGIN
--      ram           <= ram;
--      templateArray <= templateArray;
--      addr          <= addr;
--      weR           <= weR;
--      enR           <= enR;
--      output        <= output;
--
--      IF (reset = '1') THEN
--         addr          <= x"00";
--         ram           <= (others => (others => '0'));
--         templateArray <= (others => (others => '0'));
--         weR           <= '1';
--         enR           <= '0';
--         output        <= '0';
--      ELSIF (RISING_EDGE(clkR)) THEN
--         IF (weR = '1' AND enR = '0' AND addr < x"39") THEN
--            ram(TO_INTEGER(UNSIGNED(addr))) <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--            addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--         ELSE
--            weR <= '0';
--            addr <= x"00";
--            enR <= '1';
--         END IF;
--         
--         IF (weR = '0' AND enR = '1' AND addr < x"39") THEN
--            output <= '0';
--            templateArray(TO_INTEGER(UNSIGNED(addr))) <= ram(TO_INTEGER(UNSIGNED(addr)));
--            addr   <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--         ELSE
--            output <= '1';
--            weR    <= '1';
--            addr   <= x"00";
--            enR    <= '0';
--         END IF;
--      END IF;
--   END PROCESS;


--   PROCESS(clkR, reset) IS
--   BEGIN
--      IF (RISING_EDGE(clkR)) THEN
--         IF (weR = '1' AND enR = '0' AND addr < x"39") THEN
--            ram(TO_INTEGER(UNSIGNED(addr))) <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--            addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--         ELSIF (addr > x"38") THEN
--            weR <= '0';
--            addr <= x"00";
--            enR <= '1';
--            output <= '1';
--         ELSE
--            addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--            weR <= '0';
--            enR <= '1';
--            output <= '1';
--         END IF;
--      END IF;
--   END PROCESS;

--   PROCESS (clk, output, templateArray, addr) IS
--   BEGIN
--      IF (RISING_EDGE(clk) AND output = '1' AND addr < x"39") THEN
--         CASE output IS
--            WHEN '0' =>
--               led_out <= x"00";
--            WHEN '1' =>
--               led_out <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--            WHEN OTHERS => 
--               led_out <= x"ff"; --NULL;
--         END CASE;
--         addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--      END IF;
--   END PROCESS;


--   PROCESS (addr, searchArray) IS
--   BEGIN
--      IF (addr < x"38") THEN
--         led_out <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--         addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--      ELSE
--         led_out <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--         addr <= x"00";
--      END IF;
--   END PROCESS;
   
   
   
--   PROCESS (clk) IS
--   BEGIN
--      IF (RISING_EDGE(clk)) THEN
--         IF (addr < x"38") THEN
--            led_out <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--            addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--         ELSE
--            led_out <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--            addr <= x"00";
--         END IF;
--      ELSE
--         led_out <= x"ff";
--         addr <= addr;
--      END IF;
--   END PROCESS;

--   PROCESS (addr) IS
--   BEGIN
--      led_out <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--   END PROCESS;
   
   
--   addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1) when addr < x"39"
--      else x"00";



   bram_right : entity work.bram_right_single
      port map (
         Clk      => clkR,
         address  => addr,
         we       => weR,
         data_i   => dinR,
         data_o   => doutR
   );
   
--bram_right : bram_right_single
--  PORT MAP (
--    clka  => clkR,
--    ena   => enR,
--    wea   => weR,
--    addra => addr,
--    dina  => dinR,
--    douta => doutR
--  );

   --enR <= '1';
   --weR <= "1";

   PROCESS (clk) IS
   BEGIN
      weR <= weR;
      IF (RISING_EDGE(clk)) THEN
         IF (weR = '1' AND addr < 50) THEN
            dinR <= searchArray(addr);
            addr <= addr + 1; --STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
            led_out <= x"00";
         ELSIF (weR = '0' AND addr < 50) THEN
            led_out <= doutR;--searchArray(TO_INTEGER(UNSIGNED(addr)));
            addr <= addr + 1; --STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
         ELSE
            addr <= 0;
            weR <= NOT(weR);
            led_out <= x"ff"; --NULL;
         END IF;
      END IF;
   END PROCESS;

--   PROCESS(clkR, reset) IS
--   BEGIN
--      IF (reset = '1') THEN
--         weR    <= "1";
--         addr   <= x"00";
--         output <= '0';
--         templateArray <= (OTHERS => (OTHERS => '0'));
--      ELSIF (RISING_EDGE(clkR)) THEN
--         IF (weR = "1" AND addr < "111001") THEN
--            weR  <= "1";
--            dinR <= searchArray(TO_INTEGER(UNSIGNED(addr)));
--            addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--            output <= output;
--         ELSE
--            weR  <= "0";
--            addr <= x"00";
--            output <= '0';
--            IF (addr < "111001") THEN
--               templateArray(TO_INTEGER(UNSIGNED(addr))) <= doutR;
--               addr <= STD_LOGIC_VECTOR(UNSIGNED(addr) + 1);
--            ELSE
--               weR <= "1";
--               addr <= x"00";
--               output <= '1';
--            END IF;
--         END IF;
--      END IF;
--   END PROCESS;
--   
--   PROCESS(weR, output, templateArray, addr) IS
--   BEGIN
--      IF (weR = "1" AND output = '1') THEN
--         led_out <= templateArray(TO_INTEGER(UNSIGNED(addr)));
--      ELSE
--         led_out <= x"ff";
--      END IF;
--   END PROCESS;

--   bram_right : entity work.bram_right_single
--      port map(
--         a_clk  => clkR,
--         a_wr   => weR, 
--         a_addr => addrR,
--         a_din  => dinR,
--         a_dout => doutR
--   );
--   
   
--   PROCESS(clk) IS
--   BEGIN
--      IF (RISING_EDGE(clk)) THEN
--         IF (addrR < "111001") THEN
--            led_out <= searchArray(TO_INTEGER(UNSIGNED(addrR)));
--            addrR <= STD_LOGIC_VECTOR(UNSIGNED(addrR) + 1);
--         ELSE
--            addrR <= addrR;
--            led_out <= x"ff";
--            --templateArray(TO_INTEGER(UNSIGNED(addrR))) <= doutR;
--            
--         END IF;
--      end if;
--   end process;
   
   -- Drives other internal clocks with fx2Clk_in
--   clocks : PROCESS (clk)
--   BEGIN
--      clkR     <= NOT(clkR);
--      --clkL     <= NOT(clkL);
--   END PROCESS clocks;
--   
--   readRightBRAM : PROCESS(clkR) IS
--   BEGIN
--      IF (RISING_EDGE(clkR)) THEN
--         --led_out <= x"ff";
--         --buff <= x"00";
--         --buff <= doutR;
--         
--         templateArray(TO_INTEGER(UNSIGNED(addrR))) <= doutR;
--         IF (addrR < "111000") THEN
----            templateArray(TO_INTEGER(UNSIGNED(addrR))) <= buff;
--            addrR <= STD_LOGIC_VECTOR(UNSIGNED(addrR) + 1);
--            nxt <= '0';
--         ELSE
--            addrR <= addrR;
----            templateArray(TO_INTEGER(UNSIGNED(addrR))) <= buff;
--            nxt <= '1';
--         END IF;
--         
----      case sw_in(7) is
----			when '0' =>
----				led_out <= "00" & addrR; --dout_rom8x8;
----            nxt <= '0';
----			when '1' =>
----				led_out <= doutR(7 downto 0);
----            nxt <= '1';
----			when others => NULL; 
----		end case;
--         
----         CASE addrR IS
----            WHEN "111000" =>
----               templateArray(TO_INTEGER(UNSIGNED(addrR))) <= templateArray(TO_INTEGER(UNSIGNED(addrR)));
----               addrR <= addrR;
----               nxt <= '1';
----            WHEN OTHERS =>
----               templateArray(TO_INTEGER(UNSIGNED(addrR))) <= doutR;
----               addrR <= STD_LOGIC_VECTOR(UNSIGNED(addrR) + 1);
----               nxt <= '0';
----         END CASE;
----            IF (addrR < "111001") THEN
----               led_out <= doutR;
----               addrR <= STD_LOGIC_VECTOR(UNSIGNED(addrR) + 1);
----            ELSE
----               led_out <= doutR;
----               addrR <= "000000";
----            END IF;
--      END IF;
--   END PROCESS readRightBRAM;
--
--   --buff <= templateArray(TO_INTEGER(UNSIGNED(addrR)));
--
--   process (clkR) is
--   begin
--      IF (RISING_EDGE(clkR)) THEN
--         IF (addrR > "000001") THEN
--            IF (pos < "111001") THEN
--               led_out <= templateArray(TO_INTEGER(UNSIGNED(pos))); --"00" & addrR;   
--               pos <= STD_LOGIC_VECTOR(UNSIGNED(pos) + 1);
--            ELSE
--               led_out <= x"ff";
--               pos <= pos;
--            END IF;
--         END IF;
--      END IF;
--   end process;
   
--   process (clk) is
--   begin
--      IF (RISING_EDGE(clk)) THEN
--         IF (nxt = '1') THEN
--            led_out <= templateArray(TO_INTEGER(UNSIGNED(addrR))); --"00" & addrR;   
--            nxt <= '0';
--         END IF;
--      END IF;
--   end process;

end Behavioral;

