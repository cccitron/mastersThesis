----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:04:37 05/04/2014 
-- Design Name: 
-- Module Name:    bram_right_single - Behavioral 
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
 
--entity bram_right_single is
--generic (
--    DATA    : integer := 8;
--    ADDR    : integer := 6
--);
--port (
--    -- Port A
--    a_clk   : in  std_logic;
--    a_wr    : in  std_logic;
--    a_addr  : in  std_logic_vector(ADDR-1 downto 0);
--    a_din   : in  std_logic_vector(DATA-1 downto 0);
--    a_dout  : out std_logic_vector(DATA-1 downto 0)--;
--     
----    -- Port B
----    b_clk   : in  std_logic;
----    b_wr    : in  std_logic;
----    b_addr  : in  std_logic_vector(ADDR-1 downto 0);
----    b_din   : in  std_logic_vector(DATA-1 downto 0);
----    b_dout  : out std_logic_vector(DATA-1 downto 0)
--);
--end bram_right_single;
-- 
--architecture behavioural of bram_right_single is
--    -- Shared memory
--    type mem_type is array ( 0 to (2**ADDR)-1 ) of std_logic_vector(DATA-1 downto 0);
--    signal mem : mem_type := (x"02", x"05", x"05", x"03", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff",
--                              x"04", x"00", x"07", x"01", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff",
--                              x"07", x"05", x"09", x"06", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff",
--                              x"ff", x"ff", x"ff", x"ff", x"ff", x"ff", x"ff");
--begin
--
---- Port A
--process(a_clk)
--begin
--    if(a_clk'event and a_clk='1') then
--        if(a_wr='1') then
--            mem(TO_INTEGER(UNSIGNED(a_addr))) <= a_din;
--        end if;
--        a_dout <= mem(TO_INTEGER(UNSIGNED(a_addr))); --conv_integer(a_addr));
--    end if;
--end process;
-- 
------ Port B
----process(b_clk)
----begin
----    if(b_clk'event and b_clk='1') then
----        if(b_wr='1') then
----            mem(conv_integer(b_addr)) := b_din;
----        end if;
----        b_dout <= mem(conv_integer(b_addr));
----    end if;
----end process;
-- 
--end behavioural;

entity bram_right_single is
port (Clk : in std_logic;
        address : in integer;
        we : in std_logic;
        data_i : in std_logic_vector(7 downto 0);
        data_o : out std_logic_vector(7 downto 0)
     );
end bram_right_single;

architecture Behavioral of bram_right_single is

--Declaration of type and signal of a 256 element RAM
--with each element being 8 bit wide.
type ram_t is array (0 to 255) of std_logic_vector(7 downto 0);
signal ram : ram_t := (others => (others => '0'));

begin

--process for read and write operation.
PROCESS(Clk)
BEGIN
    if(rising_edge(Clk)) then
        if(we='1') then
            ram(address) <= data_i;
        end if;
        data_o <= ram(address);
    end if; 
END PROCESS;

end Behavioral;

