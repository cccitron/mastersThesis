----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:48:40 03/21/2014 
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
   generic (
      C3_P0_MASK_SIZE           : integer := 4;
      C3_P0_DATA_PORT_SIZE      : integer := 32;
      C3_P1_MASK_SIZE           : integer := 4;
      C3_P1_DATA_PORT_SIZE      : integer := 32;
      C3_MEMCLK_PERIOD          : integer := 3000;
      C3_RST_ACT_LOW            : integer := 0;
      C3_INPUT_CLK_TYPE         : string := "SINGLE_ENDED";
      C3_CALIB_SOFT_IP          : string := "TRUE";
      C3_SIMULATION             : string := "FALSE";
      DEBUG_EN                  : integer := 0;
      C3_MEM_ADDR_ORDER         : string := "ROW_BANK_COLUMN";
      C3_NUM_DQ_PINS            : integer := 16;
      C3_MEM_ADDR_WIDTH         : integer := 13;
      C3_MEM_BANKADDR_WIDTH     : integer := 3
   );
   port (
      CLK_I : in  STD_LOGIC;
		RESET_I : in  STD_LOGIC;
      --c3_clk0 : out std_logic;
      c3_calib_done : out std_logic;

-- Title : Port 1 - write only     
      c3_p1_cmd_clk              : in std_logic;
      c3_p1_cmd_en               : in std_logic;
      c3_p1_cmd_instr            : in std_logic_vector(2 downto 0);
      c3_p1_cmd_bl               : in std_logic_vector(5 downto 0);
      c3_p1_cmd_byte_addr        : in std_logic_vector(29 downto 0);
      c3_p1_cmd_empty            : out std_logic;
      c3_p1_cmd_full             : out std_logic;
      c3_p1_wr_clk               : in std_logic;
      c3_p1_wr_en                : in std_logic;
      c3_p1_wr_mask              : in std_logic_vector(C3_P1_MASK_SIZE - 1 downto 0);
      c3_p1_wr_data              : in std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
      c3_p1_wr_full              : out std_logic;
      c3_p1_wr_empty             : out std_logic;
      c3_p1_wr_count             : out std_logic_vector(6 downto 0);
      c3_p1_wr_underrun          : out std_logic;
      c3_p1_wr_error             : out std_logic;
      c3_p1_rd_clk               : in std_logic;
      c3_p1_rd_en                : in std_logic;
      c3_p1_rd_data              : out std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
      c3_p1_rd_full              : out std_logic;
      c3_p1_rd_empty             : out std_logic;
      c3_p1_rd_count             : out std_logic_vector(6 downto 0);
      c3_p1_rd_overflow          : out std_logic;
      c3_p1_rd_error             : out std_logic;

-- Title : Port 3 - read only
      c3_p3_cmd_clk              : in std_logic;
      c3_p3_cmd_en               : in std_logic;
      c3_p3_cmd_instr            : in std_logic_vector(2 downto 0);
      c3_p3_cmd_bl               : in std_logic_vector(5 downto 0);
      c3_p3_cmd_byte_addr        : in std_logic_vector(29 downto 0);
      c3_p3_cmd_empty            : out std_logic;
      c3_p3_cmd_full             : out std_logic;
      c3_p3_rd_clk               : in std_logic;
      c3_p3_rd_en                : in std_logic;
      c3_p3_rd_data              : out std_logic_vector(31 downto 0);
      c3_p3_rd_full              : out std_logic;
      c3_p3_rd_empty             : out std_logic;
      c3_p3_rd_count             : out std_logic_vector(6 downto 0);
      c3_p3_rd_overflow          : out std_logic;
      c3_p3_rd_error             : out std_logic;
      
----------------------------------------------------------------------------------
-- DDR2 Interface
----------------------------------------------------------------------------------
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
end ddr_interface;

architecture Behavioral of ddr_interface is

   signal c3_clk0 : std_logic;
   signal c3_rst0 : std_logic;

--------------------------------------------------------------------------------
-- Internal signals
--------------------------------------------------------------------------------

-- Title : Port 1 - write only
--   signal c3_p1_cmd_clk           : std_logic;
--   signal c3_p1_cmd_en            : std_logic;
--   signal c3_p1_cmd_instr         : std_logic_vector(2 downto 0);
--   signal c3_p1_cmd_bl            : std_logic_vector(5 downto 0);
--   signal c3_p1_cmd_byte_addr     : std_logic_vector(29 downto 0);
--   signal c3_p1_cmd_empty         : std_logic;
--   signal c3_p1_cmd_full          : std_logic;
--   signal c3_p1_wr_clk            : std_logic;
--   signal c3_p1_wr_en             : std_logic;
--   signal c3_p1_wr_mask           : std_logic_vector(C3_P1_MASK_SIZE - 1 downto 0);
--   signal c3_p1_wr_data           : std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
--   signal c3_p1_wr_full           : std_logic;
--   signal c3_p1_wr_empty          : std_logic;
--   signal c3_p1_wr_count          : std_logic_vector(6 downto 0);
--   signal c3_p1_wr_underrun       : std_logic;
--   signal c3_p1_wr_error          : std_logic;
   
---- Title : Port 2 - write only
--   signal c3_p2_cmd_clk           : std_logic;
--   signal c3_p2_cmd_en            : std_logic;
--   signal c3_p2_cmd_instr         : std_logic_vector(2 downto 0);
--   signal c3_p2_cmd_bl            : std_logic_vector(5 downto 0);
--   signal c3_p2_cmd_byte_addr     : std_logic_vector(29 downto 0);
--   signal c3_p2_cmd_empty         : std_logic;
--   signal c3_p2_cmd_full          : std_logic;
--   signal c3_p2_wr_clk            : std_logic;
--   signal c3_p2_wr_en             : std_logic;
--   signal c3_p2_wr_mask           : std_logic_vector(3 downto 0);
--   signal c3_p2_wr_data           : std_logic_vector(31 downto 0);
--   signal c3_p2_wr_full           : std_logic;
--   signal c3_p2_wr_empty          : std_logic;
--   signal c3_p2_wr_count          : std_logic_vector(6 downto 0);
--   signal c3_p2_wr_underrun       : std_logic;
--   signal c3_p2_wr_error          : std_logic;
   
-- Title : Port 3 - read only
--   signal c3_p3_cmd_clk           : std_logic;
--   signal c3_p3_cmd_en            : std_logic;
--   signal c3_p3_cmd_instr         : std_logic_vector(2 downto 0);
--   signal c3_p3_cmd_bl            : std_logic_vector(5 downto 0);
--   signal c3_p3_cmd_byte_addr     : std_logic_vector(29 downto 0);
--   signal c3_p3_cmd_empty         : std_logic;
--   signal c3_p3_cmd_full          : std_logic;
--   signal c3_p3_rd_clk            : std_logic;
--   signal c3_p3_rd_en             : std_logic;
--   signal c3_p3_rd_data           : std_logic_vector(31 downto 0);
--   signal c3_p3_rd_full           : std_logic;
--   signal c3_p3_rd_empty          : std_logic;
--   signal c3_p3_rd_count          : std_logic_vector(6 downto 0);
--   signal c3_p3_rd_overflow       : std_logic;
--   signal c3_p3_rd_error          : std_logic;
   
--------------------------------------------------------------------------------
-- MCB Instantiation
--------------------------------------------------------------------------------
component mig_39_2
   generic (
      C3_P0_MASK_SIZE           : integer := 4;
      C3_P0_DATA_PORT_SIZE      : integer := 32;
      C3_P1_MASK_SIZE           : integer := 4;
      C3_P1_DATA_PORT_SIZE      : integer := 32;
      C3_MEMCLK_PERIOD          : integer := 3000;
      C3_RST_ACT_LOW            : integer := 0;
      C3_INPUT_CLK_TYPE         : string := "SINGLE_ENDED";
      C3_CALIB_SOFT_IP          : string := "TRUE";
      C3_SIMULATION             : string := "FALSE";
      DEBUG_EN                  : integer := 0;
      C3_MEM_ADDR_ORDER         : string := "ROW_BANK_COLUMN";
      C3_NUM_DQ_PINS            : integer := 16;
      C3_MEM_ADDR_WIDTH         : integer := 13;
      C3_MEM_BANKADDR_WIDTH     : integer := 3
   );
   port (
      mcb3_dram_dq                            : inout  std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);
      mcb3_dram_a                             : out std_logic_vector(C3_MEM_ADDR_WIDTH-1 downto 0);
      mcb3_dram_ba                            : out std_logic_vector(C3_MEM_BANKADDR_WIDTH-1 downto 0);
      mcb3_dram_ras_n                         : out std_logic;
      mcb3_dram_cas_n                         : out std_logic;
      mcb3_dram_we_n                          : out std_logic;
      mcb3_dram_odt                           : out std_logic;
      mcb3_dram_cke                           : out std_logic;
      mcb3_dram_dm                            : out std_logic;
      mcb3_dram_udqs                          : inout  std_logic;
      mcb3_dram_udqs_n                        : inout  std_logic;
      mcb3_rzq                                : inout  std_logic;
      mcb3_zio                                : inout  std_logic;
      mcb3_dram_udm                           : out std_logic;
      c3_sys_clk                              : in  std_logic;
      c3_sys_rst_i                            : in  std_logic;
      c3_calib_done                           : out std_logic;
      c3_clk0                                 : out std_logic;
      c3_rst0                                 : out std_logic;
      mcb3_dram_dqs                           : inout  std_logic;
      mcb3_dram_dqs_n                         : inout  std_logic;
      mcb3_dram_ck                            : out std_logic;
      mcb3_dram_ck_n                          : out std_logic;
      c3_p0_cmd_clk                           : in std_logic;
      c3_p0_cmd_en                            : in std_logic;
      c3_p0_cmd_instr                         : in std_logic_vector(2 downto 0);
      c3_p0_cmd_bl                            : in std_logic_vector(5 downto 0);
      c3_p0_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
      c3_p0_cmd_empty                         : out std_logic;
      c3_p0_cmd_full                          : out std_logic;
      c3_p0_wr_clk                            : in std_logic;
      c3_p0_wr_en                             : in std_logic;
      c3_p0_wr_mask                           : in std_logic_vector(C3_P0_MASK_SIZE - 1 downto 0);
      c3_p0_wr_data                           : in std_logic_vector(C3_P0_DATA_PORT_SIZE - 1 downto 0);
      c3_p0_wr_full                           : out std_logic;
      c3_p0_wr_empty                          : out std_logic;
      c3_p0_wr_count                          : out std_logic_vector(6 downto 0);
      c3_p0_wr_underrun                       : out std_logic;
      c3_p0_wr_error                          : out std_logic;
      c3_p0_rd_clk                            : in std_logic;
      c3_p0_rd_en                             : in std_logic;
      c3_p0_rd_data                           : out std_logic_vector(C3_P0_DATA_PORT_SIZE - 1 downto 0);
      c3_p0_rd_full                           : out std_logic;
      c3_p0_rd_empty                          : out std_logic;
      c3_p0_rd_count                          : out std_logic_vector(6 downto 0);
      c3_p0_rd_overflow                       : out std_logic;
      c3_p0_rd_error                          : out std_logic;
      c3_p1_cmd_clk                           : in std_logic;
      c3_p1_cmd_en                            : in std_logic;
      c3_p1_cmd_instr                         : in std_logic_vector(2 downto 0);
      c3_p1_cmd_bl                            : in std_logic_vector(5 downto 0);
      c3_p1_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
      c3_p1_cmd_empty                         : out std_logic;
      c3_p1_cmd_full                          : out std_logic;
      c3_p1_wr_clk                            : in std_logic;
      c3_p1_wr_en                             : in std_logic;
      c3_p1_wr_mask                           : in std_logic_vector(C3_P1_MASK_SIZE - 1 downto 0);
      c3_p1_wr_data                           : in std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
      c3_p1_wr_full                           : out std_logic;
      c3_p1_wr_empty                          : out std_logic;
      c3_p1_wr_count                          : out std_logic_vector(6 downto 0);
      c3_p1_wr_underrun                       : out std_logic;
      c3_p1_wr_error                          : out std_logic;
      c3_p1_rd_clk                            : in std_logic;
      c3_p1_rd_en                             : in std_logic;
      c3_p1_rd_data                           : out std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0);
      c3_p1_rd_full                           : out std_logic;
      c3_p1_rd_empty                          : out std_logic;
      c3_p1_rd_count                          : out std_logic_vector(6 downto 0);
      c3_p1_rd_overflow                       : out std_logic;
      c3_p1_rd_error                          : out std_logic;
      c3_p2_cmd_clk                           : in std_logic;
      c3_p2_cmd_en                            : in std_logic;
      c3_p2_cmd_instr                         : in std_logic_vector(2 downto 0);
      c3_p2_cmd_bl                            : in std_logic_vector(5 downto 0);
      c3_p2_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
      c3_p2_cmd_empty                         : out std_logic;
      c3_p2_cmd_full                          : out std_logic;
      c3_p2_wr_clk                            : in std_logic;
      c3_p2_wr_en                             : in std_logic;
      c3_p2_wr_mask                           : in std_logic_vector(3 downto 0);
      c3_p2_wr_data                           : in std_logic_vector(31 downto 0);
      c3_p2_wr_full                           : out std_logic;
      c3_p2_wr_empty                          : out std_logic;
      c3_p2_wr_count                          : out std_logic_vector(6 downto 0);
      c3_p2_wr_underrun                       : out std_logic;
      c3_p2_wr_error                          : out std_logic;
      c3_p2_rd_clk                            : in std_logic;
      c3_p2_rd_en                             : in std_logic;
      c3_p2_rd_data                           : out std_logic_vector(31 downto 0);
      c3_p2_rd_full                           : out std_logic;
      c3_p2_rd_empty                          : out std_logic;
      c3_p2_rd_count                          : out std_logic_vector(6 downto 0);
      c3_p2_rd_overflow                       : out std_logic;
      c3_p2_rd_error                          : out std_logic;
      c3_p3_cmd_clk                           : in std_logic;
      c3_p3_cmd_en                            : in std_logic;
      c3_p3_cmd_instr                         : in std_logic_vector(2 downto 0);
      c3_p3_cmd_bl                            : in std_logic_vector(5 downto 0);
      c3_p3_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
      c3_p3_cmd_empty                         : out std_logic;
      c3_p3_cmd_full                          : out std_logic;
      c3_p3_wr_clk                            : in std_logic;
      c3_p3_wr_en                             : in std_logic;
      c3_p3_wr_mask                           : in std_logic_vector(3 downto 0);
      c3_p3_wr_data                           : in std_logic_vector(31 downto 0);
      c3_p3_wr_full                           : out std_logic;
      c3_p3_wr_empty                          : out std_logic;
      c3_p3_wr_count                          : out std_logic_vector(6 downto 0);
      c3_p3_wr_underrun                       : out std_logic;
      c3_p3_wr_error                          : out std_logic;
      c3_p3_rd_clk                            : in std_logic;
      c3_p3_rd_en                             : in std_logic;
      c3_p3_rd_data                           : out std_logic_vector(31 downto 0);
      c3_p3_rd_full                           : out std_logic;
      c3_p3_rd_empty                          : out std_logic;
      c3_p3_rd_count                          : out std_logic_vector(6 downto 0);
      c3_p3_rd_overflow                       : out std_logic;
      c3_p3_rd_error                          : out std_logic
);
end component;

begin





u_mig_39_2 : mig_39_2
   generic map (
      C3_P0_MASK_SIZE => C3_P0_MASK_SIZE,
      C3_P0_DATA_PORT_SIZE => C3_P0_DATA_PORT_SIZE,
      C3_P1_MASK_SIZE => C3_P1_MASK_SIZE,
      C3_P1_DATA_PORT_SIZE => C3_P1_DATA_PORT_SIZE,
      C3_MEMCLK_PERIOD => C3_MEMCLK_PERIOD,
      C3_RST_ACT_LOW => C3_RST_ACT_LOW,
      C3_INPUT_CLK_TYPE => C3_INPUT_CLK_TYPE,
      C3_CALIB_SOFT_IP => C3_CALIB_SOFT_IP,
      C3_SIMULATION => C3_SIMULATION,
      DEBUG_EN => DEBUG_EN,
      C3_MEM_ADDR_ORDER => C3_MEM_ADDR_ORDER,
      C3_NUM_DQ_PINS => C3_NUM_DQ_PINS,
      C3_MEM_ADDR_WIDTH => C3_MEM_ADDR_WIDTH,
      C3_MEM_BANKADDR_WIDTH => C3_MEM_BANKADDR_WIDTH
   )
   port map (

   c3_sys_clk     =>        CLK_I,
   c3_sys_rst_i    =>       RESET_I,                        

   mcb3_dram_dq       =>    mcb3_dram_dq,  
   mcb3_dram_a        =>    mcb3_dram_a,  
   mcb3_dram_ba       =>    mcb3_dram_ba,
   mcb3_dram_ras_n    =>    mcb3_dram_ras_n,                        
   mcb3_dram_cas_n    =>    mcb3_dram_cas_n,                        
   mcb3_dram_we_n     =>    mcb3_dram_we_n,                          
   mcb3_dram_odt    =>      mcb3_dram_odt,
   mcb3_dram_cke      =>    mcb3_dram_cke,                          
   mcb3_dram_ck       =>    mcb3_dram_ck,                          
   mcb3_dram_ck_n     =>    mcb3_dram_ck_n,       
   mcb3_dram_dqs      =>    mcb3_dram_dqs,                          
   mcb3_dram_dqs_n  =>      mcb3_dram_dqs_n,
   mcb3_dram_udqs  =>       mcb3_dram_udqs,    -- for X16 parts           
   mcb3_dram_udqs_n    =>   mcb3_dram_udqs_n,  -- for X16 parts
   mcb3_dram_udm    =>      mcb3_dram_udm,     -- for X16 parts
   mcb3_dram_dm   =>        mcb3_dram_dm,
   c3_clk0	      =>	       c3_clk0,
   c3_rst0		   =>        c3_rst0,


   c3_calib_done   =>            c3_calib_done,
   mcb3_rzq        =>            mcb3_rzq,
   mcb3_zio        =>            mcb3_zio,

--------------------------------------------------------------------------------
-- Port 0
--------------------------------------------------------------------------------
   c3_p0_cmd_clk                           =>  '0',--c3_p0_cmd_clk,
   c3_p0_cmd_en                            =>  '0',--c3_p0_cmd_en,
   c3_p0_cmd_instr                         =>  (others => '0'),--c3_p0_cmd_instr,
   c3_p0_cmd_bl                            =>  (others => '0'),--c3_p0_cmd_bl,
   c3_p0_cmd_byte_addr                     =>  (others => '0'),--c3_p0_cmd_byte_addr,
   c3_p0_cmd_empty                         =>  open,--c3_p0_cmd_empty,
   c3_p0_cmd_full                          =>  open,--c3_p0_cmd_full,
   
   c3_p0_wr_clk                            =>  '0',--c3_p0_wr_clk,
   c3_p0_wr_en                             =>  '0',--c3_p0_wr_en,
   c3_p0_wr_mask                           =>  (others => '0'),--c3_p0_wr_mask,
   c3_p0_wr_data                           =>  (others => '0'),--c3_p0_wr_data,
   c3_p0_wr_full                           =>  open,--c3_p0_wr_full,
   c3_p0_wr_empty                          =>  open,--c3_p0_wr_empty,
   c3_p0_wr_count                          =>  open,--c3_p0_wr_count,
   c3_p0_wr_underrun                       =>  open,--c3_p0_wr_underrun,
   c3_p0_wr_error                          =>  open,--c3_p0_wr_error,
   
   c3_p0_rd_clk                            =>  '0',--c3_p0_rd_clk,
   c3_p0_rd_en                             =>  '0',--c3_p0_rd_en,
   c3_p0_rd_data                           =>  open,--c3_p0_rd_data,
   c3_p0_rd_full                           =>  open,--c3_p0_rd_full,
   c3_p0_rd_empty                          =>  open,--c3_p0_rd_empty,
   c3_p0_rd_count                          =>  open,--c3_p0_rd_count,
   c3_p0_rd_overflow                       =>  open,--c3_p0_rd_overflow,
   c3_p0_rd_error                          =>  open,--c3_p0_rd_error,

--------------------------------------------------------------------------------
-- Port 1
--------------------------------------------------------------------------------
   c3_p1_cmd_clk                           =>  c3_p1_cmd_clk, -- 
   c3_p1_cmd_en                            =>  c3_p1_cmd_en, -- 
   c3_p1_cmd_instr                         =>  c3_p1_cmd_instr, -- 
   c3_p1_cmd_bl                            =>  c3_p1_cmd_bl, -- 
   c3_p1_cmd_byte_addr                     =>  c3_p1_cmd_byte_addr, -- 
   c3_p1_cmd_empty                         =>  c3_p1_cmd_empty, -- 
   c3_p1_cmd_full                          =>  c3_p1_cmd_full, -- 
   
   c3_p1_wr_clk                            =>  c3_p1_wr_clk, -- 
   c3_p1_wr_en                             =>  c3_p1_wr_en, -- 
   c3_p1_wr_mask                           =>  c3_p1_wr_mask, -- 
   c3_p1_wr_data                           =>  c3_p1_wr_data, -- 
   c3_p1_wr_full                           =>  c3_p1_wr_full, -- 
   c3_p1_wr_empty                          =>  c3_p1_wr_empty, -- 
   c3_p1_wr_count                          =>  c3_p1_wr_count, -- 
   c3_p1_wr_underrun                       =>  c3_p1_wr_underrun, -- 
   c3_p1_wr_error                          =>  c3_p1_wr_error, -- 
   
   c3_p1_rd_clk                            =>  c3_p1_rd_clk,
   c3_p1_rd_en                             =>  c3_p1_rd_en,
   c3_p1_rd_data                           =>  c3_p1_rd_data,
   c3_p1_rd_full                           =>  c3_p1_rd_full,
   c3_p1_rd_empty                          =>  c3_p1_rd_empty,
   c3_p1_rd_count                          =>  c3_p1_rd_count,
   c3_p1_rd_overflow                       =>  c3_p1_rd_overflow,
   c3_p1_rd_error                          =>  c3_p1_rd_error,

--------------------------------------------------------------------------------
-- Port 2
--------------------------------------------------------------------------------
   c3_p2_cmd_clk                           =>  '0',--c3_p2_cmd_clk, -- 
   c3_p2_cmd_en                            =>  '0',--c3_p2_cmd_en, -- 
   c3_p2_cmd_instr                         =>  (others => '0'),--c3_p2_cmd_instr, -- 
   c3_p2_cmd_bl                            =>  (others => '0'),--c3_p2_cmd_bl, -- 
   c3_p2_cmd_byte_addr                     =>  (others => '0'),--c3_p2_cmd_byte_addr, -- 
   c3_p2_cmd_empty                         =>  open,--c3_p2_cmd_empty, -- 
   c3_p2_cmd_full                          =>  open,--c3_p2_cmd_full, -- 
   
   c3_p2_wr_clk                            =>  '0',--c3_p2_wr_clk, -- 
   c3_p2_wr_en                             =>  '0',--c3_p2_wr_en, -- 
   c3_p2_wr_mask                           =>  (others => '0'),--c3_p2_wr_mask, -- 
   c3_p2_wr_data                           =>  (others => '0'),--c3_p2_wr_data, -- 
   c3_p2_wr_full                           =>  open,--c3_p2_wr_full, -- 
   c3_p2_wr_empty                          =>  open,--c3_p2_wr_empty, -- 
   c3_p2_wr_count                          =>  open,--c3_p2_wr_count, -- 
   c3_p2_wr_underrun                       =>  open,--c3_p2_wr_underrun, -- 
   c3_p2_wr_error                          =>  open,--c3_p2_wr_error, -- 
   
   c3_p2_rd_clk                            =>  '0',--c3_p2_rd_clk,
   c3_p2_rd_en                             =>  '0',--c3_p2_rd_en,
   c3_p2_rd_data                           =>  open,--c3_p2_rd_data,
   c3_p2_rd_full                           =>  open,--c3_p2_rd_full,
   c3_p2_rd_empty                          =>  open,--c3_p2_rd_empty,
   c3_p2_rd_count                          =>  open,--c3_p2_rd_count,
   c3_p2_rd_overflow                       =>  open,--c3_p2_rd_overflow,
   c3_p2_rd_error                          =>  open,--c3_p2_rd_error,
   
--------------------------------------------------------------------------------
-- Port 3
--------------------------------------------------------------------------------
   c3_p3_cmd_clk                           =>  c3_p3_cmd_clk, -- 
   c3_p3_cmd_en                            =>  c3_p3_cmd_en, -- 
   c3_p3_cmd_instr                         =>  c3_p3_cmd_instr, -- 
   c3_p3_cmd_bl                            =>  c3_p3_cmd_bl, -- 
   c3_p3_cmd_byte_addr                     =>  c3_p3_cmd_byte_addr, -- 
   c3_p3_cmd_empty                         =>  c3_p3_cmd_empty, -- 
   c3_p3_cmd_full                          =>  c3_p3_cmd_full, -- 
   
   c3_p3_wr_clk                            =>  '0',--c3_p3_wr_clk,
   c3_p3_wr_en                             =>  '0',--c3_p3_wr_en,
   c3_p3_wr_mask                           =>  (others => '0'),--c3_p3_wr_mask,
   c3_p3_wr_data                           =>  (others => '0'),--c3_p3_wr_data,
   c3_p3_wr_full                           =>  open,--c3_p3_wr_full,
   c3_p3_wr_empty                          =>  open,--c3_p3_wr_empty,
   c3_p3_wr_count                          =>  open,--c3_p3_wr_count,
   c3_p3_wr_underrun                       =>  open,--c3_p3_wr_underrun,
   c3_p3_wr_error                          =>  open,--c3_p3_wr_error,
   
   c3_p3_rd_clk                            =>  c3_p3_rd_clk, -- 
   c3_p3_rd_en                             =>  c3_p3_rd_en, -- 
   c3_p3_rd_data                           =>  c3_p3_rd_data, -- 
   c3_p3_rd_full                           =>  c3_p3_rd_full, -- 
   c3_p3_rd_empty                          =>  c3_p3_rd_empty, -- 
   c3_p3_rd_count                          =>  c3_p3_rd_count, -- 
   c3_p3_rd_overflow                       =>  c3_p3_rd_overflow, -- 
   c3_p3_rd_error                          =>  c3_p3_rd_error -- 
);

end Behavioral;

