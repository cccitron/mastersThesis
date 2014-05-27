----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:16:59 05/27/2014 
-- Design Name: 
-- Module Name:    vhdl_wrapper_for_verilog - Behavioral 
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

entity vhdl_wrapper_for_verilog is
   PORT (
      DDR2CLK_P : OUT STD_LOGIC;
      DDR2CLK_N : OUT STD_LOGIC;
      DDR2CKE   : OUT STD_LOGIC;
      DDR2RASN  : OUT STD_LOGIC;
      DDR2CASN  : OUT STD_LOGIC;
      DDR2WEN   : OUT STD_LOGIC;
      DDR2RZQ   : INOUT STD_LOGIC;
      DDR2ZIO   : INOUT STD_LOGIC;
      DDR2BA    : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);

      DDR2A  : OUT STD_LOGIC_VECTOR(12 DOWNTO 0);
      DDR2DQ : INOUT STD_LOGIC_VECTOR(15 DOWNTO 0);

      DDR2UDQS_P : INOUT STD_LOGIC;
      DDR2UDQS_N : INOUT STD_LOGIC;
      DDR2LDQS_P : INOUT STD_LOGIC;
      DDR2LDQS_N : INOUT STD_LOGIC;
      DDR2LDM    : OUT STD_LOGIC;
      DDR2UDM    : OUT STD_LOGIC;
      DDR2ODT    : OUT STD_LOGIC;

      clk : IN STD_LOGIC; -- 100 MHz oscillator = 10ns period (top level pin)
      leds : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
   );
end vhdl_wrapper_for_verilog;

architecture Behavioral of vhdl_wrapper_for_verilog is
   
   -- ddr test code in verilog for DDR RAM
   COMPONENT atlys_ddr_test IS
      PORT (
         DDR2CLK_P : OUT STD_LOGIC;
         DDR2CLK_N : OUT STD_LOGIC;
         DDR2CKE   : OUT STD_LOGIC;
         DDR2RASN  : OUT STD_LOGIC;
         DDR2CASN  : OUT STD_LOGIC;
         DDR2WEN   : OUT STD_LOGIC;
         DDR2RZQ   : INOUT STD_LOGIC;
         DDR2ZIO   : INOUT STD_LOGIC;
         DDR2BA    : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);

         DDR2A  : OUT STD_LOGIC_VECTOR(12 DOWNTO 0);
         DDR2DQ : INOUT STD_LOGIC_VECTOR(15 DOWNTO 0);

         DDR2UDQS_P : INOUT STD_LOGIC;
         DDR2UDQS_N : INOUT STD_LOGIC;
         DDR2LDQS_P : INOUT STD_LOGIC;
         DDR2LDQS_N : INOUT STD_LOGIC;
         DDR2LDM    : OUT STD_LOGIC;
         DDR2UDM    : OUT STD_LOGIC;
         DDR2ODT    : OUT STD_LOGIC;

         clk : IN STD_LOGIC; -- 100 MHz oscillator = 10ns period (top level pin)
         leds : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
      );
   END COMPONENT;
   
begin

   -- Port map for verilog to vhdl
   ddr_wrapper : atlys_ddr_test
      PORT MAP(
         DDR2CLK_P,
         DDR2CLK_N,
         DDR2CKE,
         DDR2RASN,
         DDR2CASN,
         DDR2WEN,
         DDR2RZQ,
         DDR2ZIO,
         DDR2BA,

         DDR2A,
         DDR2DQ,

         DDR2UDQS_P,
         DDR2UDQS_N,
         DDR2LDQS_P,
         DDR2LDQS_N,
         DDR2LDM,
         DDR2UDM,
         DDR2ODT,

         clk, -- 100 MHz oscillator = 10ns period (top level pin)
         leds
      );

--   ddr : atlys_ddr_test
--      PORT MAP(
--         .DDR2CLK_P(DDR2CLK_P),
--         .DDR2CLK_N(DDR2CLK_N),
--         .DDR2CKE(DDR2CKE),
--         .DDR2RASN(DDR2RASN),
--         .DDR2CASN(DDR2CASN),
--         .DDR2WEN(DDR2WEN),
--         .DDR2RZQ(DDR2RZQ),
--         .DDR2ZIO(DDR2ZIO),
--         .DDR2BA(DDR2BA),
--
--         .DDR2A(DDR2A),
--         .DDR2DQ(DDR2DQ),
--
--         .DDR2UDQS_P(DDR2UDQS_P),
--         .DDR2UDQS_N(DDR2UDQS_N),
--         .DDR2LDQS_P(DDR2LDQS_P),
--         .DDR2LDQS_N(DDR2LDQS_N),
--         .DDR2LDM(DDR2LDM),
--         .DDR2UDM(DDR2UDM),
--         .DDR2ODT(DDR2ODT),
--
--         .clk(clk), -- 100 MHz oscillator = 10ns period (top level pin)
--         .leds(leds)
--      );

end Behavioral;

