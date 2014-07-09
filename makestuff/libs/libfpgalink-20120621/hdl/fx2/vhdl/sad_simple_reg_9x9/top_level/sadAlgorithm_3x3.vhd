----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:20:30 06/23/2014 
-- Design Name: 
-- Module Name:    sadAlgorithm_3x3 - Behavioral 
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
-- arithmetic functions with Signed or TO_UNSIGNED values
use IEEE.NUMERIC_STD.ALL;

USE work.window_array.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sadAlgorithm_3x3 is
   Port (
		clk_I : IN STD_LOGIC;

		template_window_I : IN pixelWindow;
		search_window_I   : IN pixelWindow;
      
      sad_O : OUT STD_LOGIC_VECTOR (9 DOWNTO 0)
   );
end sadAlgorithm_3x3;

architecture Behavioral of sadAlgorithm_3x3 is
	
--	type array_type_temp is array (0 to 7) of SIGNED(9 downto 0);
	SIGNAL temp : signedWindow;
	
	SIGNAL template_window, search_window : pixelWindow;
	
	SIGNAL sad_sum : SIGNED(10 DOWNTO 0);
   
begin
   
	template_window <= template_window_I;
	search_window <= search_window_I;
	
   -- Sum of the Absolute Difference between the template 3x3 and search 3x3
   sadding : PROCESS (clk_I)
   BEGIN
		IF (RISING_EDGE(clk_I)) THEN
			temp(0) <= abs(SIGNED("000" & UNSIGNED(template_window(0))) - SIGNED("000" & UNSIGNED(search_window(0))));
			
			temp(1) <= temp(0) + abs(SIGNED("000" & UNSIGNED(template_window(1))) - SIGNED("000" & UNSIGNED(search_window(1))));
			temp(2) <= temp(1) + abs(SIGNED("000" & UNSIGNED(template_window(2))) - SIGNED("000" & UNSIGNED(search_window(2))));
			temp(3) <= temp(2) + abs(SIGNED("000" & UNSIGNED(template_window(3))) - SIGNED("000" & UNSIGNED(search_window(3))));
			temp(4) <= temp(3) + abs(SIGNED("000" & UNSIGNED(template_window(4))) - SIGNED("000" & UNSIGNED(search_window(4))));
			temp(5) <= temp(4) + abs(SIGNED("000" & UNSIGNED(template_window(5))) - SIGNED("000" & UNSIGNED(search_window(5))));
			temp(6) <= temp(5) + abs(SIGNED("000" & UNSIGNED(template_window(6))) - SIGNED("000" & UNSIGNED(search_window(6))));
			temp(7) <= temp(6) + abs(SIGNED("000" & UNSIGNED(template_window(7))) - SIGNED("000" & UNSIGNED(search_window(7))));
			
			sad_sum <= temp(7) + abs(SIGNED("000" & UNSIGNED(template_window(8))) - SIGNED("000" & UNSIGNED(search_window(8))));
		END IF;
   END PROCESS sadding;
   
--   sad_O <= STD_LOGIC_VECTOR(sad_sum(8 DOWNTO 0));

	-- Assigns the values from summer array to sad array
   sad_assign : PROCESS(sad_sum)
   BEGIN
      IF (sad_sum < 1024) THEN
         sad_O <= STD_LOGIC_VECTOR(sad_sum(9 DOWNTO 0));
      ELSE
         sad_O <= "11" & x"ff";
      END IF;
   END PROCESS sad_assign;
	
end Behavioral;

