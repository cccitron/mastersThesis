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
         templ_O : OUT  std_logic_vector(7 downto 0);
         search_O : OUT  std_logic_vector(7 downto 0);
         sad_O : OUT  std_logic_vector(7 downto 0);
         disp_O : OUT  std_logic_vector(7 downto 0);
         
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
   signal templ_O : std_logic_vector(7 downto 0);
   signal search_O : std_logic_vector(7 downto 0);
   signal sad_O : std_logic_vector(7 downto 0);
   signal disp_O : std_logic_vector(7 downto 0);
   signal led_O : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_I_period : time := 20 ns;
   
   -- Array to represent 3x3 template
	type array_type_templ is array (0 to 57) of std_logic_vector(7 downto 0);
	signal templateArray : array_type_templ := (x"ff", x"02", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"03", x"02", x"02", x"03", x"03", x"03", x"02", x"03", x"02", x"03",
																		x"02", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"05", x"03", x"04", x"03", x"05", x"03", x"04",
																		x"02", x"04", x"03", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"03", x"05", x"03", x"04", x"02", x"04", x"03", x"04");

	type array_type_next is array (0 to 19) of std_logic_vector(7 downto 0);
--	signal template_next : array_type_next :=  (x"ff", x"11", x"47", x"47", x"58", x"58", x"58", x"59", x"59", x"59", x"59", x"58", x"56", x"47", x"29", x"32", x"22", x"26", x"19", x"20");
	signal template_next : array_type_next :=  (x"ff", x"0b", x"2f", x"2f", x"3a", x"3a", x"3a", x"3b", x"3b", x"3b", x"3b", x"3a", x"38", x"2f", x"1d", x"20", x"16", x"1a", x"13", x"14");
--	signal search_next   : array_type_next :=  (x"ff", x"10", x"51", x"45", x"49", x"50", x"49", x"49", x"50", x"59", x"62", x"59", x"61", x"62", x"58", x"60", x"60", x"59", x"46", x"30");
	signal search_next   : array_type_next :=  (x"ff", x"0a", x"33", x"2d", x"31", x"32", x"31", x"31", x"32", x"3b", x"3e", x"3b", x"3d", x"3e", x"3a", x"3c", x"3c", x"3b", x"2e", x"1e");


--	signal templateArray : array_type_templ := (x"ff", x"02", x"05", x"05", x"03", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff",
--                                                      x"04", x"00", x"07", x"01", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff",
--                                                      x"07", x"05", x"09", x"06", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"05");
   -- Array to represent 3x5 search image 
   type array_type_search is array (0 to 57) of std_logic_vector(7 downto 0);
	signal searchArray : array_type_search := (x"ff", x"02", x"02", x"03", x"03", x"03", x"04", x"03", x"03", x"03", x"03", x"03", x"02", x"03", x"01", x"02", x"02", x"03", x"02", x"03",
																	  x"02", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"04", x"05", x"03", x"04", x"03", x"05", x"03", x"04",
																	  x"02", x"04", x"04", x"04", x"03", x"04", x"04", x"04", x"04", x"04", x"04", x"03", x"04", x"03", x"04", x"03", x"04", x"03", x"04");
--	signal searchArray : array_type_search := (x"ff", x"02", x"07", x"05", x"08", x"06", x"00", x"02", x"07", x"05", x"08", x"06", x"00", x"02", x"07", x"05", x"08", x"06", x"00", x"00",
--                                                     x"01", x"07", x"04", x"02", x"07", x"09", x"01", x"07", x"04", x"02", x"07", x"09", x"01", x"07", x"04", x"02", x"07", x"09", x"00",
--                                                     x"08", x"04", x"06", x"08", x"05", x"03", x"08", x"04", x"06", x"08", x"05", x"03", x"08", x"04", x"06", x"08", x"05", x"03", x"00");
   SIGNAL ndx_t, ndx_s : INTEGER := 0;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sad_wrapper PORT MAP (
          clk_I => clk_I,
          h2fData_I => h2fData_I,
          templ_O => templ_O,
          search_O => search_O,
          sad_O => sad_O,
          disp_O => disp_O,
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
   
	VARIABLE ndx : INTEGER RANGE 0 TO 56;
	
   -- Text output
   variable line_out : line;
   
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_I_period*20;

      -- insert stimulus here 
--      chanAddr_I <= "0000000";
--      h2fValid_I <= '1';    
--      
----      WHILE (ndx_t < 200) LOOP
----         write(line_out, now);
----         write(line_out, string'(" ndx_t: "));
----         write(line_out, ndx_t);
----         writeline(output, line_out);
----         ndx_t <= ndx_t + 1;
----         wait for clk_I_period;
----      END LOOP;
--      
--      
--      WHILE (ndx_t < 59) LOOP
--         wait for 10 ns;
--         h2fData_I <= templateArray(ndx_t); 
--         ndx_t <= ndx_t + 1;
--      END LOOP;
--      h2fValid_I <= '0';    
--
--      wait for clk_I_period;
--      ndx_t <= 0;
--      --h2fValid_I <= '0';
--      wait for clk_I_period;
----      
--      f2hReady_I <= '1';
----      
--      WHILE (ndx_t < 58) LOOP
--         write(line_out, ndx_t);
--         write(line_out, string'(" templ_O: "));
--         write(line_out, templ_O);
--         writeline(output, line_out);
--         wait for clk_I_period;
--         ndx_t <= ndx_t + 1;
--      END LOOP;

		-- Initial template
		h2fData_I  <= templateArray(0);
		h2fValid_I <= '1';
		chanAddr_I <= "0000000";
		sw_I <= x"00";
		wait for clk_I_period;
		
		ndx := 1;
		WHILE (ndx < 57) LOOP
			h2fData_I <= templateArray(ndx);
			wait for clk_I_period;
			ndx := ndx + 1;
		END LOOP;
		
		h2fData_I <= templateArray(57);
		
		wait for clk_I_period;
		h2fValid_I <= '0';
		chanAddr_I <= "0000001";
		
		-- Initial search
		wait for clk_I_period;
		h2fData_I <= searchArray(0);
		h2fValid_I <= '1';
		
		wait for clk_I_period;
		
		ndx := 1;
		WHILE (ndx < 57) LOOP
			h2fData_I <= searchArray(ndx);
			wait for clk_I_period;
			ndx := ndx + 1;
		END LOOP;
		
		h2fData_I <= searchArray(57);
		
		wait for clk_I_period;
		h2fValid_I <= '0';
		ndx := 0;
		
		wait for clk_I_period*40;
		f2hReady_I <= '1';
		chanAddr_I <= "0000011";
		wait for clk_I_period*2;
		
		-- Next template row
		h2fData_I  <= template_next(0);
		h2fValid_I <= '1';
		chanAddr_I <= "0000000";
		sw_I <= x"00";
		wait for clk_I_period;
		
		ndx := 1;
		WHILE (ndx < 19) LOOP
			h2fData_I <= template_next(ndx);
			wait for clk_I_period;
			ndx := ndx + 1;
		END LOOP;
		
		h2fData_I <= template_next(19);
		
		wait for clk_I_period;
		h2fValid_I <= '0';
		chanAddr_I <= "0000001";
		
		wait for clk_I_period;
		h2fData_I <= search_next(0);
		h2fValid_I <= '1';
		
		wait for clk_I_period;
		
		ndx := 1;
		WHILE (ndx < 19) LOOP
			h2fData_I <= search_next(ndx);
			wait for clk_I_period;
			ndx := ndx + 1;
		END LOOP;
		
		h2fData_I <= search_next(19);
		
		wait for clk_I_period;
		h2fValid_I <= '0';
		
		wait for clk_I_period*2;
      wait;
   end process;

END;
