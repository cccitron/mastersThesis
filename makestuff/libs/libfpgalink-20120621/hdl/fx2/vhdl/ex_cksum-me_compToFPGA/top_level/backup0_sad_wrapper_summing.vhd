----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:13:50 06/18/2014 
-- Design Name: 
-- Module Name:    sad_wrapper - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sad_wrapper is
   Port ( 
      clk_I      : in  STD_LOGIC;
      
      h2fData_I  : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
      templ_O    : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      search_O   : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      disp_O     : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      
      chanAddr_I : IN  STD_LOGIC_VECTOR(6 DOWNTO 0);
      f2hReady_I : IN  STD_LOGIC;
      h2fValid_I : IN  STD_LOGIC;
      
      sw_I       : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
      led_O      : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
   );
end sad_wrapper;

architecture Behavioral of sad_wrapper is

   -- Template array for storing data transfered to the FPGA from comp
   type array_type_templ is array (0 to 8) of std_logic_vector(7 downto 0);
	signal templ_array, templ_array_next : array_type_templ := (OTHERS => (OTHERS => '0'));
   
   -- Search array for storing data transfered to the FPGA from comp
   type array_type_search is array (0 to 8) of std_logic_vector(7 downto 0);
	signal search_array, search_array_next : array_type_search := (OTHERS => (OTHERS => '0'));
   
   SIGNAL ndx_t, ndx_t_next, f2h_t_rd, f2h_t_rd_next : INTEGER := 0;
   SIGNAL ndx_s, ndx_s_next, f2h_s_rd, f2h_s_rd_next : INTEGER := 0;
   
   -- sum array
   type array_type_sad is array (0 to 8) of std_logic_vector(7 downto 0);
	signal sad_array, sad_array_next : array_type_sad := (OTHERS => (OTHERS => '0'));
   
   SIGNAL ndx_sad, ndx_sad_next, f2h_sad_rd, f2h_sad_rd_next : INTEGER := 0;
   
   SIGNAL sel_arr : STD_LOGIC := '0';
   SIGNAL zero    : STD_LOGIC := '0';
   
   signal reg1_templ, reg2_search, reg3_disp : std_logic_vector(7 downto 0)  := x"00";

begin

   process(clk_I)
	begin
		if ( rising_edge(clk_I) ) then
         templ_array  <= templ_array_next;
         search_array <= search_array_next;
         sad_array <= sad_array_next;
         
         ndx_t <= ndx_t_next;
         IF (ndx_t = 9) THEN
            ndx_t <= 0;
            --sel_arr <= '1';
         END IF;
         
         ndx_s <= ndx_s_next;
         IF (ndx_s = 9) THEN
            ndx_s <= 0;
         END IF;
         
         f2h_t_rd <= f2h_t_rd_next;
         IF (f2h_t_rd = 9) THEN
            f2h_t_rd <= 0;
            --sel_arr <= '0';
         END IF;
         
         f2h_s_rd <= f2h_s_rd_next;
         IF (f2h_s_rd = 9) THEN
            f2h_s_rd <= 0;
         END IF;
         
         IF (f2h_sad_rd_next = 9) THEN
            f2h_sad_rd <= 0;
         ELSE
            f2h_sad_rd <= f2h_sad_rd_next;
         END IF;
         
--         IF (zero <= '1') THEN
--            ndx_t <= 0;
--            ndx_s <= 0;
--         END IF;
         
		end if;
	end process;
   
   -- host to FPGA templ_array
   reg1_templ <= h2fData_I when chanAddr_I = "0000001" and h2fValid_I = '1' else templ_array(ndx_t);
   
   fill_templ : PROCESS (reg1_templ, templ_array, ndx_t)
   BEGIN
      templ_array_next <= templ_array;
      templ_array_next(ndx_t) <= reg1_templ;
   END PROCESS fill_templ;
   
   ndx_t_next <= ndx_t + 1 WHEN h2fValid_I = '1' AND chanAddr_I = "0000001"
      ELSE ndx_t;
   
   --templ_array_next(ndx_t)  <= h2fData_I when chanAddr_I = "0000001" and h2fValid_I = '1' else templ_array(ndx_t);
   --search_array_next(ndx_s) <= h2fData_I when chanAddr_I = "0000010" and h2fValid_I = '1' else search_array(ndx_s);
   
   -- host to FPGA search_array
   reg2_search <= h2fData_I when chanAddr_I = "0000010" and h2fValid_I = '1' else search_array(ndx_s);
   
   fill_search : PROCESS (reg2_search, search_array, ndx_s)
   BEGIN
      search_array_next <= search_array;
      search_array_next(ndx_s) <= reg2_search;
   END PROCESS fill_search;
   
   ndx_s_next <= ndx_s + 1 WHEN h2fValid_I = '1' AND chanAddr_I = "0000010" --ndx_t > 8
      ELSE ndx_s;
   
   -- FPGA templ_array to host, reg1
   --temp_array_next(f2h_rd) <= h2fData when chanAddr = "0000001" and h2fValid = '1' else templ_array(f2h_rd);
   
   f2h_t_rd_next <= f2h_t_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000001"
      ELSE f2h_t_rd;
      
   f2h_s_rd_next <= f2h_s_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000010"
      ELSE f2h_s_rd;
      
   f2h_sad_rd_next <= f2h_sad_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000011"
      ELSE f2h_sad_rd;
   
--   sum : PROCESS (clk_I)--ndx_t)
--   BEGIN
--      IF (RISING_EDGE(clk_I)) THEN
--         sad_array <= sad_array;
--         IF (ndx_t > 8 AND ndx_s > 8) THEN
--            sad_array(0) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(0)) + UNSIGNED(search_array(0)));
--            sad_array(1) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(1)) + UNSIGNED(search_array(1)));
--            sad_array(2) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(2)) + UNSIGNED(search_array(2)));
--            sad_array(3) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(3)) + UNSIGNED(search_array(3)));
--            sad_array(4) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(4)) + UNSIGNED(search_array(4)));
--            sad_array(5) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(5)) + UNSIGNED(search_array(5)));
--            sad_array(6) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(6)) + UNSIGNED(search_array(6)));
--            sad_array(7) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(7)) + UNSIGNED(search_array(7)));
--            sad_array(8) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(8)) + UNSIGNED(search_array(8)));
----            ndx_t <= 0;
----            ndx_s <= 0;
--            zero <= '1';
--         ELSE
--            zero <= '0';
--         END IF;
--      END IF;
--   END PROCESS sum;

   sum : PROCESS (ndx_t, ndx_s, templ_array, search_array, sad_array)
   BEGIN
      sad_array_next <= sad_array;
      --IF (ndx_t > 8 AND ndx_s > 8) THEN
         FOR i IN 0 TO 8 LOOP
            sad_array_next(i) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(i)) + UNSIGNED(search_array(i)));
         END LOOP;
--         sad_array_next(0) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(0)) + UNSIGNED(search_array(0)));
--         sad_array_next(1) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(1)) + UNSIGNED(search_array(1)));
--         sad_array_next(2) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(2)) + UNSIGNED(search_array(2)));
--         sad_array_next(3) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(3)) + UNSIGNED(search_array(3)));
--         sad_array_next(4) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(4)) + UNSIGNED(search_array(4)));
--         sad_array_next(5) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(5)) + UNSIGNED(search_array(5)));
--         sad_array_next(6) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(6)) + UNSIGNED(search_array(6)));
--         sad_array_next(7) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(7)) + UNSIGNED(search_array(7)));
--         sad_array_next(8) <= STD_LOGIC_VECTOR(UNSIGNED(templ_array(8)) + UNSIGNED(search_array(8)));
      --END IF;
   END PROCESS sum;
   
   templ_O  <= templ_array(f2h_t_rd);
   search_O <= search_array(f2h_s_rd);
   disp_O   <= sad_array(f2h_sad_rd);
   
   WITH sw_I SELECT led_O <=
      STD_LOGIC_VECTOR(TO_UNSIGNED(f2h_sad_rd, 8)) WHEN x"00", --h2fValid_I & chanAddr_I(6 DOWNTO 0) WHEN x"00",
      sad_array(0)  WHEN x"01",
      sad_array(1)  WHEN x"02",
      sad_array(2)  WHEN x"04",
      sad_array(3)  WHEN x"08",
      sad_array(4)  WHEN x"10",
      sad_array(5)  WHEN x"20",
      sad_array(6)  WHEN x"40",
      sad_array(7)  WHEN x"80",
      x"f5"         WHEN OTHERS;

end Behavioral;
