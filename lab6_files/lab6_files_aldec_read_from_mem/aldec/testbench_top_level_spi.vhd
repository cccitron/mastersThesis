library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity test_top_level_spi is
end test_top_level_spi;

architecture test of test_top_level_spi is 

signal clk : std_logic;		
signal leds : std_logic_vector (7 downto 0); 
signal reset : std_logic;
signal spi_clk, spi_cs, spi_din, spi_dout : std_logic;
  
begin
  dut : entity work.top_level_spi port map (
    clk_100MHz => clk,	 
    leds => leds,
    reset => reset,
    spi_clk => spi_clk,
    spi_cs => spi_cs,
    spi_din => spi_din,
    spi_dout => spi_dout
  );
  
  
  
  process is
  begin
    clk <= '0'; wait for 5 ns;
    clk <= '1'; wait for 5 ns;
  end process;

  process is
  begin	 
	spi_din <= '0'; -- will read "dummy" zeros;
    reset <= '0'; wait for 25 ns;
    reset <= '1'; wait for 25 ns;
    reset <= '0'; wait for 1000 ns;	
    reset <= '1'; wait for 25 ns;  
    reset <= '0'; wait for 500 ns;
	spi_din <= '1'; wait for 1335 ns;
	spi_din <= '0';
    wait;
  end process;
  
end test;