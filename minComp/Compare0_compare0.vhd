----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:32:03 04/23/2014 
-- Design Name: 
-- Module Name:    Compare0_compare0 - Behavioral 
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
LIBRARY ieee ;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
 
ENTITY Compare0 IS
   PORT(
      dbus4  : IN     std_logic_vector (7 DOWNTO 0) ;
      dbus6  : IN     std_logic_vector (7 DOWNTO 0) ;
      dbus12 : OUT    std_logic_vector (7 DOWNTO 0) ;
      dbus13 : OUT    std_logic_vector (1 DOWNTO 0)
   );
 
-- Declarations
 
END Compare0 ;
 
-- renoir interface_end
ARCHITECTURE compare0 OF Compare0 IS
BEGIN
process (dbus6,dbus4)
begin
            IF (dbus6 < dbus4) THEN
                        dbus12 <= dbus6;
                        dbus13 <= "01";
            else
                        dbus12 <= dbus4;
                        dbus13 <= "00";
            end if;
end process;
END compare0;

