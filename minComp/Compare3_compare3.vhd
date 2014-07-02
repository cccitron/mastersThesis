----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:33:03 04/23/2014 
-- Design Name: 
-- Module Name:    Compare3_compare3 - Behavioral 
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
 
ENTITY Compare3 IS
   PORT(
      dbus12      : IN     std_logic_vector (7 DOWNTO 0) ;
      dbus13      : IN     std_logic_vector (1 DOWNTO 0) ;
      dbus14      : IN     std_logic_vector (7 DOWNTO 0) ;
      dbus15      : IN     std_logic_vector (1 DOWNTO 0) ;
      dat_out     : OUT    std_logic_vector (7 DOWNTO 0) ;
      dat_out_pos : OUT    std_logic_vector (1 DOWNTO 0)
   );
 
-- Declarations
 
END Compare3 ;
 
-- renoir interface_end
ARCHITECTURE Compare3 OF Compare3 IS
BEGIN
process (dbus14,dbus12,dbus15,dbus13)
begin
            if (dbus14 < dbus12) then
                        dat_out <= dbus14;
                        dat_out_pos <= dbus15;
            else
                        dat_out <= dbus12;
                        dat_out_pos <= dbus13;
            end if;
end process;
END Compare3;

