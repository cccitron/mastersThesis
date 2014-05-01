--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:41:30 04/21/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_fifo_3x3/fifo/tb_sad_algorithm_3x3.vhd
-- Project Name:  fifo
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sad_algorithm_3x3
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
 
ENTITY tb_sad_algorithm_3x3 IS
END tb_sad_algorithm_3x3;
 
ARCHITECTURE behavior OF tb_sad_algorithm_3x3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sad_algorithm_3x3
    PORT(
         clk : IN  std_logic;
         ena : IN  std_logic;
         template3x3 : IN  std_logic_vector(71 downto 0);
         search3x3 : IN  std_logic_vector(71 downto 0);
         SAD_O : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal ena : std_logic := '0';
   signal template3x3 : std_logic_vector(71 downto 0) := (others => '0');
   signal search3x3 : std_logic_vector(71 downto 0) := (others => '0');

 	--Outputs
   signal SAD_O : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sad_algorithm_3x3 PORT MAP (
          clk => clk,
          ena => ena,
          template3x3 => template3x3,
          search3x3 => search3x3,
          SAD_O => SAD_O
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

--x"02", x"07", x"05", x"08", x"06",
--x"01", x"07", x"04", x"02", x"07",
--x"08", x"04", x"06", x"08", x"05")

      -- insert stimulus here
      template3x3 <= x"020505040007070509";
      search3x3   <= x"020705010704080406";

      write(line_out, now);
      write(line_out, string'(" SAD output: "));
      write(line_out, SAD_O);
      writeline(output, line_out);
      
      wait for 50 ns;
      search3x3   <= x"070508070402040608";
      
      write(line_out, now);
      write(line_out, string'(" SAD output: "));
      write(line_out, SAD_O);
      writeline(output, line_out);
      
      wait for 50 ns;
      search3x3   <= x"050806040207060805";
      
      write(line_out, now);
      write(line_out, string'(" SAD output: "));
      write(line_out, SAD_O);
      writeline(output, line_out);

      wait for 50 ns;
      write(line_out, now);
      write(line_out, string'(" SAD output: "));
      write(line_out, SAD_O);
      writeline(output, line_out);

      wait;
   end process;

END;
