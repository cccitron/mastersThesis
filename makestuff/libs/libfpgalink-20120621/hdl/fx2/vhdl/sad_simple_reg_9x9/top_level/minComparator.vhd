----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:13:31 04/22/2014 
-- Design Name: 
-- Module Name:    minComparator - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity minComparator is
	GENERIC (
		SAD_SIZE : INTEGER := 10;
		POS_SIZE : INTEGER := 4
	);
	Port ( 
		clk_I   : in   std_logic;
      sad0_I  : in   STD_LOGIC_VECTOR (SAD_SIZE-1 downto 0);
		pos0_I  : in   STD_LOGIC_VECTOR (POS_SIZE-1 downto 0);
		sad1_I  : in   STD_LOGIC_VECTOR (SAD_SIZE-1 downto 0);
		pos1_I  : in   STD_LOGIC_VECTOR (POS_SIZE-1 downto 0);
		sad_O   : out  STD_LOGIC_VECTOR (SAD_SIZE-1 downto 0);
		pos_O   : out  STD_LOGIC_VECTOR (POS_SIZE-1 downto 0)
	);
end minComparator;

architecture Behavioral of minComparator is

	SIGNAL sad0, sad1, sad_out : STD_LOGIC_VECTOR(SAD_SIZE-1 DOWNTO 0);
	SIGNAL pos0, pos1, pos_out : STD_LOGIC_VECTOR(POS_SIZE-1 DOWNTO 0);

begin

	sad0 <= sad0_I;
	pos0 <= pos0_I;
	sad1 <= sad1_I;
	pos1 <= pos1_I;

	process(clk_I) --sad0, pos0, sad1, pos1)
	begin
		IF (RISING_EDGE(clk_I)) THEN
			if (sad1 < sad0) then
				sad_out <= sad1;
				pos_out <= pos1;
			else
				sad_out <= sad0;
				pos_out <= pos0;
			end if;
		END IF;
	end process;
	
	sad_O <= sad_out;
	pos_O <= pos_out;

end Behavioral;

