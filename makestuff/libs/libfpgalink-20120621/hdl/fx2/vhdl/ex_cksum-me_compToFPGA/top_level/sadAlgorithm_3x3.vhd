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
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

--USE work.window_array.all;
-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sadAlgorithm_3x3 is
   Port ( 
		clk_I : IN STD_LOGIC;
	
      ttl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      ttc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      ttr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      tml : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      tmc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      tmr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      tbl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      tbc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      tbr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      
      stl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      stc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      str : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      sml : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      smc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      smr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      sbl : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      sbc : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
      sbr : IN  STD_LOGIC_VECTOR (7 DOWNTO 0);
--      
--		dinA_I : in pixelWindow;
--		dinB_I : in pixelWindow;
		
      sad : OUT STD_LOGIC_VECTOR (9 DOWNTO 0)
   );
end sadAlgorithm_3x3;

architecture Behavioral of sadAlgorithm_3x3 is
   
   TYPE pixelWindow IS ARRAY(0 TO 8) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
	TYPE signWindow  IS ARRAY(0 TO 7) OF SIGNED(10 DOWNTO 0);
	SIGNAL dinA, dinB : pixelWindow;
	SIGNAL temp : signWindow;
	
--	SIGNAL dinA, dinB : pixelWindow;
--	SIGNAL temp : signWindow;
	SIGNAL sum_sign : SIGNED(10 DOWNTO 0);
   
begin
   
--	dinA(0) <= ttl;
	dinA(1) <= ttc;
	dinA(2) <= ttr;
	dinA(3) <= tml;
	dinA(4) <= tmc;
	dinA(5) <= tmr;
	dinA(6) <= tbl;
	dinA(7) <= tbc;
	dinA(8) <= tbr;
	
--	dinB(0) <= stl;
	dinB(1) <= stc;
	dinB(2) <= str;
	dinB(3) <= sml;
	dinB(4) <= smc;
	dinB(5) <= smr;
	dinB(6) <= sbl;
	dinB(7) <= sbc;
	dinB(8) <= sbr;
	
   -- Sum of the Absolute Difference between the template 3x3 and search 3x3
   signed_sum : PROCESS (clk_I)---temp, dinA, dinB) --ttl, ttc, ttr, tml, tmc, tmr, tbl, tbc, tbr, stl, stc, str, sml, smc, smr, sbl, sbc, sbr)
   BEGIN
		IF (RISING_EDGE(clk_I)) THEN
			temp(0) <= ABS(SIGNED("000" & ttl) - SIGNED("000" & stl));
			
			temp(1) <= temp(0) + ABS(SIGNED("000" & dinA(1)) - SIGNED("000" & dinB(1)));
			temp(2) <= temp(1) + ABS(SIGNED("000" & dinA(2)) - SIGNED("000" & dinB(2)));
			temp(3) <= temp(2) + ABS(SIGNED("000" & dinA(3)) - SIGNED("000" & dinB(3)));
			temp(4) <= temp(3) + ABS(SIGNED("000" & dinA(4)) - SIGNED("000" & dinB(4)));
			temp(5) <= temp(4) + ABS(SIGNED("000" & dinA(5)) - SIGNED("000" & dinB(5)));
			temp(6) <= temp(5) + ABS(SIGNED("000" & dinA(6)) - SIGNED("000" & dinB(6)));
			temp(7) <= temp(6) + ABS(SIGNED("000" & dinA(7)) - SIGNED("000" & dinB(7)));

			sum_sign <= temp(7) + ABS(SIGNED("000" & dinA(8)) - SIGNED("000" & dinB(8)));
		END IF;
   END PROCESS signed_sum;
   
	sad <= STD_LOGIC_VECTOR(sum_sign(9 DOWNTO 0));
	
--   -- Assigns the values from summer array to sad array
--   sad_assign : PROCESS(sum_sign)
--   BEGIN
--      --sad_array_next <= sad_array;
--      --FOR i IN 0 TO 2 LOOP
--      IF (sum_sign < 256) THEN
--         sad <= STD_LOGIC_VECTOR(sum_sign(9 DOWNTO 0));
--      ELSE
--         sad <= x"ff" & "00";
--      END IF;
--      --END LOOP;
--   END PROCESS sad_assign;

end Behavioral;

