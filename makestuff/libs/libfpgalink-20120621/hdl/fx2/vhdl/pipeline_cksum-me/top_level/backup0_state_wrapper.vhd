----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:50:07 07/03/2014 
-- Design Name: 
-- Module Name:    state_wrapper - Behavioral 
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

entity state_wrapper is
	Port ( 
		clk_I : in  STD_LOGIC;
		
		h2fData_I  : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
		
		chanAddr_I : IN  STD_LOGIC_VECTOR(6 DOWNTO 0);
      f2hReady_I : IN  STD_LOGIC;
      h2fValid_I : IN  STD_LOGIC;
		
		sw_I  : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
		led_O : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
	);
end state_wrapper;

architecture Behavioral of state_wrapper is
	
	-- pipeline adder stuff
	SIGNAL dinA_template, dinB_search : pixelWindow := (OTHERS => (OTHERS => '0')); --STD_LOGIC_VECTOR(7 DOWNTO 0);
	SIGNAL dout : STD_LOGIC_VECTOR(7 DOWNTO 0);
	
	-- bram stuff
	COMPONENT bram_9x8
		PORT (
			clka : IN STD_LOGIC;
			ena : IN STD_LOGIC;
			wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
			addra : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
			dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
			douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
		);
	END COMPONENT;
	
	SIGNAL ena, ena_next : STD_LOGIC := '0';
	SIGNAL bram_rd, bram_rd_next : STD_LOGIC := '0';
	SIGNAL we_t, we_s : STD_LOGIC_VECTOR(0 DOWNTO 0) := "0";
	SIGNAL addr_t, addr_t_next : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	SIGNAL addr_s, addr_s_next : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	SIGNAL dina, douta : STD_LOGIC_VECTOR(7 DOWNTO 0);
	
	-- State machine stuff
	TYPE state_type IS (s0, s1, s2, s3); 
	SIGNAL curr_s, next_s : state_type := s0;
	SIGNAL ndx_t_wr, ndx_t_wr_next : INTEGER := 0;
	
	-- Other SAD things
	SIGNAL reg0_templ : STD_LOGIC_VECTOR(7 DOWNTO 0);

begin
	
	-- state change
--	PROCESS (clk_I)
--	BEGIN
--		IF (RISING_EDGE(clk_I)) THEN
--			curr_s <= next_s;
--
--			addra <= addra_next;
--			IF (addra = x"9") THEN
--				addra <= x"0";
--			END IF;
--			
--			ndx_t_wr <= ndx_t_wr_next;
----			IF (ndx_t_wr = 9) THEN
----				ndx_t_wrT <= 0;
----			END IF;
--		END IF;
--	END PROCESS;
--	
--	-- state machine process
--	state_machine_process : PROCESS (curr_s, h2fValid_I, chanAddr_I, addra, ndx_t_wr, douta)
--	BEGIN
--		addra_next <= addra;
--		dina <= x"ff";
--		ndx_t_wr_next <= ndx_t_wr;
--	
--		CASE curr_s IS
--			-- place bytes into state machine for template
--			WHEN s0 =>
--				IF (h2fValid_I = '1' AND chanAddr_I = "0000000") THEN
--					wea <= "1";
--					addra_next <= STD_LOGIC_VECTOR(UNSIGNED(addra) + 1);
--					dina <= h2fData_I;
--					ndx_t_wr_next <= ndx_t_wr + 1;
--				ELSE
--					wea <= "0";
--				END IF;
--				
--				IF (ndx_t_wr = 9) THEN
--					next_s <= s1;
--					ndx_t_wr_next <= 0;
--				ELSE
--					next_s <= curr_s;
--				END IF;
--				
--			WHEN s1 => 
--				wea <= "0";
--				reg0_templ <= douta;
--				dinA_template(ndx_t_wr) <= douta;
--				ndx_t_wr_next <= ndx_t_wr + 1;
--				
--				IF (ndx_t_wr = 9) THEN
--					next_s <= s2;
--					ndx_t_wr_next <= 0;
--				ELSE
--					next_s <= curr_s;
--				END IF;
--				
--			WHEN s2 => 
--				wea <= "0";
--				next_s <= s3;
--				
--			WHEN s3 => 
--				wea <= "0";
--				next_s <= s0;
--				
--		END CASE;
--	END PROCESS state_machine_process;
	
	ena <= '1';
	
	multiplex_out : process (clk_I) is
	begin
		if (RISING_EDGE(clk_I)) then
			case sw_i is
				when x"00" =>
					led_O <= douta; --dout_rom8x8;
				when x"01" =>
					led_O <= x"f5";
				when others => 
					led_O <= x"ff";
			end case;
			--addra <= std_logic_vector(unsigned(addra) + 1);
			--dina <= std_logic_vector( unsigned(dina) + 1);
			--wea <=  std_logic_vector( unsigned(wea) + 1);
			ndx_t_wr <= ndx_t_wr_next;
			IF (ndx_t_wr = 9) THEN
				ndx_t_wr <= 0;
			END IF;
			
			IF (addra_next = x"9") THEN
				addra <= x"0";
				bram_rd <= NOT(bram_rd_next);
			ELSE
				bram_rd <= bram_rd_next;
				addra <= addra_next;
			END IF;
		end if;
	end process;

--	bram_dina <= "00" & sw_i(5 downto 0);
	dina <= h2fData_I;

	-- Enable writing to bram when switch(1) is high
	write_to_template_bram : process (h2fValid_I, chanAddr_I, addra, ndx_t_wr)
	begin
		IF (h2fValid_I = '1' AND chanAddr_I = "0000000") THEN
			wea <= "1";
			addra_next <= STD_LOGIC_VECTOR(UNSIGNED(addra) + 1);
			ndx_t_wr_next <= ndx_t_wr + 1;
			bram_rd_next <= bram_rd;
		ELSIF (bram_rd = '1') THEN
			wea <= "0";
			addra_next <= STD_LOGIC_VECTOR(UNSIGNED(addra) + 1);
			bram_rd_next <= bram_rd;
		ELSE
			wea <= "0";
			addra_next <= addra;
			ndx_t_wr_next <= ndx_t_wr;
			bram_rd_next <= bram_rd;
		END IF;
	end process write_to_template_bram;
	
	-- When reading is enabled
--	read_from_template_bram : PROCESS (ena)
--	BEGIN
--		IF (ena = '1') THEN
--			
--		END IF;
--	END PROCESS read_from_template_bram;

	-- Increase bram addr position when btn(1) (top button) is pressed
	-- Decrease bram addr position when btn(3) (bottom button) is pressed
--	process (btn)
--	begin
--		if (btn(1) = '1') then
--			bram_addr <= std_logic_vector(unsigned(bram_addr) + 1);
--		elsif (btn(3) = '1') then
--			bram_addr <= std_logic_vector(unsigned(bram_addr) - 1);
--		elsif (btn(5) = '1') then
--			bram_addr <= "000000";
--		else
--			bram_addr <= bram_addr;
--		end if;
--	end process;
	
	
	
	bram_template : bram_9x8
	PORT MAP (
		clka => clk_I,
		ena => ena,
		wea => wea,
		addra => addra,
		dina => dina,
		douta => douta
	);
	
	bram_search : bram_9x8
	PORT MAP (
		clka => clk_I,
		ena => ena,
		wea => wea,
		addra => addra,
		dina => dina,
		douta => douta
	);
	
	adding : entity work.adder
		Port map ( 
			clk_I  => clk_I,
			dinA_I => dina_template,
			dinB_I => dinb_search,
			data_O => dout
		);
		
--	WITH sw_I SELECT led_O <=
--		dinA_template(0)	WHEN x"00",
--		dinA_template(1)	WHEN x"01",
--		dinA_template(2)	WHEN x"02",
--		dinA_template(3)	WHEN x"03",
--		dinA_template(4)	WHEN x"04",
--		dinA_template(5)	WHEN x"05",
--		dinA_template(6)	WHEN x"06",
--		dinA_template(7)	WHEN x"07",
--		dinA_template(8)	WHEN x"08",
--		x"ff"					WHEN OTHERS;

end Behavioral;

