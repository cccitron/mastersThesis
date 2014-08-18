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
	
--      ttl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      ttc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      ttr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      tml : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      tmc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      tmr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      tbl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      tbc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      tbr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      
--      stl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      stc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      str : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      sml : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      smc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      smr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      sbl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      sbc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      sbr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
		template_window_I : IN pixelWindow;
		search_window_I   : IN pixelWindow;
      
      sad : OUT STD_LOGIC_VECTOR (7 DOWNTO 0)
   );
end sadAlgorithm_3x3;

architecture Behavioral of sadAlgorithm_3x3 is
	
--	type array_type_temp is array (0 to 7) of SIGNED(9 downto 0);
	SIGNAL temp : signedWindow;
	
	SIGNAL template_window, search_window : pixelWindow;
	
	SIGNAL sum_sign : SIGNED(8 DOWNTO 0);
   
begin
   
	template_window <= template_window_I;
	search_window <= search_window_I;
	
   -- Sum of the Absolute Difference between the template 3x3 and search 3x3
   sadding : PROCESS (clk_I) --template_window, search_window) --ttl, ttc, ttr, tml, tmc, tmr, tbl, tbc, tbr, stl, stc, str, sml, smc, smr, sbl, sbc, sbr)
   BEGIN
      --sum_array_next <= sum_array;
--      sum_sign <= 
--         abs(SIGNED("00" & ttl) - SIGNED("00" & stl)) + 
--         abs(SIGNED("00" & ttc) - SIGNED("00" & stc)) + 
--         abs(SIGNED("00" & ttr) - SIGNED("00" & str)) + 
--         abs(SIGNED("00" & tml) - SIGNED("00" & sml)) +
--         abs(SIGNED("00" & tmc) - SIGNED("00" & smc)) +
--         abs(SIGNED("00" & tmr) - SIGNED("00" & smr)) +
--         abs(SIGNED("00" & tbl) - SIGNED("00" & sbl)) +
--         abs(SIGNED("00" & tbc) - SIGNED("00" & sbc)) +
--         abs(SIGNED("00" & tbr) - SIGNED("00" & sbr));

--		sum_sign <= 
--         abs(SIGNED("00" & (template_window(0))) - SIGNED("00" & (search_window(0)))) + 
--         abs(SIGNED("00" & (template_window(1))) - SIGNED("00" & (search_window(1)))) + 
--         abs(SIGNED("00" & (template_window(2))) - SIGNED("00" & (search_window(2)))) + 
--         abs(SIGNED("00" & (template_window(3))) - SIGNED("00" & (search_window(3)))) +
--         abs(SIGNED("00" & (template_window(4))) - SIGNED("00" & (search_window(4)))) +
--         abs(SIGNED("00" & (template_window(5))) - SIGNED("00" & (search_window(5)))) +
--         abs(SIGNED("00" & (template_window(6))) - SIGNED("00" & (search_window(6)))) +
--         abs(SIGNED("00" & (template_window(7))) - SIGNED("00" & (search_window(7)))) +
--         abs(SIGNED("00" & (template_window(8))) - SIGNED("00" & (search_window(8))));

		IF (RISING_EDGE(clk_I)) THEN
			temp(0) <= abs(SIGNED('0' & (template_window(0))) - SIGNED('0' & (search_window(0))));
			
			temp(1) <= temp(0) + abs(SIGNED('0' & (template_window(1))) - SIGNED('0' & (search_window(1))));
			temp(2) <= temp(1) + abs(SIGNED('0' & (template_window(2))) - SIGNED('0' & (search_window(2))));
			temp(3) <= temp(2) + abs(SIGNED('0' & (template_window(3))) - SIGNED('0' & (search_window(3))));
			temp(4) <= temp(3) + abs(SIGNED('0' & (template_window(4))) - SIGNED('0' & (search_window(4))));
			temp(5) <= temp(4) + abs(SIGNED('0' & (template_window(5))) - SIGNED('0' & (search_window(5))));
			temp(6) <= temp(5) + abs(SIGNED('0' & (template_window(6))) - SIGNED('0' & (search_window(6))));
			temp(7) <= temp(6) + abs(SIGNED('0' & (template_window(7))) - SIGNED('0' & (search_window(7))));
			
			sum_sign <= abs(SIGNED('0' & (template_window(8))) - SIGNED('0' & (search_window(8))));
		END IF;

--		IF (RISING_EDGE(clk_I)) THEN
--			temp(0) <= abs(SIGNED("00" & ttl) - SIGNED("00" & stl));
--			
--			temp(1) <= temp(0) + abs(SIGNED("00" & ttc) - SIGNED("00" & stc));
--			temp(2) <= temp(1) + abs(SIGNED("00" & ttr) - SIGNED("00" & str));
--			temp(3) <= temp(2) + abs(SIGNED("00" & tml) - SIGNED("00" & sml));
--			temp(4) <= temp(3) + abs(SIGNED("00" & tmc) - SIGNED("00" & smc));
--			temp(5) <= temp(4) + abs(SIGNED("00" & tmr) - SIGNED("00" & smr));
--			temp(6) <= temp(5) + abs(SIGNED("00" & tbl) - SIGNED("00" & sbl));
--			temp(7) <= temp(6) + abs(SIGNED("00" & tbc) - SIGNED("00" & sbc));
--			
--			sum_sign <= temp(7) + abs(SIGNED("00" & tbr) - SIGNED("00" & sbr));
--		END IF;
   END PROCESS sadding;
   
   -- Assigns the values from summer array to sad array
--   sad_assign : PROCESS(sum_sign)
--   BEGIN
--      --sad_array_next <= sad_array;
--      --FOR i IN 0 TO 2 LOOP
--      IF (sum_sign < 256) THEN
         sad <= STD_LOGIC_VECTOR(sum_sign(7 DOWNTO 0));
--      ELSE
--         sad <= x"ff";
--      END IF;
--      END LOOP;
--   END PROCESS sad_assign;

end Behavioral;

