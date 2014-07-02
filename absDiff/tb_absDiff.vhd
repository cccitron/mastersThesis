--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:42:52 04/20/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/absDiff/tb_absDiff.vhd
-- Project Name:  absDiff
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: absDiff
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
 
ENTITY tb_absDiff IS
END tb_absDiff;
 
ARCHITECTURE behavior OF tb_absDiff IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT absDiff
    PORT(
         CLK_I : IN  std_logic;
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         Y : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_I : std_logic := '0';
   signal A : std_logic_vector(7 downto 0) := (others => '0');
   signal B : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal Y : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_I_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: absDiff PORT MAP (
          CLK_I => CLK_I,
          A => A,
          B => B,
          Y => Y
        );

   -- Clock process definitions
   CLK_I_process :process
   begin
		CLK_I <= '0';
		wait for CLK_I_period/2;
		CLK_I <= '1';
		wait for CLK_I_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   
   -- Text output
   variable line_out : line;
   
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_I_period*10;

      -- insert stimulus here 
		A <= "00000101";
		B <= "00001000";
		
		wait for 10 ns;
      write(line_out, now);
      write(line_out, string'(" Y: "));
      write(line_out, Y);
      writeline(output, line_out);
		wait for 50 ns;
		
		A <= "00001000";
		B <= "00000101";
		
		wait for 10 ns;
      write(line_out, now);
      write(line_out, string'(" Y: "));
      write(line_out, Y);
      writeline(output, line_out);
		wait for 50 ns;
		
		A <= "00001000";
		B <= "00001000";
		
		wait for 10 ns;
      write(line_out, now);
      write(line_out, string'(" Y: "));
      write(line_out, Y);
      writeline(output, line_out);
		wait for 50 ns;
      
      wait;
   end process;

END;
