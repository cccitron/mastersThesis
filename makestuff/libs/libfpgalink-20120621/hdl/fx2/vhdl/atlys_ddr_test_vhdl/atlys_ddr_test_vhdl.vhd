----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:57:20 05/31/2014 
-- Design Name: 
-- Module Name:    atlys_ddr_test_vhdl - Behavioral 
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

entity atlys_ddr_test_vhdl is
   Generic (
		C3_NUM_DQ_PINS          : integer := 16; 
		C3_MEM_ADDR_WIDTH       : integer := 13; 
		C3_MEM_BANKADDR_WIDTH   : integer := 3
	);
   Port ( 
      CLK_I : in  STD_LOGIC;
      RESET_I : in  STD_LOGIC;
      
      SW_I : in STD_LOGIC_VECTOR(7 downto 0);
		LED_O : out STD_LOGIC_VECTOR(7 downto 0);

		mcb3_dram_dq            	: inout  std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);
		mcb3_dram_a                : out std_logic_vector(C3_MEM_ADDR_WIDTH-1 downto 0);
		mcb3_dram_ba               : out std_logic_vector(C3_MEM_BANKADDR_WIDTH-1 downto 0);
		mcb3_dram_ras_n            : out std_logic;
		mcb3_dram_cas_n            : out std_logic;
		mcb3_dram_we_n             : out std_logic;
		mcb3_dram_odt              : out std_logic;
		mcb3_dram_cke              : out std_logic;
		mcb3_dram_dm               : out std_logic;
		mcb3_dram_udqs             : inout  std_logic;
		mcb3_dram_udqs_n           : inout  std_logic;
		mcb3_rzq                   : inout  std_logic;
		mcb3_zio                   : inout  std_logic;
		mcb3_dram_udm              : out std_logic;
		mcb3_dram_dqs              : inout  std_logic;
		mcb3_dram_dqs_n            : inout  std_logic;
		mcb3_dram_ck               : out std_logic;
		mcb3_dram_ck_n             : out std_logic
   );
end atlys_ddr_test_vhdl;

architecture Behavioral of atlys_ddr_test_vhdl is

   COMPONENT ddr_interface_v IS
      PORT (
         mcb3_dram_ck               : out std_logic;
         mcb3_dram_ck_n             : out std_logic;
         mcb3_dram_cke              : out std_logic;
         mcb3_dram_ras_n            : out std_logic;
         mcb3_dram_cas_n            : out std_logic;
         mcb3_dram_we_n             : out std_logic;
         mcb3_rzq                   : inout  std_logic;
         mcb3_zio                   : inout  std_logic;
         mcb3_dram_ba               : out std_logic_vector(2 downto 0);
         
         mcb3_dram_a                : out std_logic_vector(12 downto 0);
         mcb3_dram_dq            	: inout  std_logic_vector(15 downto 0);
         
         mcb3_dram_udqs             : inout  std_logic;
         mcb3_dram_udqs_n           : inout  std_logic;
         mcb3_dram_dqs              : inout  std_logic;
         mcb3_dram_dqs_n            : inout  std_logic;
         mcb3_dram_dm               : out std_logic;
         mcb3_dram_udm              : out std_logic;
         mcb3_dram_odt              : out std_logic;
         
         CLK_I : IN STD_LOGIC;
         
         c3_p0_cmd_instr      : IN STD_LOGIC_VECTOR(2 DOWNTO 0);
         c3_p0_cmd_bl         : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
         c3_p0_cmd_byte_addr  : IN STD_LOGIC_VECTOR(29 DOWNTO 0);
         c3_p0_wr_mask        : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
         c3_p0_wr_data        : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
         c3_p0_wr_count       : OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
         c3_p0_rd_data        : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
         c3_p0_rd_count       : OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
         c3_p0_rd_en          : IN STD_LOGIC;
         c3_p0_rd_empty       : OUT STD_LOGIC;
         c3_p0_wr_en          : IN STD_LOGIC;

         c3_p1_cmd_instr      : IN STD_LOGIC_VECTOR(2 DOWNTO 0);
         c3_p1_cmd_bl         : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
         c3_p1_cmd_byte_addr  : IN STD_LOGIC_VECTOR(29 DOWNTO 0);
         c3_p1_wr_mask        : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
         c3_p1_wr_count       : OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
         c3_p1_wr_data        : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
         c3_p1_rd_data        : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
         c3_p1_rd_count       : OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
         c3_p1_rd_en          : IN STD_LOGIC;
         c3_p1_rd_empty       : OUT STD_LOGIC;
         c3_p1_wr_en          : IN STD_LOGIC;
         c3_p0_cmd_en         : IN STD_LOGIC;
         
         c3_calib_done : OUT STD_LOGIC;
         RESET_I : IN STD_LOGIC;
         c3_clk0 : OUT STD_LOGIC
      );
   END COMPONENT;
   
   SIGNAL calib_done : STD_LOGIC_VECTOR(1 DOWNTO 0);
   
   SIGNAL c3_clk0        : STD_LOGIC;
   SIGNAL c3_calib_done  : STD_LOGIC;

   SIGNAL c3_p0_cmd_instr      : STD_LOGIC_VECTOR(2 DOWNTO 0);
   SIGNAL c3_p0_cmd_bl         : STD_LOGIC_VECTOR(5 DOWNTO 0);
   SIGNAL c3_p0_cmd_byte_addr  : STD_LOGIC_VECTOR(29 DOWNTO 0);
   SIGNAL c3_p0_wr_mask        : STD_LOGIC_VECTOR(7 DOWNTO 0);
   SIGNAL c3_p0_wr_data        : STD_LOGIC_VECTOR(63 DOWNTO 0);
   SIGNAL c3_p0_wr_count       : STD_LOGIC_VECTOR(6 DOWNTO 0);
   SIGNAL c3_p0_rd_data        : STD_LOGIC_VECTOR(63 DOWNTO 0);
   SIGNAL c3_p0_rd_count       : STD_LOGIC_VECTOR(6 DOWNTO 0);
   SIGNAL c3_p0_rd_en          : STD_LOGIC;
   SIGNAL c3_p0_rd_empty       : STD_LOGIC;
   SIGNAL c3_p0_wr_en          : STD_LOGIC;

   SIGNAL c3_p1_cmd_instr      : STD_LOGIC_VECTOR(2 DOWNTO 0);
   SIGNAL c3_p1_cmd_bl         : STD_LOGIC_VECTOR(5 DOWNTO 0);
   SIGNAL c3_p1_cmd_byte_addr  : STD_LOGIC_VECTOR(29 DOWNTO 0);
   SIGNAL c3_p1_wr_mask        : STD_LOGIC_VECTOR(7 DOWNTO 0);
   SIGNAL c3_p1_wr_count       : STD_LOGIC_VECTOR(6 DOWNTO 0);
   SIGNAL c3_p1_wr_data        : STD_LOGIC_VECTOR(63 DOWNTO 0);
   SIGNAL c3_p1_rd_data        : STD_LOGIC_VECTOR(63 DOWNTO 0);
   SIGNAL c3_p1_rd_count       : STD_LOGIC_VECTOR(6 DOWNTO 0);
   SIGNAL c3_p1_rd_en          : STD_LOGIC;
   SIGNAL c3_p1_rd_empty       : STD_LOGIC;
   SIGNAL c3_p1_wr_en          : STD_LOGIC;
   SIGNAL c3_p0_cmd_en         : STD_LOGIC;
   
begin
   
--   interface : entity work.ddr_interface
--      Port map(
--         CLK_I                => CLK_I,
--         RESET_I              => RESET_I,
--         
--         mcb3_dram_dq         => mcb3_dram_dq,
--         mcb3_dram_a          => mcb3_dram_a,
--         mcb3_dram_ba         => mcb3_dram_ba,
--         mcb3_dram_ras_n      => mcb3_dram_ras_n,
--         mcb3_dram_cas_n      => mcb3_dram_cas_n,
--         mcb3_dram_we_n       => mcb3_dram_we_n,
--         mcb3_dram_odt        => mcb3_dram_odt,
--         mcb3_dram_cke        => mcb3_dram_cke,
--         mcb3_dram_dm         => mcb3_dram_dm,
--         mcb3_dram_udqs       => mcb3_dram_udqs,
--         mcb3_dram_udqs_n     => mcb3_dram_udqs_n,
--         mcb3_rzq             => mcb3_rzq,
--         mcb3_zio             => mcb3_zio,
--         mcb3_dram_udm        => mcb3_dram_udm,
--         mcb3_dram_dqs        => mcb3_dram_dqs,
--         mcb3_dram_dqs_n      => mcb3_dram_dqs_n,
--         mcb3_dram_ck         => mcb3_dram_ck,
--         mcb3_dram_ck_n       => mcb3_dram_ck_n,
--         
--         c3_clk0_o              => c3_clk0,
--         c3_calib_done        => c3_calib_done,
--
--         c3_p0_cmd_instr      => c3_p0_cmd_instr,
--         c3_p0_cmd_bl         => c3_p0_cmd_bl,
--         c3_p0_cmd_byte_addr  => c3_p0_cmd_byte_addr,
--         c3_p0_wr_mask        => c3_p0_wr_mask,
--         c3_p0_wr_data        => c3_p0_wr_data,
--         c3_p0_wr_count       => c3_p0_wr_count,
--         c3_p0_rd_data        => c3_p0_rd_data,
--         c3_p0_rd_count       => c3_p0_rd_count,
--         c3_p0_rd_en          => c3_p0_rd_en,
--         c3_p0_rd_empty       => c3_p0_rd_empty,
--         c3_p0_wr_en          => c3_p0_wr_en,
--
--         c3_p1_cmd_instr      => c3_p1_cmd_instr,
--         c3_p1_cmd_bl         => c3_p1_cmd_bl,
--         c3_p1_cmd_byte_addr  => c3_p1_cmd_byte_addr,
--         c3_p1_wr_mask        => c3_p1_wr_mask,
--         c3_p1_wr_count       => c3_p1_wr_count,
--         c3_p1_wr_data        => c3_p1_wr_data,
--         c3_p1_rd_data        => c3_p1_rd_data,
--         c3_p1_rd_count       => c3_p1_rd_count,
--         c3_p1_rd_en          => c3_p1_rd_en,
--         c3_p1_rd_empty       => c3_p1_rd_empty,
--         c3_p1_wr_en          => c3_p1_wr_en,
--         c3_p0_cmd_en         => c3_p0_cmd_en      
--      );

   -- Port map for verilog to vhdl
   ddr_wrapper : ddr_interface_v
      PORT MAP(
         mcb3_dram_ck,
         mcb3_dram_ck_n,
         mcb3_dram_cke,
         mcb3_dram_ras_n,
         mcb3_dram_cas_n,
         mcb3_dram_we_n,
         mcb3_rzq,
         mcb3_zio,
         mcb3_dram_ba,

         mcb3_dram_a,
         mcb3_dram_dq,

         mcb3_dram_udqs,
         mcb3_dram_udqs_n,
         mcb3_dram_dqs,
         mcb3_dram_dqs_n,
         mcb3_dram_dm,
         mcb3_dram_udm,
         mcb3_dram_odt,

         CLK_I, -- 100 MHz oscillator = 10ns period (top level pin)

         c3_p0_cmd_instr,
         c3_p0_cmd_bl,
         c3_p0_cmd_byte_addr,
         c3_p0_wr_mask,
         c3_p0_wr_data,
         c3_p0_wr_count,
         c3_p0_rd_data,
         c3_p0_rd_count,
         c3_p0_rd_en,
         c3_p0_rd_empty,
         c3_p0_wr_en,

         c3_p1_cmd_instr,
         c3_p1_cmd_bl,
         c3_p1_cmd_byte_addr,
         c3_p1_wr_mask,
         c3_p1_wr_count,
         c3_p1_wr_data,
         c3_p1_rd_data,
         c3_p1_rd_count,
         c3_p1_rd_en,
         c3_p1_rd_empty,
         c3_p1_wr_en,
         c3_p0_cmd_en,

         c3_calib_done,
         RESET_I,
         c3_clk0 -- 32 MHz clock generated by PLL. Actually, this should be 78 MHz! Investigate this.
      );

   LED_O <= "1100000" & c3_calib_done;
--   process (c3_clk0)
--   begin
--      IF (RISING_EDGE(c3_clk0)) THEN
--         calib_done <= calib_done(0) & c3_calib_done;
--      END IF;
--   end process;

end Behavioral;

