--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:32:16 06/23/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_cksum-me_compToFPGA/top_level/tb_sad_wrapper.vhd
-- Project Name:  top_level
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sad_wrapper
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
USE ieee.numeric_std.ALL;
 
ENTITY tb_sad_wrapper IS
END tb_sad_wrapper;
 
ARCHITECTURE behavior OF tb_sad_wrapper IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sad_wrapper
    PORT(
         clk_I : IN  std_logic;
         
			h2fData_I : IN  std_logic_vector(7 downto 0);
         templ_I    : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
			search_I   : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
			templ_O : OUT  std_logic_vector(7 downto 0);
         search_O : OUT  std_logic_vector(7 downto 0);
         sad_O : OUT  std_logic_vector(7 downto 0);
         disp_O : OUT  std_logic_vector(7 downto 0);
         
			chanAddr_I : IN  std_logic_vector(6 downto 0);
			write_t_I  : IN  STD_LOGIC;
			write_s_I  : IN  STD_LOGIC;
			
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
	signal templ_I    : STD_LOGIC_VECTOR(7 DOWNTO 0);
	signal search_I   : STD_LOGIC_VECTOR(7 DOWNTO 0);
	signal write_t_I  : STD_LOGIC;
	signal write_s_I  : STD_LOGIC;

 	--Outputs
   signal templ_O : std_logic_vector(7 downto 0);
   signal search_O : std_logic_vector(7 downto 0);
   signal sad_O : std_logic_vector(7 downto 0);
   signal disp_O : std_logic_vector(7 downto 0);
   signal led_O : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_I_period : time := 10 ns;
   
   -- Array to represent 9x9 template
	type array_type_init is array (0 to 243) of std_logic_vector(7 downto 0);
	type array_type_next is array (0 to 55) of std_logic_vector(7 downto 0);

	SIGNAL templateArray : array_type_init := (x"ff",
		x"02", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"02", x"02", x"03", x"03", x"03", x"02", x"03", x"02", x"03", x"02", x"03", x"02", x"03", x"02", x"03", x"02", x"03", 
		x"02", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"05", x"03", x"04", x"03", x"05", x"03", x"04", x"03", x"05", x"03", x"05", x"03", x"05", x"03", x"05", 
		x"02", x"04", x"03", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"03", x"05", x"03", x"04", x"02", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"05", x"03", x"04", 
		x"0b", x"2f", x"2f", x"3a", x"3a", x"3a", x"3b", x"3b", x"3b", x"3b", x"3a", x"38", x"2f", x"1d", x"20", x"16", x"1a", x"13", x"14", x"15", x"1a", x"13", x"0c", x"12", x"17", x"2c", x"55", 
		x"15", x"34", x"2d", x"3a", x"36", x"39", x"39", x"39", x"39", x"39", x"38", x"36", x"2d", x"1b", x"1e", x"17", x"17", x"12", x"13", x"13", x"17", x"12", x"0b", x"11", x"15", x"26", x"59", 
		x"15", x"32", x"2b", x"3b", x"38", x"3b", x"3b", x"3a", x"3a", x"39", x"39", x"36", x"2b", x"1a", x"1d", x"18", x"1a", x"13", x"12", x"13", x"19", x"15", x"0a", x"10", x"14", x"26", x"56", 
		x"14", x"34", x"2b", x"3b", x"38", x"3b", x"3b", x"39", x"3b", x"3b", x"39", x"36", x"2c", x"1b", x"1e", x"16", x"1a", x"12", x"13", x"14", x"19", x"13", x"09", x"10", x"16", x"25", x"56", 
		x"13", x"36", x"2c", x"3c", x"39", x"3a", x"39", x"3a", x"3a", x"39", x"3b", x"36", x"2e", x"1c", x"1d", x"19", x"1a", x"12", x"11", x"13", x"18", x"14", x"09", x"0f", x"15", x"23", x"55", 
		x"14", x"38", x"2d", x"3b", x"38", x"3b", x"3c", x"38", x"39", x"39", x"39", x"37", x"30", x"1c", x"1e", x"16", x"19", x"13", x"14", x"14", x"18", x"16", x"0b", x"0e", x"13", x"22", x"53"); 
		
	SIGNAL template_next : array_type_next := (
		x"ff", x"14", x"36", x"2e", x"39", x"39", x"3a", x"3c", x"39", x"3a", x"39", x"38", x"37", x"31", x"1c", x"1e", x"17", x"1b", x"14", x"11", x"13", x"1a", x"18", x"0b", x"0e", x"13", x"1f", x"51",
		x"ff", x"14", x"36", x"2e", x"39", x"30", x"32", x"33", x"39", x"3a", x"39", x"38", x"37", x"31", x"1c", x"1e", x"17", x"1b", x"14", x"11", x"13", x"1a", x"18", x"0b", x"0e", x"13", x"1f", x"51");

	SIGNAL searchArray : array_type_init := (x"ff",
		x"02", x"02", x"03", x"03", x"03", x"04", x"03", x"03", x"03", x"03", x"03", x"02", x"03", x"01", x"02", x"02", x"03", x"02", x"03", x"02", x"03", x"02", x"03", x"02", x"03", x"02", x"02", 
		x"02", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"05", x"03", x"04", x"03", x"05", x"03", x"04", x"03", x"05", x"03", x"05", x"04", x"04", x"03", x"04", 
		x"02", x"04", x"04", x"04", x"03", x"04", x"04", x"04", x"04", x"04", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"05", 
		x"0a", x"33", x"2d", x"31", x"32", x"31", x"31", x"32", x"3b", x"3e", x"3b", x"3d", x"3e", x"3a", x"3c", x"3c", x"3b", x"2e", x"1e", x"1e", x"18", x"18", x"14", x"12", x"16", x"18", x"12", 
		x"13", x"37", x"28", x"31", x"2f", x"31", x"30", x"30", x"39", x"3c", x"3a", x"3a", x"3c", x"38", x"3b", x"3b", x"3a", x"2e", x"1f", x"1e", x"18", x"17", x"14", x"12", x"15", x"18", x"13", 
		x"14", x"35", x"2b", x"31", x"32", x"34", x"31", x"31", x"39", x"3c", x"3b", x"3b", x"3d", x"3d", x"3c", x"3b", x"39", x"2f", x"1f", x"1b", x"1b", x"18", x"12", x"11", x"14", x"17", x"15", 
		x"15", x"33", x"28", x"30", x"31", x"31", x"31", x"2f", x"39", x"3f", x"3a", x"3b", x"3d", x"3a", x"3b", x"39", x"3b", x"30", x"1f", x"1c", x"1a", x"17", x"15", x"10", x"14", x"18", x"16", 
		x"13", x"35", x"29", x"2e", x"2e", x"31", x"32", x"31", x"37", x"3c", x"3d", x"3c", x"3d", x"39", x"3c", x"39", x"3b", x"31", x"20", x"1b", x"19", x"17", x"13", x"11", x"14", x"17", x"15", 
		x"14", x"34", x"2a", x"2e", x"2e", x"31", x"32", x"32", x"38", x"3c", x"3b", x"3a", x"3b", x"39", x"3a", x"38", x"3a", x"33", x"21", x"1c", x"1b", x"17", x"15", x"10", x"14", x"18", x"17"); 
		
	SIGNAL search_next : array_type_next := (
		x"ff", x"15", x"35", x"2a", x"30", x"30", x"32", x"33", x"30", x"36", x"3d", x"3c", x"3d", x"3d", x"38", x"3b", x"39", x"3b", x"34", x"22", x"1d", x"1a", x"18", x"14", x"11", x"15", x"19", x"1a",
		x"ff", x"15", x"35", x"2a", x"30", x"30", x"32", x"33", x"30", x"36", x"3d", x"3c", x"3d", x"3d", x"38", x"3b", x"39", x"3b", x"34", x"22", x"1d", x"1a", x"18", x"14", x"11", x"15", x"19", x"1a");
	
	SIGNAL ndx_t, ndx_s : INTEGER := 0;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sad_wrapper PORT MAP (
          clk_I => clk_I,
          h2fData_I => h2fData_I,
			 templ_I => templ_I,
	       search_I => search_I,
          templ_O => templ_O,
          search_O => search_O,
          sad_O => sad_O,
          disp_O => disp_O,
          chanAddr_I => chanAddr_I,
			 write_t_I => write_t_I,
			 write_s_I => write_s_I,
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
   
--	VARIABLE ndx : INTEGER RANGE 0 TO 56;
	VARIABLE ndx : INTEGER; -- RANGE 0 TO 56;
	VARIABLE row : INTEGER;
   VARIABLE offset : INTEGER;

   -- Text output
   variable line_out : line;
   
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_I_period*20;

      -- insert stimulus here 

		-- Initial template
--		h2fData_I  <= templateArray(0);
		templ_I    <= templateArray(0);
		search_I   <= searchArray(0);
		h2fValid_I <= '1';
		write_t_I  <= '1';
		write_s_I  <= '1';
		chanAddr_I <= "0000000";
		sw_I       <= x"00";
		wait for clk_I_period;
		
		ndx := 1;
		WHILE (ndx < 243) LOOP
			templ_I <= templateArray(ndx);
			search_I <= searchArray(ndx);
			wait for clk_I_period;
			ndx := ndx + 1;
		END LOOP;
		
		templ_I <= templateArray(243);
		search_I <= searchArray(243);
		
		wait for clk_I_period;
		h2fValid_I <= '0';
		write_t_I  <= '0';
		write_s_I  <= '0';
--		chanAddr_I <= "0000001";

--		row := 0;
		ndx := 0;
		wait for clk_I_period;
--		WHILE (row < 2) LOOP
		
			wait for clk_I_period*90;
--			offset := 27 * (1+row);

			f2hReady_I <= '1';
			chanAddr_I <= "0000011";
			wait for clk_I_period*4;
			f2hReady_I <= '0';
			
			-- Next template row
--			templ_I    <= template_next(ndx);
--			search_I   <= search_next(ndx);
			h2fValid_I <= '1';
			write_t_I  <= '1';
			write_s_I  <= '1';
			sw_I       <= x"00";
			--wait for clk_I_period;
			
--			ndx := ndx + 1;
--			offset := 27 * (1+row);
--			wait for clk_I_period;
			
			WHILE (ndx < 27) LOOP --offset) LOOP
				templ_I  <= template_next(ndx);
				search_I <= search_next(ndx);
				wait for clk_I_period;
				ndx := ndx + 1;
			END LOOP;
			
			templ_I <= template_next(ndx);
			search_I <= search_next(ndx);
			
			wait for clk_I_period;
			h2fValid_I <= '0';
			write_t_I <= '0';
			write_s_I <= '0';
			
--			ndx := ndx + 1;
--			row := row + 1;
--		END LOOP;
		
		wait for clk_I_period*90;
		f2hReady_I <= '1';
		chanAddr_I <= "0000011";
		wait for clk_I_period*4;
		f2hReady_I <= '0';
		
		wait for clk_I_period*2;
      wait;
   end process;

END;
