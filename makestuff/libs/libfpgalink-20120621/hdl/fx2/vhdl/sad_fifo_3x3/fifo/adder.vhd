----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:59:38 04/24/2014 
-- Design Name: 
-- Module Name:    adder - Behavioral 
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
--use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

--ENTITY adder IS
--    PORT ( a   : IN   STD_LOGIC_VECTOR (71 DOWNTO 0);
--           b   : IN   STD_LOGIC_VECTOR (71 DOWNTO 0);
--           sum : OUT  STD_LOGIC_VECTOR (7  DOWNTO 0));
--END adder;
--
--ARCHITECTURE Behavioral OF adder IS
--   
----   SIGNAL as     : SIGNED (8 DOWNTO 0);
----   SIGNAL bs     : SIGNED (8 DOWNTO 0);
----   SIGNAL summer : SIGNED (8 DOWNTO 0);
--
--   TYPE array_type_signed IS ARRAY (0 TO 8) OF SIGNED (8 DOWNTO 0);
--
--   SIGNAL as     : array_type_signed;-- := (OTHERS => '0');
--   SIGNAL bs     : array_type_signed;-- := (OTHERS => '0');
--   SIGNAL summer : array_type_signed;-- := (OTHERS => '0');
--   
----   signal search3x3 : array_type_search := (x"020705010704080406",
----                                            x"070508070402040608",
----                                            x"050806040207060805");
--   SIGNAL sum9bit : SIGNED (8 DOWNTO 0) := '0' & x"00"; --STD_LOGIC_VECTOR (7 DOWNTO 0) := x"00";
--   SIGNAL cnt     : INTEGER := 0;
--
--BEGIN
--   
--   absolute_difference : PROCESS (a, b)
--   BEGIN
--      cnt <= 0;
--      FOR i IN 0 TO 8 LOOP
--         as(i) <= SIGNED('0' & a((((i+1)*8)-1) DOWNTO (i*8)));
--         bs(i) <= SIGNED('0' & b((((i+1)*8)-1) DOWNTO (i*8)));
--         summer(i) <= ABS(as(i) - bs(i));
----         sum8bit <= sum8bit + summer(i);
--         cnt <= i;
--      END LOOP;
--      
----      IF (cnt > 7) THEN
----         sum <= STD_LOGIC_VECTOR(sum8bit(7 DOWNTO 0));
----      ELSE
----         sum <= x"ff";
----      END IF;
--   END PROCESS absolute_difference;
--   
--   sum_of_AD : PROCESS (summer, cnt)
--   BEGIN
--      IF (cnt > 7) THEN
----         sum <= STD_LOGIC_VECTOR(sum8bit(7 DOWNTO 0));
--         FOR i IN 0 to 8 LOOP
--            sum9bit <= sum9bit + summer(i);
--         END LOOP;
--         sum <= STD_LOGIC_VECTOR(sum9bit(7 DOWNTO 0));
--      ELSE 
--         sum9bit <= '0' & x"00";
--         sum <= x"ff";
--      END IF;
----      FOR i IN 0 TO 8 LOOP
----         sum <= STD_LOGIC_VECTOR(summer(7 DOWNTO 0));
----      END LOOP;
--   END PROCESS sum_of_AD;
--
--END Behavioral;


--entity adder is
--    Port ( a   : in   STD_LOGIC_VECTOR (71 downto 0);
--           b   : in   STD_LOGIC_VECTOR (71 downto 0);
--           sum : out  STD_LOGIC_VECTOR (7  downto 0));
--end adder;
--
--architecture Behavioral of adder is
--   
--   signal as     : signed (80 DOWNTO 0);
--   signal bs     : signed (80 DOWNTO 0);
--   signal summer : signed (8  DOWNTO 0);
--
--begin
--   
--   template_signed : PROCESS (a)
--   begin
--      as <= SIGNED('0' & a(71 DOWNTO 64)) & 
--            SIGNED('0' & a(63 DOWNTO 56)) & 
--            SIGNED('0' & a(55 DOWNTO 48)) & 
--            SIGNED('0' & a(47 DOWNTO 40)) & 
--            SIGNED('0' & a(39 DOWNTO 32)) & 
--            SIGNED('0' & a(31 DOWNTO 24)) & 
--            SIGNED('0' & a(23 DOWNTO 16)) & 
--            SIGNED('0' & a(15 DOWNTO  8)) & 
--            SIGNED('0' & a( 7 DOWNTO  0));
--   END PROCESS template_signed;
--   
--   search_signed : PROCESS (b)
--   BEGIN
--      bs <= SIGNED('0' & b(71 DOWNTO 64)) & 
--            SIGNED('0' & b(63 DOWNTO 56)) & 
--            SIGNED('0' & b(55 DOWNTO 48)) & 
--            SIGNED('0' & b(47 DOWNTO 40)) & 
--            SIGNED('0' & b(39 DOWNTO 32)) & 
--            SIGNED('0' & b(31 DOWNTO 24)) & 
--            SIGNED('0' & b(23 DOWNTO 16)) & 
--            SIGNED('0' & b(15 DOWNTO  8)) & 
--            SIGNED('0' & b( 7 DOWNTO  0));
--   END PROCESS search_signed;
--   
--   summer_signed : PROCESS (as, bs)
--   BEGIN
--      summer <=   abs(as(80 DOWNTO 72) - bs(80 DOWNTO 72)) + 
--                  abs(as(71 DOWNTO 63) - bs(71 DOWNTO 63)) + 
--                  abs(as(62 DOWNTO 54) - bs(62 DOWNTO 54)) + 
--                  abs(as(53 DOWNTO 45) - bs(53 DOWNTO 45)) + 
--                  abs(as(44 DOWNTO 36) - bs(44 DOWNTO 36)) + 
--                  abs(as(35 DOWNTO 27) - bs(35 DOWNTO 27)) + 
--                  abs(as(26 DOWNTO 18) - bs(26 DOWNTO 18)) + 
--                  abs(as(17 DOWNTO  9) - bs(17 DOWNTO  9)) + 
--                  abs(as(8  DOWNTO  0) - bs(8  DOWNTO  0));
--   END PROCESS summer_signed;
--   
--   sum_abs_diff : PROCESS (summer)
--   BEGIN
--      sum <= std_logic_vector(summer(7 DOWNTO 0));
--   END PROCESS sum_abs_diff;
--
--end Behavioral;




entity adder is
    Port ( a   : in   STD_LOGIC_VECTOR (71 downto 0);
           b   : in   STD_LOGIC_VECTOR (71 downto 0);
           sum : out  STD_LOGIC_VECTOR (7  downto 0));
end adder;

architecture Behavioral of adder is
   
   signal summer : signed (8  DOWNTO 0);

begin

      summer <=   abs(SIGNED('0' & a(71 DOWNTO 64)) - SIGNED('0' & b(71 DOWNTO 64))) + 
                  abs(SIGNED('0' & a(63 DOWNTO 56)) - SIGNED('0' & b(63 DOWNTO 56))) + 
                  abs(SIGNED('0' & a(55 DOWNTO 48)) - SIGNED('0' & b(55 DOWNTO 48))) + 
                  abs(SIGNED('0' & a(47 DOWNTO 40)) - SIGNED('0' & b(47 DOWNTO 40))) + 
                  abs(SIGNED('0' & a(39 DOWNTO 32)) - SIGNED('0' & b(39 DOWNTO 32))) + 
                  abs(SIGNED('0' & a(31 DOWNTO 24)) - SIGNED('0' & b(31 DOWNTO 24))) + 
                  abs(SIGNED('0' & a(23 DOWNTO 16)) - SIGNED('0' & b(23 DOWNTO 16))) + 
                  abs(SIGNED('0' & a(15 DOWNTO  8)) - SIGNED('0' & b(15 DOWNTO  8))) + 
                  abs(SIGNED('0' & a( 7 DOWNTO  0)) - SIGNED('0' & b( 7 DOWNTO  0)));
   
   sum_abs_diff : PROCESS (summer)
   BEGIN
      sum <= STD_LOGIC_VECTOR(summer(7 DOWNTO 0));
   END PROCESS sum_abs_diff;

end Behavioral;




--entity adder is
--    Port ( a   : in   STD_LOGIC_VECTOR (71 downto 0);
--           b   : in   STD_LOGIC_VECTOR (71 downto 0);
--           sum : out  STD_LOGIC_VECTOR (7  downto 0));
--end adder;
--
--architecture Behavioral of adder is
--   
--   signal as     : signed (8 downto 0);
--   signal bs     : signed (8 downto 0);
--   signal summer : signed (8 downto 0);
--
--begin
--   
--   as <= signed('0' & a(7 downto 0));
--   bs <= signed('0' & b(7 downto 0));
--   summer <= abs(as - bs);
--   
--   process (summer)
--   begin
--      sum <= std_logic_vector(summer(7 downto 0));
--   end process;
--
--end Behavioral;

