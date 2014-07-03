----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:10:45 07/02/2014 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

USE work.window_array.all;
--package arrays is
--	TYPE pixelWindow IS ARRAY(0 TO 8) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
--end;
--package body arrays is
--end package body;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity adder is
	Port ( clk_I  : in  STD_LOGIC;
		dinA_I : in pixelWindow;
		dinB_I : in pixelWindow;
		data_O : out  STD_LOGIC_VECTOR (7 downto 0)
	);
end adder;

architecture Behavioral of adder is

	SIGNAL dinA, dinB : pixelWindow; --STD_LOGIC_VECTOR(7 DOWNTO 0);
	SIGNAL temp : signWindow;
	SIGNAL dout : SIGNED(8 DOWNTO 0); --STD_LOGIC_VECTOR(7 DOWNTO 0);

begin
	
	dinA <= dinA_I;
	dinB <= dinB_I;
	
	adding : PROCESS (clk_I)
	BEGIN
		IF (RISING_EDGE(clk_I)) THEN
--			temp0 <= ABS(SIGNED('0' & dinA(0)) - SIGNED('0' & dinB(0)));
--			temp1 <= temp0 + ABS(SIGNED('0' & dinA(1)) - SIGNED('0' & dinB(1)));
--			dout <= temp1 + ABS(SIGNED('0' & dinA(2)) - SIGNED('0' & dinB(2)));

			temp(0) <= ABS(SIGNED('0' & dinA(0)) - SIGNED('0' & dinB(0)));
			
			temp(1) <= temp(0) + ABS(SIGNED('0' & dinA(1)) - SIGNED('0' & dinB(1)));
			temp(2) <= temp(1) + ABS(SIGNED('0' & dinA(2)) - SIGNED('0' & dinB(2)));
--			temp(3) <= temp(2) + ABS(SIGNED('0' & dinA(3)) - SIGNED('0' & dinB(3)));
--			temp(4) <= temp(3) + ABS(SIGNED('0' & dinA(4)) - SIGNED('0' & dinB(4)));
--			temp(5) <= temp(4) + ABS(SIGNED('0' & dinA(5)) - SIGNED('0' & dinB(5)));
--			temp(6) <= temp(5) + ABS(SIGNED('0' & dinA(6)) - SIGNED('0' & dinB(6)));
--			temp(7) <= temp(6) + ABS(SIGNED('0' & dinA(7)) - SIGNED('0' & dinB(7)));

			dout <= temp(2) + ABS(SIGNED('0' & dinA(3)) - SIGNED('0' & dinB(3)));
		END IF;
	END PROCESS adding;
	
	data_O <= STD_LOGIC_VECTOR(dout(7 DOWNTO 0));
	
	--data_O <= STD_LOGIC_VECTOR(dout(7 DOWNTO 0));

end Behavioral;

