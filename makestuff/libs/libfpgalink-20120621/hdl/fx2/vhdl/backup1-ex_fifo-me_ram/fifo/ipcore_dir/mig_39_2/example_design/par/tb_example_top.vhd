--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:39:50 03/26/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo/ipcore_dir/mig_39_2/example_design/par/tb_example_top.vhd
-- Project Name:  test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: example_top
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
 
ENTITY tb_example_top IS
END tb_example_top;
 
ARCHITECTURE behavior OF tb_example_top IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT example_top
    PORT(
         calib_done : OUT  std_logic;
         error : OUT  std_logic;
         mcb3_dram_dq : INOUT  std_logic_vector(15 downto 0);
         mcb3_dram_a : OUT  std_logic_vector(12 downto 0);
         mcb3_dram_ba : OUT  std_logic_vector(2 downto 0);
         mcb3_dram_ras_n : OUT  std_logic;
         mcb3_dram_cas_n : OUT  std_logic;
         mcb3_dram_we_n : OUT  std_logic;
         mcb3_dram_odt : OUT  std_logic;
         mcb3_dram_cke : OUT  std_logic;
         mcb3_dram_dm : OUT  std_logic;
         mcb3_dram_udqs : INOUT  std_logic;
         mcb3_dram_udqs_n : INOUT  std_logic;
         mcb3_rzq : INOUT  std_logic;
         mcb3_zio : INOUT  std_logic;
         mcb3_dram_udm : OUT  std_logic;
         c3_sys_clk : IN  std_logic;
         c3_sys_rst_i : IN  std_logic;
         mcb3_dram_dqs : INOUT  std_logic;
         mcb3_dram_dqs_n : INOUT  std_logic;
         mcb3_dram_ck : OUT  std_logic;
         mcb3_dram_ck_n : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal c3_sys_clk : std_logic := '0';
   signal c3_sys_rst_i : std_logic := '0';

	--BiDirs
   signal mcb3_dram_dq : std_logic_vector(15 downto 0);
   signal mcb3_dram_udqs : std_logic;
   signal mcb3_dram_udqs_n : std_logic;
   signal mcb3_rzq : std_logic;
   signal mcb3_zio : std_logic;
   signal mcb3_dram_dqs : std_logic;
   signal mcb3_dram_dqs_n : std_logic;

 	--Outputs
   signal calib_done : std_logic;
   signal error : std_logic;
   signal mcb3_dram_a : std_logic_vector(12 downto 0);
   signal mcb3_dram_ba : std_logic_vector(2 downto 0);
   signal mcb3_dram_ras_n : std_logic;
   signal mcb3_dram_cas_n : std_logic;
   signal mcb3_dram_we_n : std_logic;
   signal mcb3_dram_odt : std_logic;
   signal mcb3_dram_cke : std_logic;
   signal mcb3_dram_dm : std_logic;
   signal mcb3_dram_udm : std_logic;
   signal mcb3_dram_ck : std_logic;
   signal mcb3_dram_ck_n : std_logic;

   -- Clock period definitions
   constant c3_sys_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: example_top PORT MAP (
          calib_done => calib_done,
          error => error,
          mcb3_dram_dq => mcb3_dram_dq,
          mcb3_dram_a => mcb3_dram_a,
          mcb3_dram_ba => mcb3_dram_ba,
          mcb3_dram_ras_n => mcb3_dram_ras_n,
          mcb3_dram_cas_n => mcb3_dram_cas_n,
          mcb3_dram_we_n => mcb3_dram_we_n,
          mcb3_dram_odt => mcb3_dram_odt,
          mcb3_dram_cke => mcb3_dram_cke,
          mcb3_dram_dm => mcb3_dram_dm,
          mcb3_dram_udqs => mcb3_dram_udqs,
          mcb3_dram_udqs_n => mcb3_dram_udqs_n,
          mcb3_rzq => mcb3_rzq,
          mcb3_zio => mcb3_zio,
          mcb3_dram_udm => mcb3_dram_udm,
          c3_sys_clk => c3_sys_clk,
          c3_sys_rst_i => c3_sys_rst_i,
          mcb3_dram_dqs => mcb3_dram_dqs,
          mcb3_dram_dqs_n => mcb3_dram_dqs_n,
          mcb3_dram_ck => mcb3_dram_ck,
          mcb3_dram_ck_n => mcb3_dram_ck_n
        );

   -- Clock process definitions
   c3_sys_clk_process :process
   begin
		c3_sys_clk <= '0';
		wait for c3_sys_clk_period/2;
		c3_sys_clk <= '1';
		wait for c3_sys_clk_period/2;
   end process;

   -- Stimulus process
   stim_proc: process
   
   -- Text output
   variable line_out : line;
   
   begin		
      
      c3_sys_rst_i <= '1';
      wait for 200 ns;	
      c3_sys_rst_i <= '0';
      -- hold reset state for 100 ns.
      --wait for 100 ns;	

      wait for c3_sys_clk_period*10;

      -- insert stimulus here 
      -- Calibration
      write(line_out, now); -- now stores the current simulation time
      write(line_out, string'(" initial value of c3_calib_done: "));
      write(line_out, c3_calib_done);
      writeline(output, line_out); -- writeline flushes everything in the line to output
      
      wait UNTIL c3_calib_done = '1';
      write(line_out, now);
      write(line_out, string'(" c3_calib_done changed value: "));
      write(line_out, c3_calib_done);
      writeline(output, line_out);
      
      wait for 100 ns;

      -- Put some data into FIFO in preparation for writing it.
      c3_p1_wr_en <= '1'; -- Start writing to the FIFO
      c3_p1_wr_data <= x"00000014"; -- 20 in dec

      wait for 10 ns;
      c3_p1_wr_data <= x"00000015";-- AFTER 10 ns; -- 21
      wait for 10 ns;
      c3_p1_wr_data <= x"00000016";-- AFTER 10 ns; -- 22
      wait for 10 ns;
      c3_p1_wr_data <= x"00000017";-- AFTER 10 ns; -- 23
      wait for 10 ns;
      c3_p1_wr_data <= x"00000018";-- AFTER 10 ns; -- 24
      wait for 10 ns;
      c3_p1_wr_data <= x"00000019";-- AFTER 10 ns; -- 25
      wait for 10 ns;
      c3_p1_wr_data <= x"0000001a";-- AFTER 10 ns; -- 26
      
      wait for 10 ns;
      c3_p1_wr_en <= '0'; -- Stop writing to the FIFO
      
      write(line_out, now);
      write(line_out, string'(" WR count: "));
      write(line_out, c3_p1_wr_count);
      writeline(output, line_out);
      
      -- Write to memory
      wait for 10 ns;
      c3_p1_cmd_instr <= "000"; -- Prepare to write
      c3_p1_cmd_bl <= "000111"; -- a total of seven words
      c3_p1_cmd_byte_addr <= "00" & x"0000010"; -- to address 16
      
      wait for 10 ns;
      c3_p1_cmd_en <= '1'; -- Write to command FIFO
      
      wait for 10 ns;
      c3_p1_cmd_en <= '0'; -- Stop writing to command FIFO
      
      -- Perform a read, sometime later
      wait for 50 ns; -- 32.5
      c3_p1_cmd_bl <= "001111"; -- Read 16 words (note, 0 will read one word)
      c3_p1_cmd_byte_addr <= "00" & x"0000010"; -- From address 16
      
      wait for 10 ns;
      c3_p1_cmd_instr <= "001"; -- Issue a read command
      
      wait for 10 ns;
      c3_p1_cmd_en <= '1'; -- Write to command FIFO
      
      wait for 10 ns;
      c3_p1_cmd_en <= '0'; -- Stop writing to command FIFO
      
      wait for 10 ns;
      write(line_out, now);
      write(line_out, string'(" Waiting for c3_p1_rd_empty: "));
      write(line_out, c3_p1_rd_empty);
      writeline(output, line_out);
      
      --wait for 10 ns;
      wait until c3_p1_rd_empty = '0'; -- Wait until the RAM has retreived the data
      c3_p1_rd_en <= '1'; -- Start reading data
      
      wait for 10 ns;
      write(line_out, now);
      write(line_out, string'(" Waiting for c3_p1_rd_empty: "));
      write(line_out, c3_p1_rd_empty);
      writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      wait for 10 ns; write(line_out, now); write(line_out, string'(" Read: "));
      write(line_out, c3_p1_rd_data); write(line_out, string'(", empty: "));
      write(line_out, c3_p1_rd_empty); writeline(output, line_out);
      
      c3_p1_rd_en <= '0'; -- Stop reading data

      wait;
   end process;

END;
