--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:41:14 03/25/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo/tb_ddr2_testbench.vhd
-- Project Name:  fifo
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ddr_interface
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
 
ENTITY tb_ddr2_testbench IS
END tb_ddr2_testbench;
 
ARCHITECTURE behavior OF tb_ddr2_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ddr_interface
    PORT(
         CLK_I : IN  std_logic;
         RESET_I : IN  std_logic;
         c3_calib_done : OUT  std_logic;
         c3_p1_cmd_clk : IN  std_logic;
         c3_p1_cmd_en : IN  std_logic;
         c3_p1_cmd_instr : IN  std_logic_vector(2 downto 0);
         c3_p1_cmd_bl : IN  std_logic_vector(5 downto 0);
         c3_p1_cmd_byte_addr : IN  std_logic_vector(29 downto 0);
         c3_p1_cmd_empty : OUT  std_logic;
         c3_p1_cmd_full : OUT  std_logic;
         c3_p1_wr_clk : IN  std_logic;
         c3_p1_wr_en : IN  std_logic;
         c3_p1_wr_mask : IN  std_logic_vector(3 downto 0);
         c3_p1_wr_data : IN  std_logic_vector(31 downto 0);
         c3_p1_wr_full : OUT  std_logic;
         c3_p1_wr_empty : OUT  std_logic;
         c3_p1_wr_count : OUT  std_logic_vector(6 downto 0);
         c3_p1_wr_underrun : OUT  std_logic;
         c3_p1_wr_error : OUT  std_logic;
         c3_p1_rd_clk : in std_logic;
         c3_p1_rd_en : in std_logic;
         c3_p1_rd_data : out std_logic_vector(31 downto 0);
         c3_p1_rd_full : out std_logic;
         c3_p1_rd_empty : out std_logic;
         c3_p1_rd_count : out std_logic_vector(6 downto 0);
         c3_p1_rd_overflow : out std_logic;
         c3_p1_rd_error : out std_logic;
         c3_p3_cmd_clk : IN  std_logic;
         c3_p3_cmd_en : IN  std_logic;
         c3_p3_cmd_instr : IN  std_logic_vector(2 downto 0);
         c3_p3_cmd_bl : IN  std_logic_vector(5 downto 0);
         c3_p3_cmd_byte_addr : IN  std_logic_vector(29 downto 0);
         c3_p3_cmd_empty : OUT  std_logic;
         c3_p3_cmd_full : OUT  std_logic;
         c3_p3_rd_clk : IN  std_logic;
         c3_p3_rd_en : IN  std_logic;
         c3_p3_rd_data : OUT  std_logic_vector(31 downto 0);
         c3_p3_rd_full : OUT  std_logic;
         c3_p3_rd_empty : OUT  std_logic;
         c3_p3_rd_count : OUT  std_logic_vector(6 downto 0);
         c3_p3_rd_overflow : OUT  std_logic;
         c3_p3_rd_error : OUT  std_logic;
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
         mcb3_dram_dqs : INOUT  std_logic;
         mcb3_dram_dqs_n : INOUT  std_logic;
         mcb3_dram_ck : OUT  std_logic;
         mcb3_dram_ck_n : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_I : std_logic := '0';
   signal RESET_I : std_logic := '0';
   signal c3_p1_cmd_clk : std_logic := '0';
   signal c3_p1_cmd_en : std_logic := '0';
   signal c3_p1_cmd_instr : std_logic_vector(2 downto 0) := (others => '0');
   signal c3_p1_cmd_bl : std_logic_vector(5 downto 0) := (others => '0');
   signal c3_p1_cmd_byte_addr : std_logic_vector(29 downto 0) := (others => '0');
   signal c3_p1_wr_clk : std_logic := '0';
   signal c3_p1_wr_en : std_logic := '0';
   signal c3_p1_wr_mask : std_logic_vector(3 downto 0) := (others => '0');
   signal c3_p1_wr_data : std_logic_vector(31 downto 0) := (others => '0');
   signal c3_p1_rd_clk : std_logic := '0';
   signal c3_p1_rd_en : std_logic := '0';
   signal c3_p3_cmd_clk : std_logic := '0';
   signal c3_p3_cmd_en : std_logic := '0';
   signal c3_p3_cmd_instr : std_logic_vector(2 downto 0) := (others => '0');
   signal c3_p3_cmd_bl : std_logic_vector(5 downto 0) := (others => '0');
   signal c3_p3_cmd_byte_addr : std_logic_vector(29 downto 0) := (others => '0');
   signal c3_p3_rd_clk : std_logic := '0';
   signal c3_p3_rd_en : std_logic := '0';

	--BiDirs
   signal mcb3_dram_dq : std_logic_vector(15 downto 0);
   signal mcb3_dram_udqs : std_logic;
   signal mcb3_dram_udqs_n : std_logic;
   signal mcb3_rzq : std_logic;
   signal mcb3_zio : std_logic;
   signal mcb3_dram_dqs : std_logic;
   signal mcb3_dram_dqs_n : std_logic;

 	--Outputs
   signal c3_calib_done : std_logic;
   signal c3_p1_cmd_empty : std_logic;
   signal c3_p1_cmd_full : std_logic;
   signal c3_p1_wr_full : std_logic;
   signal c3_p1_wr_empty : std_logic;
   signal c3_p1_wr_count : std_logic_vector(6 downto 0);
   signal c3_p1_wr_underrun : std_logic;
   signal c3_p1_wr_error : std_logic;
   signal c3_p1_rd_data : std_logic_vector(31 downto 0);
   signal c3_p1_rd_full : std_logic;
   signal c3_p1_rd_empty : std_logic;
   signal c3_p1_rd_count : std_logic_vector(6 downto 0);
   signal c3_p1_rd_overflow : std_logic;
   signal c3_p1_rd_error : std_logic;
   signal c3_p3_cmd_empty : std_logic;
   signal c3_p3_cmd_full : std_logic;
   signal c3_p3_rd_data : std_logic_vector(31 downto 0);
   signal c3_p3_rd_full : std_logic;
   signal c3_p3_rd_empty : std_logic;
   signal c3_p3_rd_count : std_logic_vector(6 downto 0);
   signal c3_p3_rd_overflow : std_logic;
   signal c3_p3_rd_error : std_logic;
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
   constant CLK_I_period : time := 10 ns;
   constant c3_p1_cmd_clk_period : time := 10 ns;
   constant c3_p1_wr_clk_period : time := 10 ns;
   constant c3_p1_rd_clk_period : time := 10 ns;
   constant c3_p3_cmd_clk_period : time := 10 ns;
   constant c3_p3_rd_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ddr_interface PORT MAP (
          CLK_I => CLK_I,
          RESET_I => RESET_I,
          c3_calib_done => c3_calib_done,
          c3_p1_cmd_clk => c3_p1_cmd_clk,
          c3_p1_cmd_en => c3_p1_cmd_en,
          c3_p1_cmd_instr => c3_p1_cmd_instr,
          c3_p1_cmd_bl => c3_p1_cmd_bl,
          c3_p1_cmd_byte_addr => c3_p1_cmd_byte_addr,
          c3_p1_cmd_empty => c3_p1_cmd_empty,
          c3_p1_cmd_full => c3_p1_cmd_full,
          c3_p1_wr_clk => c3_p1_wr_clk,
          c3_p1_wr_en => c3_p1_wr_en,
          c3_p1_wr_mask => c3_p1_wr_mask,
          c3_p1_wr_data => c3_p1_wr_data,
          c3_p1_wr_full => c3_p1_wr_full,
          c3_p1_wr_empty => c3_p1_wr_empty,
          c3_p1_wr_count => c3_p1_wr_count,
          c3_p1_wr_underrun => c3_p1_wr_underrun,
          c3_p1_wr_error => c3_p1_wr_error,
          c3_p1_rd_clk => c3_p1_rd_clk,
          c3_p1_rd_en => c3_p1_rd_en,
          c3_p1_rd_data => c3_p1_rd_data,
          c3_p1_rd_full => c3_p1_rd_full,
          c3_p1_rd_empty => c3_p1_rd_empty,
          c3_p1_rd_count => c3_p1_rd_count,
          c3_p1_rd_overflow => c3_p1_rd_overflow,
          c3_p1_rd_error => c3_p1_rd_error,
          c3_p3_cmd_clk => c3_p3_cmd_clk,
          c3_p3_cmd_en => c3_p3_cmd_en,
          c3_p3_cmd_instr => c3_p3_cmd_instr,
          c3_p3_cmd_bl => c3_p3_cmd_bl,
          c3_p3_cmd_byte_addr => c3_p3_cmd_byte_addr,
          c3_p3_cmd_empty => c3_p3_cmd_empty,
          c3_p3_cmd_full => c3_p3_cmd_full,
          c3_p3_rd_clk => c3_p3_rd_clk,
          c3_p3_rd_en => c3_p3_rd_en,
          c3_p3_rd_data => c3_p3_rd_data,
          c3_p3_rd_full => c3_p3_rd_full,
          c3_p3_rd_empty => c3_p3_rd_empty,
          c3_p3_rd_count => c3_p3_rd_count,
          c3_p3_rd_overflow => c3_p3_rd_overflow,
          c3_p3_rd_error => c3_p3_rd_error,
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
          mcb3_dram_dqs => mcb3_dram_dqs,
          mcb3_dram_dqs_n => mcb3_dram_dqs_n,
          mcb3_dram_ck => mcb3_dram_ck,
          mcb3_dram_ck_n => mcb3_dram_ck_n
        );

   -- Clock process definitions
   CLK_I_process :process
   begin
		CLK_I <= '0';
		wait for CLK_I_period/2;
		CLK_I <= '1';
		wait for CLK_I_period/2;
   end process;
 
   c3_p1_cmd_clk_process :process
   begin
		c3_p1_cmd_clk <= '0';
		wait for c3_p1_cmd_clk_period/2;
		c3_p1_cmd_clk <= '1';
		wait for c3_p1_cmd_clk_period/2;
   end process;
 
   c3_p1_wr_clk_process :process
   begin
		c3_p1_wr_clk <= '0';
		wait for c3_p1_wr_clk_period/2;
		c3_p1_wr_clk <= '1';
		wait for c3_p1_wr_clk_period/2;
   end process;
 
   c3_p1_rd_clk_process :process
   begin
		c3_p1_rd_clk <= '0';
		wait for c3_p1_rd_clk_period/2;
		c3_p1_rd_clk <= '1';
		wait for c3_p1_rd_clk_period/2;
   end process; 
 
   c3_p3_cmd_clk_process :process
   begin
		c3_p3_cmd_clk <= '0';
		wait for c3_p3_cmd_clk_period/2;
		c3_p3_cmd_clk <= '1';
		wait for c3_p3_cmd_clk_period/2;
   end process;
 
   c3_p3_rd_clk_process :process
   begin
		c3_p3_rd_clk <= '0';
		wait for c3_p3_rd_clk_period/2;
		c3_p3_rd_clk <= '1';
		wait for c3_p3_rd_clk_period/2;
   end process;
 
   -- Stimulus process
   stim_proc: process
   
   -- Text output
   variable line_out : line;
   
   begin		
      -- hold reset state for 100 ns.
      RESET_I <= '1';
      wait for 200 ns;	
      RESET_I <= '0';
      
      wait for CLK_I_period*10;

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
      
      wait for 100 ns;
   end process;

END;
