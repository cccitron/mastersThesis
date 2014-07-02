--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:08:10 04/21/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_fifo_3x3/fifo/tb_top_level.vhd
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
         reset : IN STD_LOGIC;
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
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
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

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_level PORT MAP (
          clk => clk,
          reset => reset,
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
      wait for 400 ns;
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
      
      
      
      wait for 10 ns;
      sw_in <= x"13"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x13 minSad(0, 0): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"14"; wait for 10 ns;
      write(line_out, string'(" x14 minPos(0, 0): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"15"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x15 minSad(0, 1): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"16"; wait for 10 ns;
      write(line_out, string'(" x16 minPos(0, 1): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"17"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x17 minSad(0, 2): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"18"; wait for 10 ns;
      write(line_out, string'(" x18 minPos(0, 2): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"19"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x19 minSad(0, 3): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"1a"; wait for 10 ns;
      write(line_out, string'(" x1a minPos(0, 3): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"1b"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x1b minSad(0, 4): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"1c"; wait for 10 ns;
      write(line_out, string'(" x1c minPos(0, 4): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"1d"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x1d minSad(0, 5): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"1e"; wait for 10 ns;
      write(line_out, string'(" x1e minPos(0, 5): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"1f"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x1f minSad(0, 6): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"20"; wait for 10 ns;
      write(line_out, string'(" x20 minPos(0, 6): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"21"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x21 minSad(0, 7): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"22"; wait for 10 ns;
      write(line_out, string'(" x22 minPos(0, 7): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"23"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x23 minSad(0, 8): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"24"; wait for 10 ns;
      write(line_out, string'(" x24 minPos(0, 8): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"24"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x25 minSad(0, 9): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"26"; wait for 10 ns;
      write(line_out, string'(" x26 minPos(0, 9): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"27"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x27 minSad(0, 10): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"28"; wait for 10 ns;
      write(line_out, string'(" x28 minPos(0, 10): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"29"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x29 minSad(0, 11): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"2a"; wait for 10 ns;
      write(line_out, string'(" x2a minPos(0, 11): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"2b"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x2b minSad(0, 12): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"2c"; wait for 10 ns;
      write(line_out, string'(" x2c minPos(0, 12): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"2d"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x2d minSad(0, 13): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"2e"; wait for 10 ns;
      write(line_out, string'(" x2e minPos(0, 13): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"2f"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x2f minSad(0, 14): ")); 
      write(line_out, led_out);
      wait for 10 ns;
      sw_in <= x"30"; wait for 10 ns;
      write(line_out, string'(" x30 minPos(0, 14): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      
      
      wait for 10 ns;
      sw_in <= x"31"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x31 disparityArray(0): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      wait for 10 ns;
      sw_in <= x"32"; wait for 10 ns; write(line_out, now);
      write(line_out, string'(" x32 disparityArray(1): ")); 
      write(line_out, led_out); writeline(output, line_out);
      
      
      
      
      
--      wait for 10 ns;
--      sw_in <= x"13"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" minSad(0, 0): ")); 
--      write(line_out, led_out); writeline(output, line_out);
--      
--      wait for 10 ns;
--      sw_in <= x"14"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" minPos(0, 0): ")); 
--      write(line_out, led_out); writeline(output, line_out);
      
--      wait for 10 ns;
--      sw_in <= x"15"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" minSad(0, 1): ")); 
--      write(line_out, led_out); writeline(output, line_out);
--      
--      wait for 10 ns;
--      sw_in <= x"16"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" minPos(0, 1): ")); 
--      write(line_out, led_out); writeline(output, line_out);
--      
--      wait for 10 ns;
--      sw_in <= x"17"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" minSad(0, 2): ")); 
--      write(line_out, led_out); writeline(output, line_out);
--      
--      wait for 10 ns;
--      sw_in <= x"18"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" minPos(0, 2): ")); 
--      write(line_out, led_out); writeline(output, line_out);
      
--      wait for 10 ns;
--      sw_in <= x"19"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" disparityArray(0): ")); 
--      write(line_out, led_out); writeline(output, line_out);
--      
--      wait for 10 ns;
--      sw_in <= x"1a"; wait for 10 ns; write(line_out, now);
--      write(line_out, string'(" disparityArray(1): ")); 
--      write(line_out, led_out); writeline(output, line_out);
--      
      
--      wait for 50 ns;
--      sw_in <= x"01";
--      
--      wait for 50 ns;
--      sw_in <= x"02";
--      
--      wait for 50 ns;
--      sw_in <= x"03";
--      
--      wait for 50 ns;
--      sw_in <= x"04";
--      
--      wait for 50 ns;
--      sw_in <= x"05";
--      
--      wait for 50 ns;
--      sw_in <= x"06";
--      
--      wait for 50 ns;
--      sw_in <= x"07";
--      
--      wait for 50 ns;
--      sw_in <= x"08";
--      
--      wait for 50 ns;
--      sw_in <= x"09";
--      
--      wait for 50 ns;
--      sw_in <= x"0a";
--      
--      wait for 50 ns;
--      sw_in <= x"0b";
--      
--      wait for 50 ns;
--      sw_in <= x"0c";
--      
--      wait for 50 ns;
--      sw_in <= x"0d";
      
      wait;
   end process;

END;
