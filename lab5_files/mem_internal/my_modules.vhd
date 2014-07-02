library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


-- This is a ROM. XST tool (part of ISE WebPack tools) will
-- infer this and implement this declaration as a distributed 
-- memory.
-- The contents of this basically LUT will be utilized to drive
-- the 8 LED on the Atlys board. This should turn them on one-by-one
-- from right to left.
ENTITY rom8x8 IS
 PORT (
 	addr: in  std_logic_vector(2 downto 0);
 	dout:    out std_logic_vector(7 downto 0));
END rom8x8;

ARCHITECTURE behav OF rom8x8 IS
BEGIN

PROCESS(addr)
BEGIN
  CASE addr IS
    when "000" => dout <= "00000001"; 
    when "001" => dout <= "00000010"; 
    when "010" => dout <= "00000100"; 
    when "011" => dout <= "00001000"; 
    when "100" => dout <= "00010000";   
    when "101" => dout <= "00100000"; 
    when "110" => dout <= "01000000";
    when "111" => dout <= "10000000"; 
    when others => NULL;  
  END case;
END process;

END behav;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
-- This is a clock divider. It takes as input a signal of 100 MHz 
-- and generates an output as signal with a frequency of about 1 Hz.
entity ck_divider is
    Port ( CK_IN : in STD_LOGIC;
           CK_OUT : out STD_LOGIC);
end ck_divider;

architecture Behavioral of ck_divider is

constant TIMECONST : integer := 84;
signal count0, count1, count2, count3 : integer range 0 to 1000;
signal D : std_logic := '0';
begin

process (CK_IN, D)
begin
	if (CK_IN'event and CK_IN = '1') then
		count0 <= count0 + 1;
		if count0 = TIMECONST then
			count0 <= 0;
			count1 <= count1 + 1;
		elsif count1 = TIMECONST then
			count1 <= 0;
			count2 <= count2 + 1;
		elsif count2 = TIMECONST then
			count2 <= 0;
			count3 <= count3 + 1;
		elsif count3 = TIMECONST then
			count3 <= 0;
			D <= not D;
		end if;
	end if;
	CK_OUT <= D;
end process;

end Behavioral;

