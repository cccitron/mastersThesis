----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:37:07 04/20/2014 
-- Design Name: 
-- Module Name:    absDiff - Behavioral 
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

entity absDiff is
    Port ( CLK_I : in  STD_LOGIC;
--           A : in  STD_LOGIC_VECTOR(7 downto 0);
--           B : in  STD_LOGIC_VECTOR(7 downto 0);
--           Y : out  STD_LOGIC_VECTOR(7 downto 0);
           led_out : out std_logic_vector(7 downto 0);
           sw_in   : in std_logic_vector(7 downto 0)
    );
end absDiff;

architecture Behavioral of absDiff is

   signal search3x3   : std_logic_vector (71 downto 0);
   
   signal t_tl_s : signed(8 downto 0);
   signal t_tc_s : signed(8 downto 0);
   signal t_tr_s : signed(8 downto 0);
   signal t_cl_s : signed(8 downto 0);
   signal t_cc_s : signed(8 downto 0);
   signal t_cr_s : signed(8 downto 0);
   signal t_bl_s : signed(8 downto 0);
   signal t_bc_s : signed(8 downto 0);
   signal t_br_s : signed(8 downto 0);

   signal s_tl_s : signed(8 downto 0);
   signal s_tc_s : signed(8 downto 0);
   signal s_tr_s : signed(8 downto 0);
   signal s_cl_s : signed(8 downto 0);
   signal s_cc_s : signed(8 downto 0);
   signal s_cr_s : signed(8 downto 0);
   signal s_bl_s : signed(8 downto 0);
   signal s_bc_s : signed(8 downto 0);
   signal s_br_s : signed(8 downto 0);
   
   signal sad_tl_s : signed(8 downto 0);
   signal sad_tc_s : signed(8 downto 0);
   signal sad_tr_s : signed(8 downto 0);
   signal sad_cl_s : signed(8 downto 0);
   signal sad_cc_s : signed(8 downto 0);
   signal sad_cr_s : signed(8 downto 0);
   signal sad_bl_s : signed(8 downto 0);
   signal sad_bc_s : signed(8 downto 0);
   signal sad_br_s : signed(8 downto 0);
   
--   signal A  : std_logic_vector(7 downto 0) := x"0f";
--	signal As : signed(8 downto 0);
--	signal Bs : signed(8 downto 0);
--	signal Ys : signed(8 downto 0);

   signal template3x3 : std_logic_vector(71 downto 0) := x"020505040007070509";
   signal img3x3_0 : std_logic_vector(71 downto 0) := x"020705010704080406";
   signal img3x3_1 : std_logic_vector(71 downto 0) := x"070508070402040608";
   signal img3x3_2 : std_logic_vector(71 downto 0) := x"050806040207060805";
   signal zeros    : std_logic_vector(71 downto 0) := x"000000000000000000";

begin

--	As <= signed ('0' & A);
--	Bs <= signed ('0' & sw_in);
--	Ys <= abs(As - Bs);
--	led_out <= std_logic_vector(Ys(7 downto 0));

   with sw_in select search3x3 <=
      img3x3_0    when x"00",
      img3x3_1    when x"01",
      img3x3_2    when x"02",
      zeros       when others;

   -- top left pixel
   t_tl_s   <= signed ('0' & template3x3(71 downto 64));
	s_tl_s   <= signed ('0' & search3x3(71 downto 64));
	sad_tl_s <= abs(t_tl_s - s_tl_s);
   
   -- top center pixel
   t_tc_s   <= signed ('0' & template3x3(63 downto 56));
	s_tc_s   <= signed ('0' & search3x3(63 downto 56));
	sad_tc_s <= abs(t_tc_s - s_tc_s);
   
   -- top right pixel
   t_tr_s   <= signed ('0' & template3x3(55 downto 48));
	s_tr_s   <= signed ('0' & search3x3(55 downto 48));
	sad_tr_s <= abs(t_tr_s - s_tr_s);
   
   -- center left pixel
   t_cl_s   <= signed ('0' & template3x3(47 downto 40));
	s_cl_s   <= signed ('0' & search3x3(47 downto 40));
	sad_cl_s <= abs(t_cl_s - s_cl_s);
   
   -- center center pixel
   t_cc_s   <= signed ('0' & template3x3(39 downto 32));
	s_cc_s   <= signed ('0' & search3x3(39 downto 32));
	sad_cc_s <= abs(t_cc_s - s_cc_s);
   
   -- center right pixel
   t_cr_s   <= signed ('0' & template3x3(31 downto 24));
	s_cr_s   <= signed ('0' & search3x3(31 downto 24));
	sad_cr_s <= abs(t_cr_s - s_cr_s);
   
   -- bottom left pixel
   t_bl_s   <= signed ('0' & template3x3(23 downto 16));
	s_bl_s   <= signed ('0' & search3x3(23 downto 16));
	sad_bl_s <= abs(t_bl_s - s_bl_s);
   
   -- bottom center pixel
   t_bc_s   <= signed ('0' & template3x3(15 downto 8));
	s_bc_s   <= signed ('0' & search3x3(15 downto 8));
	sad_bc_s <= abs(t_bc_s - s_bc_s);
   
   -- bottom right pixel
   t_br_s   <= signed ('0' & template3x3(7 downto 0));
	s_br_s   <= signed ('0' & search3x3(7 downto 0));
	sad_br_s <= abs(t_br_s - s_br_s);
   
   led_out <= std_logic_vector(sad_tl_s(7 downto 0) + -- to_unsigned()
                               sad_tc_s(7 downto 0) +
                               sad_tr_s(7 downto 0) +
                               sad_cl_s(7 downto 0) +
                               sad_cc_s(7 downto 0) +
                               sad_cr_s(7 downto 0) +
                               sad_bl_s(7 downto 0) +
                               sad_bc_s(7 downto 0) +
                               sad_br_s(7 downto 0));


end Behavioral;

