library ieee;
use ieee.std_logic_1164.all;

-- ratio by which to divide the clk: clkout = clk/N; 
-- assumption: N > 1;
entity clk_divider is
	generic (N: integer := 8); 
   port(
      clk, reset: in std_logic;
      clkout: out std_logic
   );
end clk_divider;

architecture arch of clk_divider is

signal clkout_reg: std_logic;

begin

	process (reset, clk)
	variable counter : integer range 0 to N-1;
	begin
		if reset='1' then
			clkout_reg <= '0';
			counter := 0;
		elsif rising_edge(clk) then
			if counter=N/2-1 then -- toggle at half period
				clkout_reg <= not clkout_reg;
            counter := counter + 1;
         elsif counter=N-1 then -- toggle at end 
				clkout_reg <= not clkout_reg;
            counter := 0; -- reached end of clock period; reset counter;	
         else
				counter := counter + 1;
         end if;
		end if;
	end process;

	clkout <= clkout_reg;
end arch;


---- this is mod-m-counter that counts from 0 to m-1 and 
---- then wraps around; it is parameterized by N and M;
--entity clk_divider is
--   generic(
--      N: integer := 4; -- number of bits
--      M: integer := 10 -- mod-M
--	);
--   port(
--      clk, reset: in std_logic;
--      max_tick: out std_logic;
--      q: out std_logic_vector(N-1 downto 0)
--   );
--end clk_divider;
--
--architecture arch of clk_divider is
--   signal r_reg: unsigned(N-1 downto 0);
--   signal r_next: unsigned(N-1 downto 0);
--begin
--   -- register
--   process(clk,reset)
--   begin
--      if (reset='1') then
--         r_reg <= (others=>'0');
--      elsif (clk'event and clk='1') then
--         r_reg <= r_next;
--      end if;
--   end process;
--	
--   -- next-state logic
--   r_next <= (others=>'0') when r_reg=(M-1) else
--             r_reg + 1;
--				 
--   -- output logic
--   q <= std_logic_vector(r_reg);
--   max_tick <= '1' when (r_reg=(M-3) or r_reg=(M-2) or r_reg=(M-1)) else '0';
--end arch;