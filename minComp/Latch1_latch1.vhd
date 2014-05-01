----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:30:30 04/23/2014 
-- Design Name: 
-- Module Name:    Latch1_latch1 - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

LIBRARY ieee ;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
 
ENTITY latch1 IS
   PORT(
      clk     : IN     std_logic  ;
      dat_in1 : IN     std_logic_vector (7 DOWNTO 0) ;
      en      : IN     std_logic  ;
      dbus6   : OUT    std_logic_vector (7 DOWNTO 0)
   );
 
-- Declarations
 
END latch1 ;
 
-- renoir interface_end
ARCHITECTURE latch1 OF latch1 IS
BEGIN
            process (clk,en)
            BEGIN
                        if (clk='1' AND clk'event) then
                                    if (en='1') then
                                    dbus6 <= dat_in1;
                                    end if;
                        end if;
            end process;
END latch1;

