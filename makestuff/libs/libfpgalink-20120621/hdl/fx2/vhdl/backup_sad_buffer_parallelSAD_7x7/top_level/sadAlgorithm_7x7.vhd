----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:20:30 06/23/2014 
-- Design Name: 
-- Module Name:    sadAlgorithm_3x3 - Behavioral 
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
-- arithmetic functions with Signed or TO_UNSIGNED values
use IEEE.NUMERIC_STD.ALL;

USE work.window_array.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sadAlgorithm_7x7 is
	Generic (
		SAD_SIZE : INTEGER := 12
	);
   Port (
		clk_I : IN STD_LOGIC;
		
		data_I				: IN STD_LOGIC;
		template_window_I : IN pixelWindow;
		search_window_I   : IN pixelWindow;
      
		data_O				: OUT STD_LOGIC;
      sad_O : OUT STD_LOGIC_VECTOR (SAD_SIZE-1 DOWNTO 0)
   );
end sadAlgorithm_7x7;

architecture Behavioral of sadAlgorithm_7x7 is

	SIGNAL template_window, search_window : pixelWindow;
	   
	COMPONENT adder_10
		PORT (
			a : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
			b : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
			s : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
		);
	END COMPONENT;
	
	SIGNAL a, b : pixelWindow := (OTHERS => (OTHERS => '0'));
	
	-- sad sub signal
	SIGNAL sad_sum : STD_LOGIC_VECTOR(13 DOWNTO 0) := "00000000000000";
		
   TYPE array_type_subtract IS ARRAY(0 TO 6) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
   SIGNAL more, less, sub : array_type_subtract := (OTHERS => (OTHERS => '0'));
   
	SIGNAL ndx, pos : INTEGER := 0;
	SIGNAL nxt, data_in, data_out : STD_LOGIC := '0';
	
	-- State Diagram Stuff
   TYPE state_type IS (S0, S1, S2, S3);
   SIGNAL present_state, next_state : state_type := S0;
	
	SIGNAL counter : INTEGER := 0;
	
begin
   
	template_window <= template_window_I;
	search_window <= search_window_I;
	data_in <= data_I;
	
	data_O <= data_out;

	-- The State Machine
	state_machine : PROCESS(clk_I)
	BEGIN
		IF (RISING_EDGE(clk_I)) THEN
			CASE present_state IS
				
			-- STATE: the initialization cycle ---------------------------------------
				WHEN S0 =>
					counter <= 0;
					sad_sum <= x"000" & "00";
					data_out <= '0';
					ndx <= 0;

					present_state <= S1;
			--------------------------------------------------------------------------
			
			-- STATE: wait for input data --------------------------------------------
				WHEN S1 =>
					counter <= 0;
					sad_sum <= sad_sum;
					data_out <= data_out;
					ndx <= 0;

					IF (data_in = '1') THEN
						present_state <= S2;
					ELSE
						present_state <= S1;
					END IF;
			--------------------------------------------------------------------------
			
			-- STATE: begin subracting corresponding values, wait for output values --
				WHEN S2 =>
					counter <= counter + 1;
					sad_sum <= x"000" & "00"; 
					data_out <= '0';
					
					ndx <= ndx + 1;
					
					present_state <= S3;
			
			--------------------------------------------------------------------------
			
			-- STATE: wait for the sum of the absolute differences to be summed up ---
				WHEN S3 =>
					counter <= counter + 1;
					sad_sum <= STD_LOGIC_VECTOR(UNSIGNED(sad_sum) + 
                  ("000000" & UNSIGNED(sub(0))) + ("000000" & UNSIGNED(sub(1))) + ("000000" & UNSIGNED(sub(2))) + 
                  ("000000" & UNSIGNED(sub(3))) + ("000000" & UNSIGNED(sub(4))) + ("000000" & UNSIGNED(sub(5))) + 
                  ("000000" & UNSIGNED(sub(6))));
					ndx <= ndx + 1;

					IF (counter < 7) THEN
						data_out <= '0';
						present_state <= S3;
					ELSE
						data_out <= '1';
						present_state <= S1;
					END IF;
			--------------------------------------------------------------------------
			
			-- STATE: Go back to S1 --------------------------------------------------
				WHEN OTHERS =>
					counter <= 0;
					sad_sum <= x"000" & "00";
					ndx <= 0;
					
					present_state <= S1;
			--------------------------------------------------------------------------		
			END CASE;
			
			-- Assign greater value to more and smaller to less
			-- Loop is unrolled in hardware, 7 assignments occur simultaneously
         FOR i IN 0 TO 6 LOOP
            IF (search_window(ndx + (7*i)) < template_window(ndx + (7*i))) THEN 
               more(i) <= template_window(ndx + (7*i));
               less(i) <= search_window(ndx + (7*i));
            ELSE
               less(i) <= template_window(ndx + (7*i));
               more(i) <= search_window(ndx + (7*i));
            END IF;
			END LOOP;
         
			IF (ndx = 6) THEN
				ndx <= 0;
			END IF;

		END IF;
	END PROCESS state_machine;

	-- Subtraction IP CORE, sub(i) = more(i) - less(i)
	g_differ_10 : FOR i IN 0 TO 6 GENERATE
		i_subber : adder_10 -- subtr_core
			PORT MAP (
				a => more(i),
				b => less(i),
				s => sub(i)
			);
	END GENERATE g_differ_10;
	
	-- Assigns the values from summer array to sad array
   sad_assign : PROCESS(sad_sum)
   BEGIN
      IF (UNSIGNED(sad_sum) < 4096) THEN
         sad_O <= sad_sum(11 DOWNTO 0);
      ELSE
         sad_O <= x"fff";
      END IF;
   END PROCESS sad_assign;
	
end Behavioral;
