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
		
		sad_O      : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		
		bram_t_O   : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		bram_s_O   : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		
		sw_I  : IN  STD_LOGIC_VECTOR(7 DOWNTO 0);
		led_O : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
	);
end state_wrapper;

architecture Behavioral of state_wrapper is
	
	-- pipeline adder stuff
	SIGNAL dinA_template, dinA_template_next : pixelWindow := (OTHERS => (OTHERS => '0')); --STD_LOGIC_VECTOR(7 DOWNTO 0);
	SIGNAL dinB_search, dinB_search_next : pixelWindow := (OTHERS => (OTHERS => '0'));
	SIGNAL sad_out : STD_LOGIC_VECTOR(7 DOWNTO 0);
	
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
	
	SIGNAL en_t, en_s : STD_LOGIC := '0';
	SIGNAL t_rd, t_rd_next : STD_LOGIC := '0';
	SIGNAL s_rd, s_rd_next : STD_LOGIC := '0';
	SIGNAL ready_t, ready_t_next : STD_LOGIC := '0';
	SIGNAL ready_s, ready_s_next : STD_LOGIC := '0';
	SIGNAL read_bram, read_bram_next : STD_LOGIC := '0';
	
	SIGNAL we_t, we_s : STD_LOGIC_VECTOR(0 DOWNTO 0) := "0";
	SIGNAL addr_t, addr_t_next : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	SIGNAL addr_s, addr_s_next : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	SIGNAL dina, dout_t, dout_s : STD_LOGIC_VECTOR(7 DOWNTO 0);
	
	-- State machine stuff
	--TYPE state_type IS (s0, s1, s2, s3); 
	--SIGNAL curr_s, next_s : state_type := s0;
	SIGNAL ndx_t_wr, ndx_t_wr_next : INTEGER := 0;
	SIGNAL ndx_t_rd, ndx_t_rd_next : INTEGER := 0;
	SIGNAL ndx_s_wr, ndx_s_wr_next : INTEGER := 0;
	SIGNAL ndx_s_rd, ndx_s_rd_next : INTEGER := 0;
	
	-- Other SAD things
	SIGNAL reg0_templ : STD_LOGIC_VECTOR(7 DOWNTO 0);

begin
	
	en_t <= '1';
	en_s <= '1';
	
	multiplex_out : process (clk_I) is
	begin
		if (RISING_EDGE(clk_I)) then
--			case sw_i is
--				when x"00" =>
--					led_O <= dout_t; --dout_rom8x8;
--				when x"01" =>
--					led_O <= dout_s;
--				when others => 
--					led_O <= x"ff";
--			end case;
			--addra <= std_logic_vector(unsigned(addra) + 1);
			--dina <= std_logic_vector( unsigned(dina) + 1);
			--wea <=  std_logic_vector( unsigned(wea) + 1);
			
			t_rd <= t_rd_next;
			s_rd <= s_rd_next;
			read_bram <= read_bram_next;
--			IF (ready_t = '0' OR ready_s = '0') THEN
--				read_bram <= '0';
--			ELSE
--				read_bram <= read_bram_next;
--			END IF;
			
			dinA_template <= dinA_template;
			dinB_search <= dinB_search;
			
			IF (read_bram = '1') THEN -- AND ready_t = '1' AND ready_s = '1') THEN --t_rd = '1' AND s_rd = '1') THEN
				dinA_template(ndx_t_rd) <= dout_t;
				dinB_search(ndx_s_rd) <= dout_s;
				
				IF (ndx_t_rd = 8) THEN
					ndx_t_rd <= 0;
					t_rd <= NOT(t_rd_next);
--					read_bram <= '0';
				ELSE
					ndx_t_rd <= ndx_t_rd + 1;
				END IF;
				
				IF (ndx_s_rd = 8) THEN
					ndx_s_rd <= 0;
					s_rd <= NOT(s_rd_next);
--					read_bram <= '0';
				ELSE
					ndx_s_rd <= ndx_s_rd + 1;
				END IF;
			END IF;
			
			-- Template Stuff
			ndx_t_wr <= ndx_t_wr_next;
			IF (ndx_t_wr = 9) THEN
				ndx_t_wr <= 0;
			END IF;
			
			IF (addr_t_next = x"9") THEN
				addr_t <= x"0";
--				t_rd <= NOT(t_rd_next);
				IF (t_rd = '1') THEN
					ready_t <= '0'; --NOT(ready_t_next);
				ELSE
					ready_t <= '1'; --NOT(ready_t_next);
				END IF;
--				ready_t <= NOT(ready_t_next);
			ELSE
--				t_rd <= t_rd_next;
				ready_t <= ready_t_next;
				addr_t <= addr_t_next;
			END IF;
			
			-- Search Stuff
			ndx_s_wr <= ndx_s_wr_next;
			IF (ndx_s_wr = 9) THEN
				ndx_s_wr <= 0;
			END IF;
			
			IF (addr_s_next = x"9") THEN
				addr_s <= x"0";
--				ready_s <= NOT(ready_s_next);
				IF (s_rd = '1') THEN
					ready_s <= '0'; --NOT(ready_t_next);
				ELSE
					ready_s <= '1'; --NOT(ready_t_next);
				END IF;
--				s_rd <= NOT(s_rd_next);
			ELSE
--				s_rd <= s_rd_next;
				ready_s <= ready_s_next;
				addr_s <= addr_s_next;
			END IF;
			
		end if;
	end process;

--	bram_dina <= "00" & sw_i(5 downto 0);
	dina <= h2fData_I;

	t_rd_next <= '1' WHEN ready_t = '1' ELSE t_rd;
	s_rd_next <= '1' WHEN ready_s = '1' ELSE s_rd;
	
	read_bram_next <= '1' WHEN t_rd = '1' AND s_rd = '1' ELSE '0';

	-- Template BRAM process for reading and writing
	template_bram : process (h2fValid_I, chanAddr_I, addr_t, ndx_t_wr, ready_t, t_rd, s_rd, f2hReady_I)
	begin
		ready_t_next <= ready_t;
		IF (h2fValid_I = '1' AND chanAddr_I = "0000000") THEN
			we_t <= "1";
			addr_t_next <= STD_LOGIC_VECTOR(UNSIGNED(addr_t) + 1);
			ndx_t_wr_next <= ndx_t_wr + 1;
		ELSIF (t_rd = '1' AND s_rd = '1') THEN
			we_t <= "0";
			addr_t_next <= STD_LOGIC_VECTOR(UNSIGNED(addr_t) + 1);
		ELSIF (f2hReady_I = '1' AND chanAddr_I = "0000100") THEN
			we_t <= "0";
			addr_t_next <= STD_LOGIC_VECTOR(UNSIGNED(addr_t) + 1);
		ELSE
			we_t <= "0";
			addr_t_next <= addr_t;
			ndx_t_wr_next <= ndx_t_wr;
		END IF;
	end process template_bram;

	-- Search BRAM process for reading and writing
	search_bram : process (h2fValid_I, chanAddr_I, addr_s, ndx_s_wr, ready_s, s_rd, t_rd)
	begin
		ready_s_next <= ready_s;
		IF (h2fValid_I = '1' AND chanAddr_I = "0000001") THEN
			we_s <= "1";
			addr_s_next <= STD_LOGIC_VECTOR(UNSIGNED(addr_s) + 1);
			ndx_s_wr_next <= ndx_s_wr + 1;
		ELSIF (s_rd = '1' AND t_rd = '1') THEN
			we_s <= "0";
			addr_s_next <= STD_LOGIC_VECTOR(UNSIGNED(addr_s) + 1);
		ELSE
			we_s <= "0";
			addr_s_next <= addr_s;
			ndx_s_wr_next <= ndx_s_wr;
		END IF;
	end process search_bram;
	
	-- BRAM template entity
	bram_template : bram_9x8
	PORT MAP (
		clka => clk_I,
		ena => en_t,
		wea => we_t,
		addra => addr_t,
		dina => dina,
		douta => dout_t
	);
	
	bram_t_O <= dout_t;
	
	-- BRAM search entity
	bram_search : bram_9x8
	PORT MAP (
		clka => clk_I,
		ena => en_s,
		wea => we_s,
		addra => addr_s,
		dina => dina,
		douta => dout_s
	);
	
	bram_s_O <= dout_s;
	
	-- Pipelined SAD algorihtm
	sadder : entity work.adder
		Port map ( 
			clk_I  => clk_I,
			dinA_I => dina_template,
			dinB_I => dinb_search,
			data_O => sad_out
		);
		
	sad_O <= sad_out;
		
	WITH sw_I SELECT led_O <=
		dinA_template(0)	WHEN x"00",
		dinA_template(1)	WHEN x"01",
		dinA_template(2)	WHEN x"02",
		dinA_template(3)	WHEN x"03",
		dinA_template(4)	WHEN x"04",
		dinA_template(5)	WHEN x"05",
		dinA_template(6)	WHEN x"06",
		dinA_template(7)	WHEN x"07",
		dinA_template(8)	WHEN x"08",
		dinB_search(0) 	WHEN x"10",
		dinB_search(1) 	WHEN x"11",
		dinB_search(2)		WHEN x"12",
		dinB_search(3)		WHEN x"13",
		dinB_search(4)		WHEN x"14",
		dinB_search(5)		WHEN x"15",
		dinB_search(6)		WHEN x"16",
		dinB_search(7)		WHEN x"17",
		dinB_search(8)		WHEN x"18",
		sad_out			 	WHEN x"20",
		x"ff"					WHEN OTHERS;

end Behavioral;

