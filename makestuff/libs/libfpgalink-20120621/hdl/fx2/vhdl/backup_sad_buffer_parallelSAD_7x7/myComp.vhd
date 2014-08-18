library ieee;

use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity myComp is
   Port (   CLK : in STD_LOGIC;
            A   : in STD_LOGIC;
            B   : in STD_LOGIC;
            C   : out std_logic_vector(7 downto 0));
end myComp;

architecture Behavioral of myComp is
   signal c_out : std_logic_vector(7 downto 0);
begin

   process(A, B)
   begin
      if (A = '1') and (B = '1') then
         c_out <= x"f5";
      elsif (A = '1') and (B = '0') then
         c_out <= x"a4";
      elsif (A = '0') and (B = '1') then
         c_out <= x"53";
      else
         c_out <= x"18";
      end if;
   end process;
   
   process (c_out)
   begin
      if (rising_edge(CLK)) then
         C <= c_out;
      end if;
   end process;

end Behavioral;
