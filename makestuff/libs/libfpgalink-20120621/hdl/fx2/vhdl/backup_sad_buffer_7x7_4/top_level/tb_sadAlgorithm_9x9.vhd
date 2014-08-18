--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:57:30 07/10/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_simple_reg_9x9/top_level/tb_sadAlgorithm_9x9.vhd
-- Project Name:  top_level
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sadAlgorithm_9x9
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
 
ENTITY tb_sadAlgorithm_9x9 IS
END tb_sadAlgorithm_9x9;
 
ARCHITECTURE behavior OF tb_sadAlgorithm_9x9 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sadAlgorithm_9x9
    PORT(
         clk_I : IN  std_logic;
			data_I : IN STD_LOGIC;
         template_window_I : IN  pixelWindow;
         search_window_I : IN  pixelWindow;
			data_O : OUT STD_LOGIC;
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

   -- Clock period definitions
   constant clk_I_period : time := 10 ns;
	
--	SIGNAL template : pixelWindow := (x"02", x"02", x"03",
--												 x"02", x"04", x"04",
--												 x"02", x"04", x"03");
--												
--	SIGNAL search   : pixelWindow := (x"02", x"03", x"03", 
--												 x"02", x"04", x"04", 
--												 x"02", x"04", x"04");
												 
--	SIGNAL template : pixelWindow := (x"01", x"03", x"07",
--												 x"0f", x"1f", x"2f",
--												 x"3f", x"7f", x"ff");
--												
--	SIGNAL search   : pixelWindow := (x"00", x"01", x"02", 
--												 x"03", x"04", x"05", 
--												 x"06", x"07", x"08");

	SIGNAL template : pixelWindow := (	x"02", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"03", 
													x"02", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04",
													x"02", x"04", x"03", x"04", x"04", x"04", x"04", x"04", x"04",
													x"0b", x"2f", x"2f", x"3a", x"3a", x"3a", x"3b", x"3b", x"3b",
													x"15", x"34", x"2d", x"3a", x"36", x"39", x"39", x"39", x"39",
													x"15", x"32", x"2b", x"3b", x"38", x"3b", x"3b", x"3a", x"3a",
													x"14", x"34", x"2b", x"3b", x"38", x"3b", x"3b", x"39", x"3b",
													x"13", x"36", x"2c", x"3c", x"39", x"3a", x"39", x"3a", x"3a",
													x"14", x"38", x"2d", x"3b", x"38", x"3b", x"3c", x"38", x"39");
												
	SIGNAL search   : pixelWindow := (	x"02", x"02", x"03", x"03", x"03", x"04", x"03", x"03", x"03",
													x"02", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04",
													x"02", x"04", x"04", x"04", x"03", x"04", x"04", x"04", x"04",
													x"0a", x"33", x"2d", x"31", x"32", x"31", x"31", x"32", x"3b",
													x"13", x"37", x"28", x"31", x"2f", x"31", x"30", x"30", x"39",
													x"14", x"35", x"2b", x"31", x"32", x"34", x"31", x"31", x"39",
													x"15", x"33", x"28", x"30", x"31", x"31", x"31", x"2f", x"39",
													x"13", x"35", x"29", x"2e", x"2e", x"31", x"32", x"31", x"37",
													x"14", x"34", x"2a", x"2e", x"2e", x"31", x"32", x"32", x"38");

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sadAlgorithm_9x9 PORT MAP (
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
		template_window_I <= template;
		search_window_I   <= search;
		data_I <= '1';
		
		wait for clk_I_period;
		data_I <= '0';

      wait;
   end process;

END;
