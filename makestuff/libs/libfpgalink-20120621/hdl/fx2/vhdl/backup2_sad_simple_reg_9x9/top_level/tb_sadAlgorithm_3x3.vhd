--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:00:28 07/07/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_simple_reg_9x9/top_level/tb_sadAlgorithm_3x3.vhd
-- Project Name:  top_level
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sadAlgorithm_3x3
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

USE work.window_array.all;
 
ENTITY tb_sadAlgorithm_3x3 IS
END tb_sadAlgorithm_3x3;
 
ARCHITECTURE behavior OF tb_sadAlgorithm_3x3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sadAlgorithm_3x3
    PORT(
         clk_I             : IN  std_logic;
         template_window_I : IN  pixelWindow;
         search_window_I   : IN  pixelWindow;
         sad_O             : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_I : std_logic := '0';
   signal template_window_I : pixelWindow := (OTHERS => (others => '0'));
   signal search_window_I : pixelWindow := (OTHERS => (others => '0'));
 	--Outputs
   signal sad : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_I_period : time := 20 ns;

	SIGNAL template : pixelWindow := (x"02", x"03", x"03",
												 x"02", x"04", x"04",
												 x"02", x"04", x"03");
												
	SIGNAL search   : pixelWindow := (x"02", x"02", x"03", 
												 x"02", x"04", x"04", 
												 x"02", x"04", x"04");
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sadAlgorithm_3x3 PORT MAP (
          clk_I => clk_I,
          template_window_I => template_window_I,
          search_window_I => search_window_I,
          sad_O => sad
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
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_I_period*10;

      -- insert stimulus here 
		template_window_I <= template;
		search_window_I   <= search;

      wait;
   end process;

END;
