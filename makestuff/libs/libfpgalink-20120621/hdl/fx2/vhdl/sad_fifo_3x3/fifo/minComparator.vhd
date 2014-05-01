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
	Port ( 
--		clk   : in   std_logic;
--      ena   : in   std_logic;
      sad0  : in   STD_LOGIC_VECTOR (7 downto 0);
		pos0  : in   STD_LOGIC_VECTOR (3 downto 0);
		sad1  : in   STD_LOGIC_VECTOR (7 downto 0);
		pos1  : in   STD_LOGIC_VECTOR (3 downto 0);
		sad   : out  STD_LOGIC_VECTOR (7 downto 0);
		pos   : out  STD_LOGIC_VECTOR (3 downto 0)
	);
end minComparator;

architecture Behavioral of minComparator is

begin

	process(sad0, pos0, sad1, pos1)
	begin
		if (sad1 < sad0) then
			sad <= sad1;
			pos <= pos1;
		else
			sad <= sad0;
			pos <= pos0;
		end if;
	end process;

end Behavioral;

