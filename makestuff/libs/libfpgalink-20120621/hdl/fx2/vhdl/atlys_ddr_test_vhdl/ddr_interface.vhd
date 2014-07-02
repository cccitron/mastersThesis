----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:59:29 05/31/2014 
-- Design Name: 
-- Module Name:    ddr_interface - Behavioral 
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

entity ddr_interface is
   Port (
      CLK_I : in  STD_LOGIC;
      RESET_I : in  STD_LOGIC;
      
      mcb3_dram_dq            	: inout  std_logic_vector(15 downto 0);
		mcb3_dram_a                : out std_logic_vector(12 downto 0);
		mcb3_dram_ba               : out std_logic_vector(2 downto 0);
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
		mcb3_dram_ck_n             : out std_logic;
      
      c3_clk0_o        : OUT STD_LOGIC;
      c3_calib_done  : OUT STD_LOGIC;

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
      c3_p0_cmd_en         : IN STD_LOGIC
   );
end ddr_interface;

architecture Behavioral of ddr_interface is

--   component ddr2
--      generic(
--         C3_P0_MASK_SIZE           : integer := 8;
--         C3_P0_DATA_PORT_SIZE      : integer := 64;
--         C3_P1_MASK_SIZE           : integer := 8;
--         C3_P1_DATA_PORT_SIZE      : integer := 64;
--         C3_MEMCLK_PERIOD          : integer := 3200;
--         C3_RST_ACT_LOW            : integer := 0;
--         C3_INPUT_CLK_TYPE         : string := "SINGLE_ENDED";
--         C3_CALIB_SOFT_IP          : string := "TRUE";
--         C3_SIMULATION             : string := "FALSE";
--         DEBUG_EN                  : integer := 0;
--         C3_MEM_ADDR_ORDER         : string := "ROW_BANK_COLUMN";
--         C3_NUM_DQ_PINS            : integer := 16;
--         C3_MEM_ADDR_WIDTH         : integer := 13;
--         C3_MEM_BANKADDR_WIDTH     : integer := 3
--      );
--      port (
--         mcb3_dram_dq                            : inout  std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);
--         mcb3_dram_a                             : out std_logic_vector(C3_MEM_ADDR_WIDTH-1 downto 0);
--         mcb3_dram_ba                            : out std_logic_vector(C3_MEM_BANKADDR_WIDTH-1 downto 0);
--         mcb3_dram_ras_n                         : out std_logic;
--         mcb3_dram_cas_n                         : out std_logic;
--         mcb3_dram_we_n                          : out std_logic;
--         mcb3_dram_odt                           : out std_logic;
--         mcb3_dram_cke                           : out std_logic;
--         mcb3_dram_dm                            : out std_logic;
--         mcb3_dram_udqs                          : inout  std_logic;
--         mcb3_dram_udqs_n                        : inout  std_logic;
--         mcb3_rzq                                : inout  std_logic;
--         mcb3_zio                                : inout  std_logic;
--         mcb3_dram_udm                           : out std_logic;
--         c3_sys_clk                              : in  std_logic;
--         c3_sys_rst_i                            : in  std_logic;
--         c3_calib_done                           : out std_logic;
--         c3_clk0                                 : out std_logic;
--         c3_rst0                                 : out std_logic;
--         mcb3_dram_dqs                           : inout  std_logic;
--         mcb3_dram_dqs_n                         : inout  std_logic;
--         mcb3_dram_ck                            : out std_logic;
--         mcb3_dram_ck_n                          : out std_logic;
--         c3_p0_cmd_clk                           : in std_logic;
--         c3_p0_cmd_en                            : in std_logic;
--         c3_p0_cmd_instr                         : in std_logic_vector(2 downto 0);
--         c3_p0_cmd_bl                            : in std_logic_vector(5 downto 0);
--         c3_p0_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
--         c3_p0_cmd_empty                         : out std_logic;
--         c3_p0_cmd_full                          : out std_logic;
--         c3_p0_wr_clk                            : in std_logic;
--         c3_p0_wr_en                             : in std_logic;
--         c3_p0_wr_mask                           : in std_logic_vector(C3_P0_MASK_SIZE - 1 downto 0);
--         c3_p0_wr_data                           : in std_logic_vector(C3_P0_DATA_PORT_SIZE - 1 downto 0);
--         c3_p0_wr_full                           : out std_logic;
--         c3_p0_wr_empty                          : out std_logic;
--         c3_p0_wr_count                          : out std_logic_vector(6 downto 0);
--         c3_p0_wr_underrun                       : out std_logic;
--         c3_p0_wr_error                          : out std_logic;
--         c3_p0_rd_clk                            : in std_logic;
--         c3_p0_rd_en                             : in std_logic;
--         c3_p0_rd_data                           : out std_logic_vector(C3_P0_DATA_PORT_SIZE - 1 downto 0);
--         c3_p0_rd_full                           : out std_logic;
--         c3_p0_rd_empty                          : out std_logic;
--         c3_p0_rd_count                          : out std_logic_vector(6 downto 0);
--         c3_p0_rd_overflow                       : out std_logic;
--         c3_p0_rd_error                          : out std_logic;
--         c3_p1_cmd_clk                           : in std_logic;
--         c3_p1_cmd_en                            : in std_logic;
--         c3_p1_cmd_instr                         : in std_logic_vector(2 downto 0);
--         c3_p1_cmd_bl                            : in std_logic_vector(5 downto 0);
--         c3_p1_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
--         c3_p1_cmd_empty                         : out std_logic;
--         c3_p1_cmd_full                          : out std_logic;
--         c3_p1_wr_clk                            : in std_logic;
--         c3_p1_wr_en                             : in std_logic;
--         c3_p1_wr_mask                           : in std_logic_vector(C3_P1_MASK_SIZE - 1 downto 0);
--         c3_p1_wr_data                           : in std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
--         c3_p1_wr_full                           : out std_logic;
--         c3_p1_wr_empty                          : out std_logic;
--         c3_p1_wr_count                          : out std_logic_vector(6 downto 0);
--         c3_p1_wr_underrun                       : out std_logic;
--         c3_p1_wr_error                          : out std_logic;
--         c3_p1_rd_clk                            : in std_logic;
--         c3_p1_rd_en                             : in std_logic;
--         c3_p1_rd_data                           : out std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
--         c3_p1_rd_full                           : out std_logic;
--         c3_p1_rd_empty                          : out std_logic;
--         c3_p1_rd_count                          : out std_logic_vector(6 downto 0);
--         c3_p1_rd_overflow                       : out std_logic;
--         c3_p1_rd_error                          : out std_logic
--      );
--   end component;

   SIGNAL c3_rst0 : STD_LOGIC;
   
   SIGNAL c3_p0_cmd_empty : STD_LOGIC;
   SIGNAL c3_p0_cmd_full  : STD_LOGIC;
   SIGNAL c3_p0_wr_empty  : STD_LOGIC;
   SIGNAL c3_p0_wr_underrun : STD_LOGIC;
   SIGNAL c3_p0_wr_error    : STD_LOGIC;
   SIGNAL c3_p0_wr_full : STD_LOGIC;
   SIGNAL c3_p0_rd_full : STD_LOGIC;
   SIGNAL c3_p0_rd_overflow : STD_LOGIC;
   SIGNAL c3_p0_rd_error : STD_LOGIC;
   
   SIGNAL c3_p1_cmd_en : STD_LOGIC;
   SIGNAL c3_p1_cmd_empty : STD_LOGIC;
   SIGNAL c3_p1_cmd_full : STD_LOGIC;
   SIGNAL c3_p1_wr_full : STD_LOGIC;
   SIGNAL c3_p1_wr_empty : STD_LOGIC;
   SIGNAL c3_p1_wr_underrun : STD_LOGIC;
   SIGNAL c3_p1_wr_error : STD_LOGIC;
   SIGNAL c3_p1_rd_full : STD_LOGIC;
   SIGNAL c3_p1_rd_overflow : STD_LOGIC;
   SIGNAL c3_p1_rd_error : STD_LOGIC;
   SIGNAL c3_clk0 : STD_LOGIC;
   SIGNAL c3_clk_sig : STD_LOGIC := '0';
--   SIGNAL  : STD_LOGIC;
   

begin

   c3_clk0_o <= c3_clk0;
   
   process (c3_clk0)
   begin
      c3_clk_sig <= NOT(c3_clk_sig);
   end process;

--  u_ddr2 : ddr2
--   generic map (
----      C3_P0_MASK_SIZE => C3_P0_MASK_SIZE,
----      C3_P0_DATA_PORT_SIZE => C3_P0_DATA_PORT_SIZE,
----      C3_P1_MASK_SIZE => C3_P1_MASK_SIZE,
----      C3_P1_DATA_PORT_SIZE => C3_P1_DATA_PORT_SIZE,
----      C3_MEMCLK_PERIOD => C3_MEMCLK_PERIOD,
----      C3_RST_ACT_LOW => C3_RST_ACT_LOW,
----      C3_INPUT_CLK_TYPE => C3_INPUT_CLK_TYPE,
----      C3_CALIB_SOFT_IP => C3_CALIB_SOFT_IP,
----      C3_SIMULATION => C3_SIMULATION,
----      DEBUG_EN => DEBUG_EN,
----      C3_MEM_ADDR_ORDER => C3_MEM_ADDR_ORDER,
----      C3_NUM_DQ_PINS => C3_NUM_DQ_PINS,
----      C3_MEM_ADDR_WIDTH => C3_MEM_ADDR_WIDTH,
----      C3_MEM_BANKADDR_WIDTH => C3_MEM_BANKADDR_WIDTH
--      C3_P0_MASK_SIZE         => 8,
--      C3_P0_DATA_PORT_SIZE    => 64,
--      C3_P1_MASK_SIZE         => 8,
--      C3_P1_DATA_PORT_SIZE    => 64,
--      C3_MEMCLK_PERIOD        => 3200,
--      C3_RST_ACT_LOW          => 0,
--      C3_INPUT_CLK_TYPE       => "SINGLE_ENDED",
--      C3_CALIB_SOFT_IP        => "TRUE",
--      C3_SIMULATION           => "FALSE",
--      DEBUG_EN                => 1,
--      C3_MEM_ADDR_ORDER       => "ROW_BANK_COLUMN",
--      C3_NUM_DQ_PINS          => 16,
--      C3_MEM_ADDR_WIDTH       => 13,
--      C3_MEM_BANKADDR_WIDTH   => 3
--   )
--   port map (
--
--      c3_sys_clk  =>         CLK_I, --c3_sys_clk,
--      c3_sys_rst_i    =>       RESET_I, --c3_sys_rst_i,                        
--
--      mcb3_dram_dq       =>    mcb3_dram_dq,  
--      mcb3_dram_a        =>    mcb3_dram_a,  
--      mcb3_dram_ba       =>    mcb3_dram_ba,
--      mcb3_dram_ras_n    =>    mcb3_dram_ras_n,                        
--      mcb3_dram_cas_n    =>    mcb3_dram_cas_n,                        
--      mcb3_dram_we_n     =>    mcb3_dram_we_n,                          
--      mcb3_dram_odt    =>      mcb3_dram_odt,
--      mcb3_dram_cke      =>    mcb3_dram_cke,                          
--      mcb3_dram_ck       =>    mcb3_dram_ck,                          
--      mcb3_dram_ck_n     =>    mcb3_dram_ck_n,       
--      mcb3_dram_dqs      =>    mcb3_dram_dqs,                          
--      mcb3_dram_dqs_n  =>      mcb3_dram_dqs_n,
--      mcb3_dram_udqs  =>       mcb3_dram_udqs,    -- for X16 parts           
--      mcb3_dram_udqs_n    =>   mcb3_dram_udqs_n,  -- for X16 parts
--      mcb3_dram_udm  =>        mcb3_dram_udm,     -- for X16 parts
--      mcb3_dram_dm  =>       mcb3_dram_dm,
--      c3_clk0	=>	        c3_clk0,
--      c3_rst0		=>        c3_rst0,
--
--
--      c3_calib_done      =>    c3_calib_done,
--      mcb3_rzq        =>            mcb3_rzq, --rzq3,
--
--      mcb3_zio        =>            mcb3_zio, --zio3,
--
--      c3_p0_cmd_clk                           =>  c3_clk_sig, --c3_p0_cmd_clk,
--      c3_p0_cmd_en                            =>  c3_p0_cmd_en,
--      c3_p0_cmd_instr                         =>  c3_p0_cmd_instr,
--      c3_p0_cmd_bl                            =>  c3_p0_cmd_bl,
--      c3_p0_cmd_byte_addr                     =>  c3_p0_cmd_byte_addr,
--      c3_p0_cmd_empty                         =>  c3_p0_cmd_empty,
--      c3_p0_cmd_full                          =>  c3_p0_cmd_full,
--      c3_p0_wr_clk                            =>  c3_clk_sig, --c3_p0_wr_clk,
--      c3_p0_wr_en                             =>  c3_p0_wr_en,
--      c3_p0_wr_mask                           =>  c3_p0_wr_mask,
--      c3_p0_wr_data                           =>  c3_p0_wr_data,
--      c3_p0_wr_full                           =>  c3_p0_wr_full,
--      c3_p0_wr_empty                          =>  c3_p0_wr_empty,
--      c3_p0_wr_count                          =>  c3_p0_wr_count,
--      c3_p0_wr_underrun                       =>  c3_p0_wr_underrun,
--      c3_p0_wr_error                          =>  c3_p0_wr_error,
--      c3_p0_rd_clk                            =>  c3_clk_sig, --c3_p0_rd_clk,
--      c3_p0_rd_en                             =>  c3_p0_rd_en,
--      c3_p0_rd_data                           =>  c3_p0_rd_data,
--      c3_p0_rd_full                           =>  c3_p0_rd_full,
--      c3_p0_rd_empty                          =>  c3_p0_rd_empty,
--      c3_p0_rd_count                          =>  c3_p0_rd_count,
--      c3_p0_rd_overflow                       =>  c3_p0_rd_overflow,
--      c3_p0_rd_error                          =>  c3_p0_rd_error,
--      
--      c3_p1_cmd_clk                           =>  c3_clk_sig, --c3_p1_cmd_clk,
--      c3_p1_cmd_en                            =>  c3_p1_cmd_en,
--      c3_p1_cmd_instr                         =>  c3_p1_cmd_instr,
--      c3_p1_cmd_bl                            =>  c3_p1_cmd_bl,
--      c3_p1_cmd_byte_addr                     =>  c3_p1_cmd_byte_addr,
--      c3_p1_cmd_empty                         =>  c3_p1_cmd_empty,
--      c3_p1_cmd_full                          =>  c3_p1_cmd_full,
--      c3_p1_wr_clk                            =>  c3_clk_sig, --c3_p1_wr_clk,
--      c3_p1_wr_en                             =>  c3_p1_wr_en,
--      c3_p1_wr_mask                           =>  c3_p1_wr_mask,
--      c3_p1_wr_data                           =>  c3_p1_wr_data,
--      c3_p1_wr_full                           =>  c3_p1_wr_full,
--      c3_p1_wr_empty                          =>  c3_p1_wr_empty,
--      c3_p1_wr_count                          =>  c3_p1_wr_count,
--      c3_p1_wr_underrun                       =>  c3_p1_wr_underrun,
--      c3_p1_wr_error                          =>  c3_p1_wr_error,
--      c3_p1_rd_clk                            =>  c3_clk_sig, --c3_p1_rd_clk,
--      c3_p1_rd_en                             =>  c3_p1_rd_en,
--      c3_p1_rd_data                           =>  c3_p1_rd_data,
--      c3_p1_rd_full                           =>  c3_p1_rd_full,
--      c3_p1_rd_empty                          =>  c3_p1_rd_empty,
--      c3_p1_rd_count                          =>  c3_p1_rd_count,
--      c3_p1_rd_overflow                       =>  c3_p1_rd_overflow,
--      c3_p1_rd_error                          =>  c3_p1_rd_error
--   );

    ddr2 # (
    .C3_P0_MASK_SIZE(8),
    .C3_P0_DATA_PORT_SIZE(64),
    .C3_P1_MASK_SIZE(8),
    .C3_P1_DATA_PORT_SIZE(64),
    .DEBUG_EN(0),
    .C3_MEMCLK_PERIOD(3200),
    .C3_CALIB_SOFT_IP("TRUE"),
    .C3_SIMULATION("FALSE"),
    .C3_RST_ACT_LOW(0),
    .C3_INPUT_CLK_TYPE("SINGLE_ENDED"),
    .C3_MEM_ADDR_ORDER("ROW_BANK_COLUMN"),
    .C3_NUM_DQ_PINS(16),
    .C3_MEM_ADDR_WIDTH(13),
    .C3_MEM_BANKADDR_WIDTH(3)
)
u_ddr2 (

    .c3_sys_clk           (c3_sys_clk),
  .c3_sys_rst_i           (c3_sys_rst_i),                        

  .mcb3_dram_dq           (mcb3_dram_dq),  
  .mcb3_dram_a            (mcb3_dram_a),  
  .mcb3_dram_ba           (mcb3_dram_ba),
  .mcb3_dram_ras_n        (mcb3_dram_ras_n),                        
  .mcb3_dram_cas_n        (mcb3_dram_cas_n),                        
  .mcb3_dram_we_n         (mcb3_dram_we_n),                          
  .mcb3_dram_odt          (mcb3_dram_odt),
  .mcb3_dram_cke          (mcb3_dram_cke),                          
  .mcb3_dram_ck           (mcb3_dram_ck),                          
  .mcb3_dram_ck_n         (mcb3_dram_ck_n),       
  .mcb3_dram_dqs          (mcb3_dram_dqs),                          
  .mcb3_dram_dqs_n        (mcb3_dram_dqs_n),
  .mcb3_dram_udqs         (mcb3_dram_udqs),  --  // for X16 parts                        
  .mcb3_dram_udqs_n       (mcb3_dram_udqs_n), -- // for X16 parts
  .mcb3_dram_udm          (mcb3_dram_udm),    -- // for X16 parts
  .mcb3_dram_dm           (mcb3_dram_dm),
    .c3_clk0		        (c3_clk0),
  .c3_rst0		        (c3_rst0),
	
 
  .c3_calib_done          (c3_calib_done),
     .mcb3_rzq               (rzq3),
               
     .mcb3_zio               (zio3),
               
     .c3_p0_cmd_clk                          (c3_p0_cmd_clk),
   .c3_p0_cmd_en                           (c3_p0_cmd_en),
   .c3_p0_cmd_instr                        (c3_p0_cmd_instr),
   .c3_p0_cmd_bl                           (c3_p0_cmd_bl),
   .c3_p0_cmd_byte_addr                    (c3_p0_cmd_byte_addr),
   .c3_p0_cmd_empty                        (c3_p0_cmd_empty),
   .c3_p0_cmd_full                         (c3_p0_cmd_full),
   .c3_p0_wr_clk                           (c3_p0_wr_clk),
   .c3_p0_wr_en                            (c3_p0_wr_en),
   .c3_p0_wr_mask                          (c3_p0_wr_mask),
   .c3_p0_wr_data                          (c3_p0_wr_data),
   .c3_p0_wr_full                          (c3_p0_wr_full),
   .c3_p0_wr_empty                         (c3_p0_wr_empty),
   .c3_p0_wr_count                         (c3_p0_wr_count),
   .c3_p0_wr_underrun                      (c3_p0_wr_underrun),
   .c3_p0_wr_error                         (c3_p0_wr_error),
   .c3_p0_rd_clk                           (c3_p0_rd_clk),
   .c3_p0_rd_en                            (c3_p0_rd_en),
   .c3_p0_rd_data                          (c3_p0_rd_data),
   .c3_p0_rd_full                          (c3_p0_rd_full),
   .c3_p0_rd_empty                         (c3_p0_rd_empty),
   .c3_p0_rd_count                         (c3_p0_rd_count),
   .c3_p0_rd_overflow                      (c3_p0_rd_overflow),
   .c3_p0_rd_error                         (c3_p0_rd_error),
   .c3_p1_cmd_clk                          (c3_p1_cmd_clk),
   .c3_p1_cmd_en                           (c3_p1_cmd_en),
   .c3_p1_cmd_instr                        (c3_p1_cmd_instr),
   .c3_p1_cmd_bl                           (c3_p1_cmd_bl),
   .c3_p1_cmd_byte_addr                    (c3_p1_cmd_byte_addr),
   .c3_p1_cmd_empty                        (c3_p1_cmd_empty),
   .c3_p1_cmd_full                         (c3_p1_cmd_full),
   .c3_p1_wr_clk                           (c3_p1_wr_clk),
   .c3_p1_wr_en                            (c3_p1_wr_en),
   .c3_p1_wr_mask                          (c3_p1_wr_mask),
   .c3_p1_wr_data                          (c3_p1_wr_data),
   .c3_p1_wr_full                          (c3_p1_wr_full),
   .c3_p1_wr_empty                         (c3_p1_wr_empty),
   .c3_p1_wr_count                         (c3_p1_wr_count),
   .c3_p1_wr_underrun                      (c3_p1_wr_underrun),
   .c3_p1_wr_error                         (c3_p1_wr_error),
   .c3_p1_rd_clk                           (c3_p1_rd_clk),
   .c3_p1_rd_en                            (c3_p1_rd_en),
   .c3_p1_rd_data                          (c3_p1_rd_data),
   .c3_p1_rd_full                          (c3_p1_rd_full),
   .c3_p1_rd_empty                         (c3_p1_rd_empty),
   .c3_p1_rd_count                         (c3_p1_rd_count),
   .c3_p1_rd_overflow                      (c3_p1_rd_overflow),
   .c3_p1_rd_error                         (c3_p1_rd_error)
);

end Behavioral;

