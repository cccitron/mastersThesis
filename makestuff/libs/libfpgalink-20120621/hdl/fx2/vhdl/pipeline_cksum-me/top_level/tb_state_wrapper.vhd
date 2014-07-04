--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:02:21 07/03/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/pipeline_cksum-me/top_level/tb_state_wrapper.vhd
-- Project Name:  top_level
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: state_wrapper
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
 
ENTITY tb_state_wrapper IS
END tb_state_wrapper;
 
ARCHITECTURE behavior OF tb_state_wrapper IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT state_wrapper
    PORT(
         clk_I : IN  std_logic;
         h2fData_I : IN  std_logic_vector(7 downto 0);
         chanAddr_I : IN  std_logic_vector(6 downto 0);
         f2hReady_I : IN  std_logic;
         h2fValid_I : IN  std_logic;
         sw_I : IN  std_logic_vector(7 downto 0);
         led_O : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_I : std_logic := '0';
   signal h2fData_I : std_logic_vector(7 downto 0) := (others => '0');
   signal chanAddr_I : std_logic_vector(6 downto 0) := (others => '0');
   signal f2hReady_I : std_logic := '0';
   signal h2fValid_I : std_logic := '0';
   signal sw_I : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal led_O : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_I_period : time := 20 ns;
	
	-- Other
	SIGNAL din_t : pixelWindow := ( x"01", x"02", x"03",
											  x"04", x"05", x"06",
											  x"07", x"08", x"09");
											  
	SIGNAL din_s : pixelWindow := ( x"02", x"03", x"04",
											  x"05", x"06", x"07",
											  x"08", x"09", x"0a");
											  
	SIGNAL douter : pixelWindow := (OTHERS => (OTHERS => '0'));
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: state_wrapper PORT MAP (
          clk_I => clk_I,
          h2fData_I => h2fData_I,
          chanAddr_I => chanAddr_I,
          f2hReady_I => f2hReady_I,
          h2fValid_I => h2fValid_I,
          sw_I => sw_I,
          led_O => led_O
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
	
	VARIABLE ndx : INTEGER RANGE 0 TO 8;
	
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_I_period*10;

      -- insert stimulus here 
		h2fData_I  <= din_t(0);
		h2fValid_I <= '1';
		chanAddr_I <= "0000000";
		sw_I <= x"00";
		
		ndx := 1;
		WHILE (ndx <= 8) LOOP
			wait for clk_I_period; h2fData_I  <= din_t(ndx);
			ndx := ndx + 1;
		END LOOP;
		
--		wait for clk_I_period; h2fData_I  <= din_t(1); --x"02";
--		wait for clk_I_period; h2fData_I  <= din_t(2); --x"03";
--		wait for clk_I_period; h2fData_I  <= din_t(3); --x"04";
--		wait for clk_I_period; h2fData_I  <= din_t(4); --x"05";
--		wait for clk_I_period; h2fData_I  <= din_t(5); --x"06";
--		wait for clk_I_period; h2fData_I  <= din_t(6); --x"07";
--		wait for clk_I_period; h2fData_I  <= din_t(7); --x"08";
--		wait for clk_I_period; h2fData_I  <= din_t(8); --x"09";
		
		wait for clk_I_period;
		h2fValid_I <= '0';
		chanAddr_I <= "0000001";

		wait for clk_I_period;
		h2fData_I  <= din_s(0);
		h2fValid_I <= '1';
		
		ndx := 1;
		WHILE (ndx <= 8) LOOP
			wait for clk_I_period; h2fData_I  <= din_s(ndx);
			ndx := ndx + 1;
		END LOOP;
		sw_I <= x"01";

      wait;
   end process;

END;
