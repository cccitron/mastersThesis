----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:13:53 04/25/2014 
-- Design Name: 
-- Module Name:    sad_loop_3x3 - Behavioral 
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

entity sad_loop_3x3 is
   Port ( 
      template3x3_in : in   STD_LOGIC_VECTOR (71 downto 0);
      search3x3_in   : in   STD_LOGIC_VECTOR (71 downto 0);
      sad_out        : out  STD_LOGIC_VECTOR (7  downto 0)
   );
end sad_loop_3x3;

architecture Behavioral of sad_loop_3x3 is

   type array_type_signed is array (0 to 2) of std_logic_vector(71 downto 0);
   signal search3x3 : array_type_search := (x"020705010704080406",
                                            x"070508070402040608",
                                            x"050806040207060805");
   
begin


end Behavioral;

