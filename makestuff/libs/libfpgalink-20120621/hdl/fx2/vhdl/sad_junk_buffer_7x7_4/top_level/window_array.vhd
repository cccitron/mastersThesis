--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
USE ieee.numeric_std.ALL;

package window_array is

--	TYPE pixelWindow IS ARRAY(0 TO 8) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
--	TYPE pixel2DArray IS ARRAY(0 TO 9, 0 TO 15) OF pixelWindow;
	TYPE pixelWindow IS ARRAY(0 TO 48) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
	TYPE pixel2DArray IS ARRAY(0 TO 5, 0 TO 15) OF pixelWindow;
	
--	TYPE signedWindow IS ARRAY(0 TO 8) OF SIGNED(10 DOWNTO 0);
--	TYPE signPixelWindow IS ARRAY(0 TO 8) OF STD_LOGIC_VECTOR(8 DOWNTO 0);
--	TYPE signedWindow IS ARRAY(0 TO 79) OF SIGNED(10 DOWNTO 0);
	
-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--
-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--

end window_array;

package body window_array is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end window_array;
