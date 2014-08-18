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

USE work.window_array.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sad_wrapper is
   Generic (
      window : integer := 7; --9; --3; -- Window size, i.e. "3" -> 3x3 window
      win    : integer := 3; --4; --1; -- win is the number of pixels above, below, right, & left of center pixel
   
      NCOL_C : INTEGER := 25; --27; --23; --25; --27; --25; --27; --29; --24; --25; --21; --33; --65; --200; --19; -- Number of columns in the search image
      NROW_C : INTEGER := 7; --9; --3;  -- Number of rows in the search image
      
      PIXEL_CNT  : INTEGER := 175; --189; --161; --225; --243; --225; --81; --87; --216; --75; --63; --99; --195; --600; --57; -- Number of pixels sent to the Template and Search Arrays, each.
      DISP_RANGE : INTEGER := 16; -- Disparity range 0-15
      DISP_ROW   : INTEGER := 4; --6; --2; --4; --2; --10; --12; --1; --8; --4; --16; --48; --2;  -- Number of disparity values for an entire row, to be sent back to comp.
      NUM_2_ROW  : INTEGER := 25; --27; --25; --27; --25; --27; --29; --24; --25; --21; --33; --65; --200; --19; -- The index of the first element of the second row for the template & search images.
      LAST_ROW   : INTEGER := 150; --162; --200; --216; --200; --54 --58 --192 --50 --42 --66 --130 --400 --38  -- The index of the first element of the last row for the template & search images.
		
		SAD_SIZE : INTEGER := 12
	);
   Port ( 
      clk_I      : in  STD_LOGIC;
      rst_I		  : IN  STD_LOGIC;
      
		templ_I    : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
		search_I   : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
		templ_O    : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      search_O   : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      sad_O      : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      disp_O     : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      
      chanAddr_I : IN  STD_LOGIC_VECTOR(6 DOWNTO 0);
		write_t_I  : IN  STD_LOGIC;
		write_s_I  : IN  STD_LOGIC;
		
      f2hReady_I : IN  STD_LOGIC;
      h2fValid_I : IN  STD_LOGIC;
      
      sw_I       : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
      led_O      : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
   );
end sad_wrapper;

architecture Behavioral of sad_wrapper is

   -- Template array for storing data transfered to the FPGA from comp
   type array_type_templ is array (0 to PIXEL_CNT-1) of std_logic_vector(7 downto 0);
	signal template_array, template_array_next, buff_t : array_type_templ := (OTHERS => (OTHERS => '0'));
	
	-- Windows 3x3 for template and search, to be passed to SAD Algorithm
	SIGNAL template_window, search_window : pixel2DArray; --pixelWindow;
   
--   type array_type_next_templ_row is array (0 to NCOL_C-1) of std_logic_vector(7 downto 0);
--	signal templ_next_t_row, templ_next_t_row_next : array_type_next_templ_row := (OTHERS => (OTHERS => '0'));
--   
--   type array_type_next_search_row is array (0 to NCOL_C-1) of std_logic_vector(7 downto 0);
--	signal search_next_s_row, search_next_s_row_next : array_type_next_search_row := (OTHERS => (OTHERS => '0'));
   
   SIGNAL ndx_t_row, ndx_t_row_next, ndx_s_row, ndx_s_row_next : INTEGER := 0;
   SIGNAL next_t_row, next_s_row, disp_ready, neg_disp : STD_LOGIC := '0';
   SIGNAL junk_t_row, junk_t_row_next, junk_s_row, junk_s_row_next : STD_LOGIC := '1';
   
   -- Search array for storing data transfered to the FPGA from comp
   type array_type_search is array (0 to PIXEL_CNT-1) of std_logic_vector(7 downto 0);
	signal search_array, search_array_next, buff_s : array_type_search := (OTHERS => (OTHERS => '0'));
   
   SIGNAL ndx_t, ndx_t_next, f2h_t_rd, f2h_t_rd_next : INTEGER := 0;
   SIGNAL ndx_s, ndx_s_next, f2h_s_rd, f2h_s_rd_next : INTEGER := 0;
   
   -- The first byte written to the board is sometimes junk, so the first byte will be ignored
   SIGNAL junk_t, junk_t_next, junk_s, junk_s_next : STD_LOGIC := '1';
   
   -- signed sum array
   --type array_type_signed is array (0 to DISP_RANGE-1) of SIGNED(8 downto 0);
	--signal sum_array, sum_array_next : array_type_signed;
   
   -- sad array
   type array_type_sad is array (0 to DISP_ROW-1, 0 to DISP_RANGE-1) of std_logic_vector(SAD_SIZE-1 downto 0);
	signal sad_array, sad_array_next : array_type_sad;-- := (OTHERS => (OTHERS => '0'));
   
   SIGNAL ndx_sad, ndx_sad_next, f2h_sad_rd, f2h_sad_rd_next : INTEGER := 0;
   
   SIGNAL sel_arr : STD_LOGIC := '0';
   SIGNAL zero    : STD_LOGIC := '0';
   
   signal reg0_templ, reg1_search, reg2_disp : std_logic_vector(7 downto 0) := x"00";
   signal reg4_next_templ_row, reg5_next_search_row : std_logic_vector(7 downto 0) := x"00";
   --signal assign_out, assign_out_next : STD_LOGIC := '0';
   
   -- 2D Array for the min SAD values in the min comparator
   TYPE array_type_minSad IS ARRAY (0 to DISP_ROW-1, 0 TO DISP_RANGE-1) OF STD_LOGIC_VECTOR(SAD_SIZE-1 DOWNTO 0);
   SIGNAL minSad : array_type_minSad;
   
   -- 2D Array for the pos of the sad values in the min comparator
   TYPE array_type_minPos IS ARRAY (0 to DISP_ROW-1, 0 TO DISP_RANGE-1) OF STD_LOGIC_VECTOR(3 DOWNTO 0);
   SIGNAL minPos : array_type_minPos;
   
   -- Array to represent disparities
   type array_type_disp is array (0 to DISP_ROW-1) of std_logic_vector(3 downto 0);
	signal disparityArray, disparityArray_next : array_type_disp;
   SIGNAL ndx_disp, ndx_disp_next, f2h_disp_rd, f2h_disp_rd_next : INTEGER := 0;
	
	SIGNAL data_in, data_next : STD_LOGIC := '0';
	TYPE array_type_data IS ARRAY (0 TO DISP_ROW-1) OF STD_LOGIC_VECTOR(DISP_RANGE-1 DOWNTO 0);
	SIGNAL data_out : array_type_data := (OTHERS => (OTHERS => '0'));
	SIGNAL data_init : STD_LOGIC := '1';

	SIGNAL write_t, write_s : STD_LOGIC := '0';
	TYPE state_type IS (ST0, ST1, ST2);
	SIGNAL present_state : state_type := ST0;
		
begin

   process(clk_I)
	begin
		IF (rst_I = '0') THEN
			template_array <= (OTHERS => (OTHERS => '0'));
			search_array   <= (OTHERS => (OTHERS => '0'));
			sad_array      <= ((OTHERS => (OTHERS => '0')),
									 (OTHERS => (OTHERS => '0')),
									 (OTHERS => (OTHERS => '0')),
									 (OTHERS => (OTHERS => '0')));
			disparityArray <= (OTHERS => (OTHERS => '0'));
			
			buff_t <= (OTHERS => (OTHERS => '0'));
			buff_s <= (OTHERS => (OTHERS => '0'));
			
			ndx_t  <= 0;
			junk_t <= '1';
			ndx_s  <= 0;
			junk_s <= '1';
			
			f2h_t_rd <= 0;
			f2h_s_rd <= 0;
			
			f2h_sad_rd  <= 0;
			ndx_sad     <= 0;
			f2h_disp_rd <= 0;
         disp_ready  <= '0';
			
			data_in  <= '0';
			
			data_init <= '1';
			data_next <= '0';
			
			present_state <= ST0;
			
		ELSIF ( rising_edge(clk_I) ) then
         template_array <= template_array_next;
         search_array <= search_array_next;
			
			IF (data_out(0) = x"ffff" AND data_out(1) = x"ffff") THEN
				sad_array <= sad_array_next;
			ELSE
				sad_array <= sad_array;
			END IF;
         
			disparityArray <= disparityArray_next;
         --assign_out <= assign_out_next;
				
--			ndx_t <= ndx_t_next;
         IF (ndx_t_next = PIXEL_CNT) THEN
            ndx_t <= LAST_ROW; --0;
            junk_t <= '1';
         ELSE
            ndx_t <= ndx_t_next;
				junk_t <= junk_t_next;
         END IF;
         
--			ndx_s <= ndx_s_next;
         IF (ndx_s_next = PIXEL_CNT) THEN
            ndx_s <= LAST_ROW; --0;
            junk_s <= '1';
         ELSE
				ndx_s <= ndx_s_next;
            junk_s <= junk_s_next;
         END IF;

         IF (f2h_t_rd_next < PIXEL_CNT) THEN
				f2h_t_rd <= f2h_t_rd_next;
			ELSE
				f2h_t_rd <= 0;
         END IF;
         
         IF (f2h_s_rd_next < PIXEL_CNT) THEN
				f2h_s_rd <= f2h_s_rd_next;
			ELSE
				f2h_s_rd <= 0;
         END IF;
         
         IF (f2h_sad_rd_next = DISP_RANGE) THEN
            f2h_sad_rd <= 0;
            IF (ndx_sad = 0) THEN
               ndx_sad <= 1;
            ELSIF (ndx_sad = 1) THEN
               ndx_sad <= 2;
            ELSIF (ndx_sad = 2) THEN
               ndx_sad <= 3;
            ELSIF (ndx_sad = 3) THEN
               ndx_sad <= 0;
            END IF;
         ELSE
            f2h_sad_rd <= f2h_sad_rd_next;
         END IF;

         IF (f2h_disp_rd_next = DISP_ROW) THEN
            f2h_disp_rd <= 0;
            disp_ready <= '1';
         ELSE
            f2h_disp_rd <= f2h_disp_rd_next;
            disp_ready <= '0';
         END IF;
			
			-- When to pass data to SAD algorithm
			CASE present_state IS
				WHEN ST0 =>
					data_next <= '0';
				
					IF (ndx_s_next = PIXEL_CNT) THEN
						present_state <= ST1;
					ELSE
						present_state <= ST0;
					END IF;
				WHEN ST1 =>
					data_next <= '1';
					
					IF (ndx_s_next = LAST_ROW+1 OR data_in = '1') THEN
						present_state <= ST0;
					ELSE
						present_state <= ST1;
					END IF;
				WHEN OTHERS =>
					data_next <= '0';
					present_state <= ST0;
			END CASE;
			
			IF ((ndx_s_next = PIXEL_CNT AND data_init = '1') OR (data_out(0)(0) = '1' AND data_next = '1')) THEN
				data_in <= '1';
				data_init <= '0';
				buff_t <= template_array;
				buff_s <= search_array;
			ELSE
				data_in <= '0';
				data_init <= data_init;
				buff_t <= buff_t;
				buff_s <= buff_s;
			END IF;
			
		end if;
	end process;
	
	write_t <= write_t_I;
	write_s <= write_s_I;
		
   -- host to FPGA template_array
   -- reg 0
   reg0_templ <= templ_I when write_t = '1' and h2fValid_I = '1' and junk_t = '0' else template_array(ndx_t);
   junk_t_next <= '0' when write_t = '1' and h2fValid_I = '1' else junk_t;
   
   fill_templ : PROCESS (reg0_templ, template_array, ndx_t, ndx_t_next)--, next_t_row, templ_next_t_row)
   BEGIN
      template_array_next <= template_array;
      
      IF (ndx_t_next = PIXEL_CNT) THEN
         template_array_next(0 TO LAST_ROW-1) <= template_array(NUM_2_ROW TO PIXEL_CNT-1);
      ELSE
         template_array_next(ndx_t) <= reg0_templ;
      END IF;
   END PROCESS fill_templ;
   
   ndx_t_next <= ndx_t + 1 WHEN h2fValid_I = '1' AND write_t = '1' AND junk_t = '0'
      ELSE ndx_t;
   
   -- host to FPGA search_array
   -- reg 1
   reg1_search <= search_I when write_s = '1' and h2fValid_I = '1' and junk_s = '0' else search_array(ndx_s);
   junk_s_next <= '0' when write_s = '1' and h2fValid_I = '1' else junk_s;
   
   fill_search : PROCESS (reg1_search, search_array, ndx_s, ndx_s_next)--, search_next_s_row)
   BEGIN
      search_array_next <= search_array;
      
      IF (ndx_s_next = PIXEL_CNT) THEN
         search_array_next(0 TO LAST_ROW-1) <= search_array(NUM_2_ROW TO PIXEL_CNT-1);
      ELSE
         search_array_next(ndx_s) <= reg1_search;
      END IF;
--      search_array_next(ndx_s) <= reg1_search;
   END PROCESS fill_search;
   
   ndx_s_next <= ndx_s + 1 WHEN h2fValid_I = '1' AND write_s = '1' and junk_s = '0' --ndx_t > 8
      ELSE ndx_s;

   f2h_t_rd_next <= f2h_t_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000000"
      ELSE f2h_t_rd;
      
   f2h_s_rd_next <= f2h_s_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000001"
      ELSE f2h_s_rd;
      
   f2h_sad_rd_next <= f2h_sad_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000010"
      ELSE f2h_sad_rd;
   
   f2h_disp_rd_next <= f2h_disp_rd + 1 WHEN f2hReady_I = '1' AND chanAddr_I = "0000011"
      ELSE f2h_disp_rd;

	-- Windows to be sent to SAD Algorithm entity
	window_setup : PROCESS(template_array, search_array)
	BEGIN
		FOR i IN 0 TO DISP_ROW-1 LOOP -- 0 or 1
			FOR j IN 0 TO DISP_RANGE-1 LOOP -- 0 to 15, for the 16 SAD calculations to compare and get the disparity value
				FOR k IN 0 TO 6 LOOP	-- 0 to 8, the 9 rows in 9x9 window
					template_window(i, j)((k*7) TO (6 + (k*7))) <=  
						(template_array(0+i+(NCOL_C*k)), template_array(1+i+(NCOL_C*k)), template_array(2+i+(NCOL_C*k)),
						 template_array(3+i+(NCOL_C*k)), template_array(4+i+(NCOL_C*k)), template_array(5+i+(NCOL_C*k)),
						 template_array(6+i+(NCOL_C*k))); --, template_array(7+i+(NCOL_C*k)), template_array(8+i+(NCOL_C*k)));
						 
					search_window(i, j)((k*7) TO (6 + (k*7)))   <=  
						(search_array(0+i+j+(NCOL_C*k)), search_array(1+i+j+(NCOL_C*k)), search_array(2+i+j+(NCOL_C*k)), 
						 search_array(3+i+j+(NCOL_C*k)), search_array(4+i+j+(NCOL_C*k)), search_array(5+i+j+(NCOL_C*k)),
						 search_array(6+i+j+(NCOL_C*k))); --, search_array(7+i+j+(NCOL_C*k)), search_array(8+i+j+(NCOL_C*k)));

				END LOOP;
			END LOOP;
		END LOOP;
	END PROCESS window_setup;

   -- Sum of the Absolute Difference between the template 3x3 and search 3x3
   g_signed_sad : FOR i IN 0 TO DISP_ROW-1 GENERATE
   BEGIN
      g_signed_sad_calc : FOR j IN 0 TO DISP_RANGE-1 GENERATE
      BEGIN
			i_sad_alg_7x7 : ENTITY work.sadAlgorithm_7x7
            PORT MAP (
					clk_I => clk_I,
					data_I => data_in,
				
					template_window_I => template_window(i, j),
					search_window_I   => search_window(i, j),
					
					data_O => data_out(i)(j),
               sad_O  => sad_array_next(i, j)
         );
      END GENERATE g_signed_sad_calc;
   END GENERATE g_signed_sad;
   
--------------------------------------------------------------------------------
-- Minimum Comparators between SAD values to obtain disparity values
--------------------------------------------------------------------------------
   -- For Loop for minimum comparator between two SAD values from the sad array
   g_sadComp8 : FOR i IN 0 TO DISP_ROW-1 GENERATE    -- For each center template pixel/group of SADs
   BEGIN
      g_minComp8 : FOR j IN 0 TO 7 GENERATE -- For the initial 8 comp. of the 16 SAD values
      BEGIN
         i_minComp8 : ENTITY work.minComparator 
				GENERIC MAP
					(SAD_SIZE => SAD_SIZE)
            PORT MAP (
					clk_I => clk_I,
               sad0_I => sad_array(i, j*2),
               pos0_I => STD_LOGIC_VECTOR(TO_UNSIGNED(j*2, 4)),--"00",--std_logic_vector(to_unsigned(0, 2)),
               sad1_I => sad_array(i, (j*2)+1),
               pos1_I => STD_LOGIC_VECTOR(TO_UNSIGNED((j*2)+1, 4)),--"01",--std_logic_vector(to_unsigned(1, 2)),
               sad_O  => minSad(i, j), -- 0 to 7 of minSad
               pos_O  => minPos(i, j)  -- 0 to 7 of minPos
         );
      END GENERATE g_minComp8;
   END GENERATE g_sadComp8;

   -- For Loop for minimum comparator between two SAD values from the sad array
   g_sadComp4 : FOR i IN 0 TO DISP_ROW-1 GENERATE    -- For each center template pixel/group of SADs
   BEGIN
      g_minComp4 : FOR j IN 0 TO 3 GENERATE -- For the 2nd 4 comp. of the 8 SAD remaining values
      BEGIN
         i_minComp4 : ENTITY work.minComparator
				GENERIC MAP
					(SAD_SIZE => SAD_SIZE)
            PORT MAP (
               clk_I => clk_I,
					sad0_I => minSad(i, j*2),
               pos0_I => minPos(i, j*2),
               sad1_I => minSad(i, (j*2)+1),
               pos1_I => minPos(i, (j*2)+1),
               sad_O  => minSad(i, j+8), -- 8 to 11 of minSad
               pos_O  => minPos(i, j+8)  -- 8 to 11 of minPos
         );
      END GENERATE g_minComp4;
   END GENERATE g_sadComp4;

   -- For Loop for minimum comparator between two SAD values from the sad array
   g_sadComp2 : FOR i IN 0 TO DISP_ROW-1 GENERATE    -- For each center template pixel/group of SADs
   BEGIN
      g_minComp2 : FOR j IN 0 TO 1 GENERATE -- For the 2nd 4 comp. of the 8 SAD remaining values
      BEGIN
         i_minComp2 : ENTITY work.minComparator 
				GENERIC MAP
					(SAD_SIZE => SAD_SIZE)
            PORT MAP (
               clk_I => clk_I,
					sad0_I => minSad(i, j*2 + 8),
               pos0_I => minPos(i, j*2 + 8),
               sad1_I => minSad(i, (j*2)+1 + 8),
               pos1_I => minPos(i, (j*2)+1 + 8),
               sad_O  => minSad(i, j+12), -- 12 to 13 of minSad
               pos_O  => minPos(i, j+12)  -- 12 to 13 of minPos
         );
      END GENERATE g_minComp2;
   END GENERATE g_sadComp2;

   -- Minimum Comparator, which compares the min outputs from minComp0 & minComp1
   g_minResult : FOR i IN 0 TO DISP_ROW-1 GENERATE
   BEGIN
      i_minResult : ENTITY work.minComparator 
			GENERIC MAP
					(SAD_SIZE => SAD_SIZE)
         PORT MAP ( 
            clk_I => clk_I,
				sad0_I => minSad(i, 12),
            pos0_I => minPos(i, 12),
            sad1_I => minSad(i, 13),
            pos1_I => minPos(i, 13),
            sad_O  => minSad(i, 14),
            pos_O  => minPos(i, 14)
      );
   END GENERATE g_minResult;
   
   -- Assign disparity values from minPos array to disparity array
   disparity_assign : PROCESS(minPos, ndx_t, ndx_s, disparityArray)
   BEGIN
      disparityArray_next <= disparityArray;

      IF (ndx_t = LAST_ROW AND ndx_s = LAST_ROW) THEN -- both arrays are full and ready for new data
         FOR i IN 0 TO DISP_ROW-1 LOOP --- To pipeline, could have this hold until ready, to give enough time for comp to read all disp values
            disparityArray_next(i) <= minPos(i, 14);
         END LOOP;
      END IF;
   END PROCESS disparity_assign;
   
   templ_O  <= template_array(f2h_t_rd);
   search_O <= search_array(f2h_s_rd);
   sad_O    <= sad_array(ndx_sad, f2h_sad_rd)(7 DOWNTO 0);
   disp_O   <= x"0" & disparityArray(f2h_disp_rd); --sad_array(f2h_sad_rd);
   
   WITH sw_I SELECT led_O <=
		-- STD_LOGIC_VECTOR(TO_UNSIGNED(f2h_sad_rd, 8)) WHEN x"00", --h2fValid_I & chanAddr_I(6 DOWNTO 0) WHEN x"00",
      sad_array(0, 0)(7 DOWNTO 0)  WHEN x"01",
      sad_array(0, 1)(7 DOWNTO 0)  WHEN x"02",
      sad_array(0, 2)(7 DOWNTO 0)  WHEN x"04",
      x"0" & disparityArray(0)  WHEN x"08",
--      x"0" & disparityArray(1)  WHEN x"10",
      template_array(0)  WHEN x"20",
--      template_array(1)  WHEN x"40",
      search_array(0)  WHEN x"80",
      x"fe"         WHEN OTHERS;

end Behavioral;
