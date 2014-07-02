--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:56:46 06/16/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me_compToFPGA/fifo/tb_top_level.vhd
-- Project Name:  fifo
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
         fx2Clk_in : IN  std_logic;
         fx2Addr_out : OUT  std_logic_vector(1 downto 0);
         fx2Data_io : INOUT  std_logic_vector(7 downto 0);
         fx2Read_out : OUT  std_logic;
         fx2OE_out : OUT  std_logic;
         fx2GotData_in : IN  std_logic;
         fx2Write_out : OUT  std_logic;
         fx2GotRoom_in : IN  std_logic;
         fx2PktEnd_out : OUT  std_logic;
         led_out : OUT  std_logic_vector(7 downto 0);
         sw_in : IN  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal fx2Clk_in : std_logic := '0';
   signal fx2GotData_in : std_logic := '0';
   signal fx2GotRoom_in : std_logic := '0';
   signal sw_in : std_logic_vector(7 downto 0) := (others => '0');

	--BiDirs
   signal fx2Data_io : std_logic_vector(7 downto 0);

 	--Outputs
   signal fx2Addr_out : std_logic_vector(1 downto 0);
   signal fx2Read_out : std_logic;
   signal fx2OE_out : std_logic;
   signal fx2Write_out : std_logic;
   signal fx2PktEnd_out : std_logic;
   signal led_out : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
   constant fx2Clk_in_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_level PORT MAP (
          fx2Clk_in => fx2Clk_in,
          fx2Addr_out => fx2Addr_out,
          fx2Data_io => fx2Data_io,
          fx2Read_out => fx2Read_out,
          fx2OE_out => fx2OE_out,
          fx2GotData_in => fx2GotData_in,
          fx2Write_out => fx2Write_out,
          fx2GotRoom_in => fx2GotRoom_in,
          fx2PktEnd_out => fx2PktEnd_out,
          led_out => led_out,
          sw_in => sw_in
        );

   -- Clock process definitions
--   clock_process :process
--   begin
--		clock <= '0';
--		wait for clock_period/2;
--		clock <= '1';
--		wait for clock_period/2;
--   end process;
 
   fx2Clk_in_process :process
   begin
		fx2Clk_in <= '0';
		wait for fx2Clk_in_period/2;
		fx2Clk_in <= '1';
		wait for fx2Clk_in_period/2;
   end process;

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;

      -- insert stimulus here 
      sw_in <= x"01";
      
      fx2Data_io <= x"05";
      wait for 40 ns;
      
      fx2GotData_in <= '1';
      fx2GotRoom_in <= '1';
      wait for 40 ns;

      fx2GotRoom_in <= '1';
      fx2GotData_in <= '0';
      wait for 40 ns;
      
      wait;
   end process;

END;
