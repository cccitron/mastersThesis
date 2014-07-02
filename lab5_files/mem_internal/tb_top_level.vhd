--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:43:19 04/05/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/lab5_files/mem_internal/tb_top_level.vhd
-- Project Name:  mem_internal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top_level
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_top_level IS
END tb_top_level;
 
ARCHITECTURE behavior OF tb_top_level IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_level
    PORT(
         clk_100MHz : IN  std_logic;
         sw_i : IN  std_logic_vector(7 downto 0);
         leds : OUT  std_logic_vector(7 downto 0);
         btn : IN  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_100MHz : std_logic := '0';
   signal sw_i : std_logic_vector(7 downto 0) := (others => '0');
   signal btn : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal leds : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_100MHz_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_level PORT MAP (
          clk_100MHz => clk_100MHz,
          sw_i => sw_i,
          leds => leds,
          btn => btn
        );

   -- Clock process definitions
   clk_100MHz_process :process
   begin
		clk_100MHz <= '0';
		wait for clk_100MHz_period/2;
		clk_100MHz <= '1';
		wait for clk_100MHz_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_100MHz_period*10;

      -- insert stimulus here 
--      sw_i <= x"00";
--      
--      wait for 50 ns;
--      sw_i <= x"ff";
      
      sw_i <= "11010101";
      
      wait for 10 ns;
      sw_i(6) <= '0';
      
      wait for 10 ns;
      btn(1) <= '1';
      wait for 10 ns;
      btn(1) <= '0';
      wait for 20 ns;
      sw_i(5 downto 0) <= "000111";
      wait for 20 ns;
      sw_i(6) <= '1';
      wait for 10 ns;
      sw_i(6) <= '0';
      
      wait for 10 ns;
      btn(3) <= '1';
      wait for 10 ns;
      btn(3) <= '0';
      wait for 20 ns;
      sw_i(5 downto 0) <= "110011";
      wait for 20 ns;
      sw_i(6) <= '1';
      wait for 10 ns;
      sw_i(6) <= '0';

      wait;
   end process;

END;

