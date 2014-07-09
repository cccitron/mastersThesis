--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:23:54 07/02/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/backup1-ex_cksum-me/top_level/tb_adding.vhd
-- Project Name:  top_level
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: adder
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
USE ieee.numeric_std.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE STD.TEXTIO.ALL;
 
USE work.window_array.all; 
 
ENTITY tb_adding IS
END tb_adding;
 
ARCHITECTURE behavior OF tb_adding IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder
    PORT(
         clk_I : IN  std_logic;
         dinA_I : IN  pixelWindow; --std_logic_vector(0 to 8);
         dinB_I : IN  pixelWindow; --std_logic_vector(0 to 8);
         data_O : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_I : std_logic := '0';
   signal dinA_I : pixelWindow := (OTHERS => (OTHERS => '0')); --std_logic_vector(0 to 8) := (others => '0');
   signal dinB_I : pixelWindow := (OTHERS => (OTHERS => '0')); --std_logic_vector(0 to 8) := (others => '0');

 	--Outputs
   signal data_O : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_I_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder PORT MAP (
          clk_I => clk_I,
          dinA_I => dinA_I,
          dinB_I => dinB_I,
          data_O => data_O
        );

   -- Clock process definitions
   clk_I_process :process
   begin
		clk_I <= '0';
		wait for clk_I_period/2;
		clk_I <= '1';
		wait for clk_I_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
	
	-- Text output
   variable line_out : line;
	
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_I_period*10;
		
      -- insert stimulus here 
		dinA_I(0) <= x"01"; -- #1
		dinB_I(0) <= x"02"; -- diff 1

		dinA_I(1) <= x"03";
		dinB_I(1) <= x"05"; -- diff 2
		
		dinA_I(2) <= x"01";
		dinB_I(2) <= x"04"; -- diff 3
		
		dinA_I(3) <= x"01";
		dinB_I(3) <= x"01"; -- diff 0

		wait for clk_I_period;
		dinA_I(0) <= x"01"; -- #2
		dinB_I(0) <= x"05"; -- diff 4
		
		wait for clk_I_period;
		dinA_I(1) <= x"03";
		dinB_I(1) <= x"08"; -- diff 5
		
		dinA_I(0) <= x"01"; -- #3
		dinB_I(0) <= x"02"; -- diff 1
		
		wait for clk_I_period;
		dinA_I(2) <= x"01";
		dinB_I(2) <= x"07"; -- diff 6
		
		dinA_I(1) <= x"02";
		dinB_I(1) <= x"03"; -- diff 1
		
		dinA_I(0) <= x"02"; -- #4
		dinB_I(0) <= x"02"; -- diff 0
		
		wait for clk_I_period;
		dinA_I(3) <= x"05";
		dinB_I(3) <= x"06"; -- diff 1
		
		dinA_I(2) <= x"04";
		dinB_I(2) <= x"05"; -- diff 1
		
		dinA_I(1) <= x"02";
		dinB_I(1) <= x"03"; -- diff 1
		
		wait for clk_I_period;
		dinA_I(3) <= x"05";
		dinB_I(3) <= x"06"; -- diff 1
		
		dinA_I(2) <= x"04";
		dinB_I(2) <= x"05"; -- diff 1
		
		wait for clk_I_period;
		dinA_I(3) <= x"05";
		dinB_I(3) <= x"06"; -- diff 1

      wait;
   end process;

END;
