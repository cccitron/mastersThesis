--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:54:38 05/05/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/bram/bram_test/tb_top_level.vhd
-- Project Name:  bram_test
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
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE STD.TEXTIO.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_top_level IS
END tb_top_level;
 
ARCHITECTURE behavior OF tb_top_level IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_level
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         led_out : OUT  std_logic_vector(7 downto 0);
         sw_in : IN  std_logic_vector(7 downto 0);
         step_out : OUT  std_logic_vector(3 downto 0);
         addr_out : OUT  std_logic_vector(7 downto 0);
         sum_out : OUT  std_logic_vector(7 downto 0);
         ndx_out : OUT  std_logic_vector(5 downto 0);
         sadDone_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal sw_in : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal led_out : std_logic_vector(7 downto 0);
   signal step_out : std_logic_vector(3 downto 0);
   signal addr_out : std_logic_vector(7 downto 0);
   signal sum_out : std_logic_vector(7 downto 0);
   signal ndx_out : std_logic_vector(5 downto 0);
   signal sadDone_out : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_level PORT MAP (
          clk => clk,
          reset => reset,
          led_out => led_out,
          sw_in => sw_in,
          step_out => step_out,
          addr_out => addr_out,
          sum_out => sum_out,
          ndx_out => ndx_out,
          sadDone_out => sadDone_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   
   -- Text output
   variable line_out : line;
   
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
      wait for 2000 ns;
      sw_in <= x"00";
      wait for 10 ns;
      write(line_out, now);
      write(line_out, string'(" sadArray(0, 0): "));
      write(line_out, led_out);
      writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"01"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 1): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"02"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 2): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"03"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 3): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"04"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 4): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"05"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 5): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"06"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 6): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"07"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 7): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"08"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 8): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"09"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, 9): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"0a"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, a): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"0b"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, b): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"0c"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, c): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"0d"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, d): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"0e"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, e): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"0f"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(0, f): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      
      wait for 10 ns;
      sw_in <= x"10"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(1, 0): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"11"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(1, 1): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"12"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" sadArray(1, 2): ")); 
      write(line_out, led_out); writeline(output, line_out);

      wait;
   end process;

END;
