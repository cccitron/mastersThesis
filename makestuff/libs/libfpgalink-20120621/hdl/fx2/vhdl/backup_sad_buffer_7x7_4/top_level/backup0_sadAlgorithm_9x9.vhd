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

entity sadAlgorithm_9x9 is
	Generic (
		WIN_CNT : INTEGER := 9 -- number of pixels in the window
	);
   Port (
		clk_I : IN STD_LOGIC;

		template_window_I : IN pixelWindow;
		search_window_I   : IN pixelWindow;
      
      sad_O : OUT STD_LOGIC_VECTOR (9 DOWNTO 0)
   );
end sadAlgorithm_9x9;

architecture Behavioral of sadAlgorithm_9x9 is
	
--	type array_type_temp is array (0 to 7) of SIGNED(9 downto 0);
	SIGNAL temp : signedWindow;
	
	SIGNAL template_window, search_window : pixelWindow;
	
--	SIGNAL sad_sum : SIGNED(10 DOWNTO 0);
   SIGNAL sad_sum : STD_LOGIC_VECTOR(10 DOWNTO 0);
	
	COMPONENT adder
		PORT (
			a : IN STD_LOGIC_VECTOR(8 DOWNTO 0);
			b : IN STD_LOGIC_VECTOR(8 DOWNTO 0);
			clk : IN STD_LOGIC;
			s : OUT STD_LOGIC_VECTOR(8 DOWNTO 0)
		);
	END COMPONENT;
	
	SIGNAL a, b, sign : signPixelWindow;
--	SIGNAL signer : STD_LOGIC_VECTOR(8 DOWNTO 0);
	
begin
   
	template_window <= template_window_I;
	search_window <= search_window_I;
--	
	signing : PROCESS(template_window, search_window)
	BEGIN
		FOR i IN 0 TO WIN_CNT-1 LOOP
			IF (search_window(i) < template_window(i)) THEN 
				a(i) <= template_window(i);
				b(i) <= search_window(i);
			ELSE
				b(i) <= template_window(i);
				a(i) <= search_window(i);
			END IF;
		END LOOP;
	END PROCESS signing;
	
   -- Sum of the Absolute Difference between the template 3x3 and search 3x3
--   sadding : PROCESS (sign, temp) --clk_I)
--   BEGIN	
--		IF (RISING_EDGE(clk_I)) THEN
--			temp(0) <= 	abs(SIGNED("000" & UNSIGNED(template_window(0))) - SIGNED("000" & UNSIGNED(search_window(0))));-- +
--			
--			FOR i IN 1 TO (WIN_CNT-2) LOOP
--				temp(i) <= temp(i-1) + ABS(SIGNED("000" & UNSIGNED(template_window(i))) - SIGNED("000" & UNSIGNED(search_window(i))));
--			END LOOP;
--		
--			sad_sum <= temp(WIN_CNT-2) + abs(SIGNED("000" & UNSIGNED(template_window(WIN_CNT-1))) - SIGNED("000" & UNSIGNED(search_window(WIN_CNT-1)))); --temp(0) +
--		END IF;
		
--	temporary : PROCESS(sign)
--   BEGIN
--		FOR i IN 0 TO WIN_CNT-1 LOOP
--			temp(i) <= ABS(SIGNED("00" & UNSIGNED(sign(i))));
--		END LOOP;
--	END PROCESS temporary;
--		
--	sadding : PROCESS(temp)
--	BEGIN
--		sad_sum <=  temp(0) + temp(1) + temp(2) +
--						temp(3) + temp(4) + temp(5) +
--						temp(6) + temp(7) + temp(8);
--   END PROCESS sadding;
	
--	sadder : adder
--		PORT MAP (
--			a => a(1),
--			b => b(1),
--			clk => clk_I,
--			s => signer
--		);
	
	outting : PROCESS(clk_I)
	BEGIN
		IF (RISING_EDGE(clk_I)) THEN
			sad_sum <=  STD_LOGIC_VECTOR(("00" & UNSIGNED(sign(0))) + ("00" & UNSIGNED(sign(1))) + ("00" & UNSIGNED(sign(2))) + 
							("00" & UNSIGNED(sign(3))) + ("00" & UNSIGNED(sign(4))) + ("00" & UNSIGNED(sign(5))) + 
							("00" & UNSIGNED(sign(6))) + ("00" & UNSIGNED(sign(7))) + ("00" & UNSIGNED(sign(8))));
		END IF;
	END PROCESS outting;
	
	g_differ : FOR i IN 0 TO WIN_CNT-1 GENERATE
   BEGIN
		i_sadder_fabric : adder
			PORT MAP (
				a => a(i),
				b => b(i),
				clk => clk_I,
				s => sign(i)
			);
	END GENERATE g_differ;
	
	
	
	-- Assigns the values from summer array to sad array
   sad_assign : PROCESS(sad_sum)
   BEGIN
      IF (UNSIGNED(sad_sum) < 1024) THEN
         sad_O <= sad_sum(9 DOWNTO 0);
      ELSE
         sad_O <= "11" & x"ff";
      END IF;
   END PROCESS sad_assign;
	
end Behavioral;

