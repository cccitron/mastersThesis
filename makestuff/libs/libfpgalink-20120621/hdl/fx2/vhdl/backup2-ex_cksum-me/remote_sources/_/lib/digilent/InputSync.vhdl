----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:52:35 11/15/2010 
-- Design Name: 
-- Module Name:    InputSync - Behavioral 
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

entity InputSync is
    Port ( D_I : in  STD_LOGIC;
           D_O : out  STD_LOGIC;
           CLK_I : in  STD_LOGIC);
end InputSync;

architecture Behavioral of InputSync is

signal sreg : std_logic_vector(1 downto 0);

attribute TIG : string;
attribute IOB : string;
attribute ASYNC_REG : string;
attribute SHIFT_EXTRACT : string;
attribute HBLKNM : string;

attribute TIG of D_I : signal is "TRUE";
attribute IOB of D_I : signal is "FALSE";
attribute ASYNC_REG of sreg : signal is "TRUE";
attribute SHIFT_EXTRACT of sreg : signal is "NO";
attribute HBLKNM of sreg : signal is "sync_reg";

begin

process (CLK_I)
begin
   if Rising_Edge(CLK_I) then  
      D_O <= sreg(1);
	   sreg <= sreg(0) & D_I;
   end if;
end process;

end Behavioral;


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity InputSyncV is
    Port ( D_I : in  STD_LOGIC_VECTOR;
           D_O : out  STD_LOGIC_VECTOR;
           CLK_I : in  STD_LOGIC);
end InputSyncV;

architecture Behavioral of InputSyncV is
component InputSync is
    Port ( D_I : in  STD_LOGIC;
           D_O : out  STD_LOGIC;
           CLK_I : in  STD_LOGIC);
end component;
signal sreg : std_logic_vector(1 downto 0);

attribute TIG : string;
attribute IOB : string;
attribute ASYNC_REG : string;
attribute SHIFT_EXTRACT : string;
attribute HBLKNM : string;

attribute TIG of D_I : signal is "TRUE";
attribute IOB of D_I : signal is "FALSE";
attribute ASYNC_REG of sreg : signal is "TRUE";
attribute SHIFT_EXTRACT of sreg : signal is "NO";
attribute HBLKNM of sreg : signal is "sync_reg";

begin

gen_bits: for i in D_I'high downto D_I'low generate
	gen_bit: InputSync PORT MAP (
		D_I => D_I(i),
		D_O => D_O(D_O'high-(D_I'high-i)),
		CLK_I => CLK_I
	);
end generate;

end Behavioral;

