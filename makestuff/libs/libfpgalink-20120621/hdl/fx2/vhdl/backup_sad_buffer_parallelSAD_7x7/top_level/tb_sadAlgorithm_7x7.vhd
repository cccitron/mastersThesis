--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:34:55 07/20/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_parallel_7x7/top_level/tb_sadAlgorithm_7x7.vhd
-- Project Name:  top_level
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sadAlgorithm_7x7
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
 
ENTITY tb_sadAlgorithm_7x7 IS
END tb_sadAlgorithm_7x7;
 
ARCHITECTURE behavior OF tb_sadAlgorithm_7x7 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sadAlgorithm_7x7
    PORT(
         clk_I : IN  std_logic;
         data_I : IN  std_logic;
         template_window_I : IN  pixelWindow;
         search_window_I : IN  pixelWindow;
         data_O : OUT  std_logic;
         sad_O : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_I : std_logic := '0';
   signal data_I : std_logic := '0';
   signal template_window_I : pixelWindow := (OTHERS => (others => '0'));
   signal search_window_I : pixelWindow := (OTHERS => (others => '0'));

 	--Outputs
   signal data_O : std_logic;
   signal sad_O : std_logic_vector(11 downto 0);

	-- Other
	SIGNAL template : pixelWindow := (	x"02", x"03", x"03", x"03", x"03", x"03", x"03", 
													x"02", x"04", x"04", x"04", x"04", x"04", x"04",
													x"02", x"04", x"03", x"04", x"04", x"04", x"04",
													x"0b", x"2f", x"2f", x"3a", x"3a", x"3a", x"3b",
													x"15", x"34", x"2d", x"3a", x"36", x"39", x"39",
													x"15", x"32", x"2b", x"3b", x"38", x"3b", x"3b",
													x"14", x"34", x"2b", x"3b", x"38", x"3b", x"3b");

	SIGNAL search   : pixelWindow := (	x"02", x"02", x"03", x"03", x"03", x"04", x"03",
													x"02", x"04", x"04", x"04", x"04", x"04", x"04",
													x"02", x"04", x"04", x"04", x"03", x"04", x"04",
													x"0a", x"33", x"2d", x"31", x"32", x"31", x"31",
													x"13", x"37", x"28", x"31", x"2f", x"31", x"30",
													x"14", x"35", x"2b", x"31", x"32", x"34", x"31",
													x"15", x"33", x"28", x"30", x"31", x"31", x"31");

   -- Clock period definitions
   constant clk_I_period : time := 10 ns;

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sadAlgorithm_7x7 PORT MAP (
          clk_I => clk_I,
          data_I => data_I,
          template_window_I => template_window_I,
          search_window_I => search_window_I,
          data_O => data_O,
          sad_O => sad_O
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
		template_window_I <= template(0 TO 48);
		search_window_I   <= search(0 TO 48);
		data_I <= '1';
		
		wait for clk_I_period;
		data_I <= '0';

      wait;
   end process;

END;
