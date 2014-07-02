--*****************************************************************************
-- (c) Copyright 2009 Xilinx, Inc. All rights reserved.
--
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
--
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
--
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
--
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
--
--*****************************************************************************
--   ____  ____
--  /   /\/   /
-- /___/  \  /   Vendor             : Xilinx
-- \   \   \/    Version            : 3.6.1
--  \   \        Application        : MIG
--  /   /        Filename           : mig_36_1.vho
-- /___/   /\    Date Last Modified : $Date: 2010/11/26 18:26:31 $
-- \   \  /  \   Date Created       : Fri Aug 7 2009
--  \___\/\___\
--
-- Purpose     : Template file containing code that can be used as a model
--               for instantiating a CORE Generator module in a HDL design.
-- Revision History:
--*****************************************************************************

-- The following code must appear in the VHDL architecture header:

------------- Begin Cut here for COMPONENT Declaration ------ COMP_TAG

component mig_36_1
 generic(
    C1_P0_MASK_SIZE           : integer := 4;
    C1_P0_DATA_PORT_SIZE      : integer := 32;
    C1_P1_MASK_SIZE           : integer := 4;
    C1_P1_DATA_PORT_SIZE      : integer := 32;
    C1_MEMCLK_PERIOD          : integer := 3000;
    C1_RST_ACT_LOW            : integer := 0;
    C1_INPUT_CLK_TYPE         : string := "DIFFERENTIAL";
    C1_CALIB_SOFT_IP          : string := "TRUE";
    C1_SIMULATION             : string := "FALSE";
    DEBUG_EN                  : integer := 0;
    C1_MEM_ADDR_ORDER         : string := "ROW_BANK_COLUMN";
    C1_NUM_DQ_PINS            : integer := 8;
    C1_MEM_ADDR_WIDTH         : integer := 14;
    C1_MEM_BANKADDR_WIDTH     : integer := 3;
    C3_P0_MASK_SIZE           : integer := 4;
    C3_P0_DATA_PORT_SIZE      : integer := 32;
    C3_P1_MASK_SIZE           : integer := 4;
    C3_P1_DATA_PORT_SIZE      : integer := 32;
    C3_MEMCLK_PERIOD          : integer := 3000;
    C3_RST_ACT_LOW            : integer := 0;
    C3_INPUT_CLK_TYPE         : string := "DIFFERENTIAL";
    C3_CALIB_SOFT_IP          : string := "TRUE";
    C3_SIMULATION             : string := "FALSE";
    C3_MEM_ADDR_ORDER         : string := "ROW_BANK_COLUMN";
    C3_NUM_DQ_PINS            : integer := 8;
    C3_MEM_ADDR_WIDTH         : integer := 14;
    C3_MEM_BANKADDR_WIDTH     : integer := 3
);
    port (
   mcb1_dram_dq                            : inout  std_logic_vector(C1_NUM_DQ_PINS-1 downto 0);
   mcb1_dram_a                             : out std_logic_vector(C1_MEM_ADDR_WIDTH-1 downto 0);
   mcb1_dram_ba                            : out std_logic_vector(C1_MEM_BANKADDR_WIDTH-1 downto 0);
   mcb1_dram_ras_n                         : out std_logic;
   mcb1_dram_cas_n                         : out std_logic;
   mcb1_dram_we_n                          : out std_logic;
   mcb1_dram_odt                           : out std_logic;
   mcb1_dram_cke                           : out std_logic;
   mcb1_dram_dm                            : out std_logic;
   mcb1_rzq                                : inout  std_logic;
   mcb1_zio                                : inout  std_logic;
   c1_sys_clk_p                            : in  std_logic;
   c1_sys_clk_n                            : in  std_logic;
   c1_sys_rst_n                            : in  std_logic;
   c1_calib_done                           : out std_logic;
   c1_clk0                                 : out std_logic;
   c1_rst0                                 : out std_logic;
   mcb1_dram_dqs                           : inout  std_logic;
   mcb1_dram_dqs_n                         : inout  std_logic;
   mcb1_dram_ck                            : out std_logic;
   mcb1_dram_ck_n                          : out std_logic;
   mcb3_dram_dq                            : inout  std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);
   mcb3_dram_a                             : out std_logic_vector(C3_MEM_ADDR_WIDTH-1 downto 0);
   mcb3_dram_ba                            : out std_logic_vector(C3_MEM_BANKADDR_WIDTH-1 downto 0);
   mcb3_dram_ras_n                         : out std_logic;
   mcb3_dram_cas_n                         : out std_logic;
   mcb3_dram_we_n                          : out std_logic;
   mcb3_dram_odt                           : out std_logic;
   mcb3_dram_cke                           : out std_logic;
   mcb3_dram_dm                            : out std_logic;
   mcb3_rzq                                : inout  std_logic;
   mcb3_zio                                : inout  std_logic;
   c3_sys_clk_p                            : in  std_logic;
   c3_sys_clk_n                            : in  std_logic;
   c3_sys_rst_n                            : in  std_logic;
   c3_calib_done                           : out std_logic;
   c3_clk0                                 : out std_logic;
   c3_rst0                                 : out std_logic;
   mcb3_dram_dqs                           : inout  std_logic;
   mcb3_dram_dqs_n                         : inout  std_logic;
   mcb3_dram_ck                            : out std_logic;
   mcb3_dram_ck_n                          : out std_logic;
   c1_p0_cmd_clk                           : in std_logic;
   c1_p0_cmd_en                            : in std_logic;
   c1_p0_cmd_instr                         : in std_logic_vector(2 downto 0);
   c1_p0_cmd_bl                            : in std_logic_vector(5 downto 0);
   c1_p0_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c1_p0_cmd_empty                         : out std_logic;
   c1_p0_cmd_full                          : out std_logic;
   c1_p0_wr_clk                            : in std_logic;
   c1_p0_wr_en                             : in std_logic;
   c1_p0_wr_mask                           : in std_logic_vector(C1_P0_MASK_SIZE - 1 downto 0);
   c1_p0_wr_data                           : in std_logic_vector(C1_P0_DATA_PORT_SIZE - 1 downto 0);
   c1_p0_wr_full                           : out std_logic;
   c1_p0_wr_empty                          : out std_logic;
   c1_p0_wr_count                          : out std_logic_vector(6 downto 0);
   c1_p0_wr_underrun                       : out std_logic;
   c1_p0_wr_error                          : out std_logic;
   c1_p0_rd_clk                            : in std_logic;
   c1_p0_rd_en                             : in std_logic;
   c1_p0_rd_data                           : out std_logic_vector(C1_P0_DATA_PORT_SIZE - 1 downto 0);
   c1_p0_rd_full                           : out std_logic;
   c1_p0_rd_empty                          : out std_logic;
   c1_p0_rd_count                          : out std_logic_vector(6 downto 0);
   c1_p0_rd_overflow                       : out std_logic;
   c1_p0_rd_error                          : out std_logic;
   c1_p1_cmd_clk                           : in std_logic;
   c1_p1_cmd_en                            : in std_logic;
   c1_p1_cmd_instr                         : in std_logic_vector(2 downto 0);
   c1_p1_cmd_bl                            : in std_logic_vector(5 downto 0);
   c1_p1_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c1_p1_cmd_empty                         : out std_logic;
   c1_p1_cmd_full                          : out std_logic;
   c1_p1_wr_clk                            : in std_logic;
   c1_p1_wr_en                             : in std_logic;
   c1_p1_wr_mask                           : in std_logic_vector(C1_P1_MASK_SIZE - 1 downto 0);
   c1_p1_wr_data                           : in std_logic_vector(C1_P1_DATA_PORT_SIZE - 1 downto 0);
   c1_p1_wr_full                           : out std_logic;
   c1_p1_wr_empty                          : out std_logic;
   c1_p1_wr_count                          : out std_logic_vector(6 downto 0);
   c1_p1_wr_underrun                       : out std_logic;
   c1_p1_wr_error                          : out std_logic;
   c1_p1_rd_clk                            : in std_logic;
   c1_p1_rd_en                             : in std_logic;
   c1_p1_rd_data                           : out std_logic_vector(C1_P1_DATA_PORT_SIZE - 1 downto 0);
   c1_p1_rd_full                           : out std_logic;
   c1_p1_rd_empty                          : out std_logic;
   c1_p1_rd_count                          : out std_logic_vector(6 downto 0);
   c1_p1_rd_overflow                       : out std_logic;
   c1_p1_rd_error                          : out std_logic;
   c1_p2_cmd_clk                           : in std_logic;
   c1_p2_cmd_en                            : in std_logic;
   c1_p2_cmd_instr                         : in std_logic_vector(2 downto 0);
   c1_p2_cmd_bl                            : in std_logic_vector(5 downto 0);
   c1_p2_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c1_p2_cmd_empty                         : out std_logic;
   c1_p2_cmd_full                          : out std_logic;
   c1_p2_rd_clk                            : in std_logic;
   c1_p2_rd_en                             : in std_logic;
   c1_p2_rd_data                           : out std_logic_vector(31 downto 0);
   c1_p2_rd_full                           : out std_logic;
   c1_p2_rd_empty                          : out std_logic;
   c1_p2_rd_count                          : out std_logic_vector(6 downto 0);
   c1_p2_rd_overflow                       : out std_logic;
   c1_p2_rd_error                          : out std_logic;
   c1_p3_cmd_clk                           : in std_logic;
   c1_p3_cmd_en                            : in std_logic;
   c1_p3_cmd_instr                         : in std_logic_vector(2 downto 0);
   c1_p3_cmd_bl                            : in std_logic_vector(5 downto 0);
   c1_p3_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c1_p3_cmd_empty                         : out std_logic;
   c1_p3_cmd_full                          : out std_logic;
   c1_p3_rd_clk                            : in std_logic;
   c1_p3_rd_en                             : in std_logic;
   c1_p3_rd_data                           : out std_logic_vector(31 downto 0);
   c1_p3_rd_full                           : out std_logic;
   c1_p3_rd_empty                          : out std_logic;
   c1_p3_rd_count                          : out std_logic_vector(6 downto 0);
   c1_p3_rd_overflow                       : out std_logic;
   c1_p3_rd_error                          : out std_logic;
   c1_p4_cmd_clk                           : in std_logic;
   c1_p4_cmd_en                            : in std_logic;
   c1_p4_cmd_instr                         : in std_logic_vector(2 downto 0);
   c1_p4_cmd_bl                            : in std_logic_vector(5 downto 0);
   c1_p4_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c1_p4_cmd_empty                         : out std_logic;
   c1_p4_cmd_full                          : out std_logic;
   c1_p4_rd_clk                            : in std_logic;
   c1_p4_rd_en                             : in std_logic;
   c1_p4_rd_data                           : out std_logic_vector(31 downto 0);
   c1_p4_rd_full                           : out std_logic;
   c1_p4_rd_empty                          : out std_logic;
   c1_p4_rd_count                          : out std_logic_vector(6 downto 0);
   c1_p4_rd_overflow                       : out std_logic;
   c1_p4_rd_error                          : out std_logic;
   c1_p5_cmd_clk                           : in std_logic;
   c1_p5_cmd_en                            : in std_logic;
   c1_p5_cmd_instr                         : in std_logic_vector(2 downto 0);
   c1_p5_cmd_bl                            : in std_logic_vector(5 downto 0);
   c1_p5_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c1_p5_cmd_empty                         : out std_logic;
   c1_p5_cmd_full                          : out std_logic;
   c1_p5_rd_clk                            : in std_logic;
   c1_p5_rd_en                             : in std_logic;
   c1_p5_rd_data                           : out std_logic_vector(31 downto 0);
   c1_p5_rd_full                           : out std_logic;
   c1_p5_rd_empty                          : out std_logic;
   c1_p5_rd_count                          : out std_logic_vector(6 downto 0);
   c1_p5_rd_overflow                       : out std_logic;
   c1_p5_rd_error                          : out std_logic;
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
   c3_p3_rd_clk                            : in std_logic;
   c3_p3_rd_en                             : in std_logic;
   c3_p3_rd_data                           : out std_logic_vector(31 downto 0);
   c3_p3_rd_full                           : out std_logic;
   c3_p3_rd_empty                          : out std_logic;
   c3_p3_rd_count                          : out std_logic_vector(6 downto 0);
   c3_p3_rd_overflow                       : out std_logic;
   c3_p3_rd_error                          : out std_logic;
   c3_p4_cmd_clk                           : in std_logic;
   c3_p4_cmd_en                            : in std_logic;
   c3_p4_cmd_instr                         : in std_logic_vector(2 downto 0);
   c3_p4_cmd_bl                            : in std_logic_vector(5 downto 0);
   c3_p4_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c3_p4_cmd_empty                         : out std_logic;
   c3_p4_cmd_full                          : out std_logic;
   c3_p4_rd_clk                            : in std_logic;
   c3_p4_rd_en                             : in std_logic;
   c3_p4_rd_data                           : out std_logic_vector(31 downto 0);
   c3_p4_rd_full                           : out std_logic;
   c3_p4_rd_empty                          : out std_logic;
   c3_p4_rd_count                          : out std_logic_vector(6 downto 0);
   c3_p4_rd_overflow                       : out std_logic;
   c3_p4_rd_error                          : out std_logic;
   c3_p5_cmd_clk                           : in std_logic;
   c3_p5_cmd_en                            : in std_logic;
   c3_p5_cmd_instr                         : in std_logic_vector(2 downto 0);
   c3_p5_cmd_bl                            : in std_logic_vector(5 downto 0);
   c3_p5_cmd_byte_addr                     : in std_logic_vector(29 downto 0);
   c3_p5_cmd_empty                         : out std_logic;
   c3_p5_cmd_full                          : out std_logic;
   c3_p5_rd_clk                            : in std_logic;
   c3_p5_rd_en                             : in std_logic;
   c3_p5_rd_data                           : out std_logic_vector(31 downto 0);
   c3_p5_rd_full                           : out std_logic;
   c3_p5_rd_empty                          : out std_logic;
   c3_p5_rd_count                          : out std_logic_vector(6 downto 0);
   c3_p5_rd_overflow                       : out std_logic;
   c3_p5_rd_error                          : out std_logic
);
end component;

-- COMP_TAG_END ------ End COMPONENT Declaration ------------

-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.

------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG
  u_mig_36_1 : mig_36_1
    generic map (
    C1_P0_MASK_SIZE => C1_P0_MASK_SIZE,
    C1_P0_DATA_PORT_SIZE => C1_P0_DATA_PORT_SIZE,
    C1_P1_MASK_SIZE => C1_P1_MASK_SIZE,
    C1_P1_DATA_PORT_SIZE => C1_P1_DATA_PORT_SIZE,
    C1_MEMCLK_PERIOD => C1_MEMCLK_PERIOD,
    C1_RST_ACT_LOW => C1_RST_ACT_LOW,
    C1_INPUT_CLK_TYPE => C1_INPUT_CLK_TYPE,
    C1_CALIB_SOFT_IP => C1_CALIB_SOFT_IP,
    C1_SIMULATION => C1_SIMULATION,
    DEBUG_EN => DEBUG_EN,
    C1_MEM_ADDR_ORDER => C1_MEM_ADDR_ORDER,
    C1_NUM_DQ_PINS => C1_NUM_DQ_PINS,
    C1_MEM_ADDR_WIDTH => C1_MEM_ADDR_WIDTH,
    C1_MEM_BANKADDR_WIDTH => C1_MEM_BANKADDR_WIDTH,
    C3_P0_MASK_SIZE => C3_P0_MASK_SIZE,
    C3_P0_DATA_PORT_SIZE => C3_P0_DATA_PORT_SIZE,
    C3_P1_MASK_SIZE => C3_P1_MASK_SIZE,
    C3_P1_DATA_PORT_SIZE => C3_P1_DATA_PORT_SIZE,
    C3_MEMCLK_PERIOD => C3_MEMCLK_PERIOD,
    C3_RST_ACT_LOW => C3_RST_ACT_LOW,
    C3_INPUT_CLK_TYPE => C3_INPUT_CLK_TYPE,
    C3_CALIB_SOFT_IP => C3_CALIB_SOFT_IP,
    C3_SIMULATION => C3_SIMULATION,
    C3_MEM_ADDR_ORDER => C3_MEM_ADDR_ORDER,
    C3_NUM_DQ_PINS => C3_NUM_DQ_PINS,
    C3_MEM_ADDR_WIDTH => C3_MEM_ADDR_WIDTH,
    C3_MEM_BANKADDR_WIDTH => C3_MEM_BANKADDR_WIDTH
)
    port map (

    c1_sys_clk_p  =>         c1_sys_clk_p,
  c1_sys_clk_n    =>       c1_sys_clk_n,
  c1_sys_rst_n    =>       c1_sys_rst_n,                        

  mcb1_dram_dq       =>    mcb1_dram_dq,  
  mcb1_dram_a        =>    mcb1_dram_a,  
  mcb1_dram_ba       =>    mcb1_dram_ba,
  mcb1_dram_ras_n    =>    mcb1_dram_ras_n,                        
  mcb1_dram_cas_n    =>    mcb1_dram_cas_n,                        
  mcb1_dram_we_n     =>    mcb1_dram_we_n,                          
  mcb1_dram_odt    =>      mcb1_dram_odt,
  mcb1_dram_cke      =>    mcb1_dram_cke,                          
  mcb1_dram_ck       =>    mcb1_dram_ck,                          
  mcb1_dram_ck_n     =>    mcb1_dram_ck_n,       
  mcb1_dram_dqs      =>    mcb1_dram_dqs,                          
  mcb1_dram_dqs_n  =>      mcb1_dram_dqs_n,
  
  mcb1_dram_dm  =>       mcb1_dram_dm,
    c1_clk0	=>	        c1_clk0,
  c1_rst0		=>        c1_rst0,
	
 
  c1_calib_done      =>    c1_calib_done,
     mcb1_rzq        =>            rzq1,
	
     mcb1_zio        =>            zio1,
	
     c1_p0_cmd_clk                           =>  c1_p0_cmd_clk,
   c1_p0_cmd_en                            =>  c1_p0_cmd_en,
   c1_p0_cmd_instr                         =>  c1_p0_cmd_instr,
   c1_p0_cmd_bl                            =>  c1_p0_cmd_bl,
   c1_p0_cmd_byte_addr                     =>  c1_p0_cmd_byte_addr,
   c1_p0_cmd_empty                         =>  c1_p0_cmd_empty,
   c1_p0_cmd_full                          =>  c1_p0_cmd_full,
   c1_p0_wr_clk                            =>  c1_p0_wr_clk,
   c1_p0_wr_en                             =>  c1_p0_wr_en,
   c1_p0_wr_mask                           =>  c1_p0_wr_mask,
   c1_p0_wr_data                           =>  c1_p0_wr_data,
   c1_p0_wr_full                           =>  c1_p0_wr_full,
   c1_p0_wr_empty                          =>  c1_p0_wr_empty,
   c1_p0_wr_count                          =>  c1_p0_wr_count,
   c1_p0_wr_underrun                       =>  c1_p0_wr_underrun,
   c1_p0_wr_error                          =>  c1_p0_wr_error,
   c1_p0_rd_clk                            =>  c1_p0_rd_clk,
   c1_p0_rd_en                             =>  c1_p0_rd_en,
   c1_p0_rd_data                           =>  c1_p0_rd_data,
   c1_p0_rd_full                           =>  c1_p0_rd_full,
   c1_p0_rd_empty                          =>  c1_p0_rd_empty,
   c1_p0_rd_count                          =>  c1_p0_rd_count,
   c1_p0_rd_overflow                       =>  c1_p0_rd_overflow,
   c1_p0_rd_error                          =>  c1_p0_rd_error,
   c1_p1_cmd_clk                           =>  c1_p1_cmd_clk,
   c1_p1_cmd_en                            =>  c1_p1_cmd_en,
   c1_p1_cmd_instr                         =>  c1_p1_cmd_instr,
   c1_p1_cmd_bl                            =>  c1_p1_cmd_bl,
   c1_p1_cmd_byte_addr                     =>  c1_p1_cmd_byte_addr,
   c1_p1_cmd_empty                         =>  c1_p1_cmd_empty,
   c1_p1_cmd_full                          =>  c1_p1_cmd_full,
   c1_p1_wr_clk                            =>  c1_p1_wr_clk,
   c1_p1_wr_en                             =>  c1_p1_wr_en,
   c1_p1_wr_mask                           =>  c1_p1_wr_mask,
   c1_p1_wr_data                           =>  c1_p1_wr_data,
   c1_p1_wr_full                           =>  c1_p1_wr_full,
   c1_p1_wr_empty                          =>  c1_p1_wr_empty,
   c1_p1_wr_count                          =>  c1_p1_wr_count,
   c1_p1_wr_underrun                       =>  c1_p1_wr_underrun,
   c1_p1_wr_error                          =>  c1_p1_wr_error,
   c1_p1_rd_clk                            =>  c1_p1_rd_clk,
   c1_p1_rd_en                             =>  c1_p1_rd_en,
   c1_p1_rd_data                           =>  c1_p1_rd_data,
   c1_p1_rd_full                           =>  c1_p1_rd_full,
   c1_p1_rd_empty                          =>  c1_p1_rd_empty,
   c1_p1_rd_count                          =>  c1_p1_rd_count,
   c1_p1_rd_overflow                       =>  c1_p1_rd_overflow,
   c1_p1_rd_error                          =>  c1_p1_rd_error,
   c1_p2_cmd_clk                           =>  c1_p2_cmd_clk,
   c1_p2_cmd_en                            =>  c1_p2_cmd_en,
   c1_p2_cmd_instr                         =>  c1_p2_cmd_instr,
   c1_p2_cmd_bl                            =>  c1_p2_cmd_bl,
   c1_p2_cmd_byte_addr                     =>  c1_p2_cmd_byte_addr,
   c1_p2_cmd_empty                         =>  c1_p2_cmd_empty,
   c1_p2_cmd_full                          =>  c1_p2_cmd_full,
   c1_p2_rd_clk                            =>  c1_p2_rd_clk,
   c1_p2_rd_en                             =>  c1_p2_rd_en,
   c1_p2_rd_data                           =>  c1_p2_rd_data,
   c1_p2_rd_full                           =>  c1_p2_rd_full,
   c1_p2_rd_empty                          =>  c1_p2_rd_empty,
   c1_p2_rd_count                          =>  c1_p2_rd_count,
   c1_p2_rd_overflow                       =>  c1_p2_rd_overflow,
   c1_p2_rd_error                          =>  c1_p2_rd_error,
   c1_p3_cmd_clk                           =>  c1_p3_cmd_clk,
   c1_p3_cmd_en                            =>  c1_p3_cmd_en,
   c1_p3_cmd_instr                         =>  c1_p3_cmd_instr,
   c1_p3_cmd_bl                            =>  c1_p3_cmd_bl,
   c1_p3_cmd_byte_addr                     =>  c1_p3_cmd_byte_addr,
   c1_p3_cmd_empty                         =>  c1_p3_cmd_empty,
   c1_p3_cmd_full                          =>  c1_p3_cmd_full,
   c1_p3_rd_clk                            =>  c1_p3_rd_clk,
   c1_p3_rd_en                             =>  c1_p3_rd_en,
   c1_p3_rd_data                           =>  c1_p3_rd_data,
   c1_p3_rd_full                           =>  c1_p3_rd_full,
   c1_p3_rd_empty                          =>  c1_p3_rd_empty,
   c1_p3_rd_count                          =>  c1_p3_rd_count,
   c1_p3_rd_overflow                       =>  c1_p3_rd_overflow,
   c1_p3_rd_error                          =>  c1_p3_rd_error,
   c1_p4_cmd_clk                           =>  c1_p4_cmd_clk,
   c1_p4_cmd_en                            =>  c1_p4_cmd_en,
   c1_p4_cmd_instr                         =>  c1_p4_cmd_instr,
   c1_p4_cmd_bl                            =>  c1_p4_cmd_bl,
   c1_p4_cmd_byte_addr                     =>  c1_p4_cmd_byte_addr,
   c1_p4_cmd_empty                         =>  c1_p4_cmd_empty,
   c1_p4_cmd_full                          =>  c1_p4_cmd_full,
   c1_p4_rd_clk                            =>  c1_p4_rd_clk,
   c1_p4_rd_en                             =>  c1_p4_rd_en,
   c1_p4_rd_data                           =>  c1_p4_rd_data,
   c1_p4_rd_full                           =>  c1_p4_rd_full,
   c1_p4_rd_empty                          =>  c1_p4_rd_empty,
   c1_p4_rd_count                          =>  c1_p4_rd_count,
   c1_p4_rd_overflow                       =>  c1_p4_rd_overflow,
   c1_p4_rd_error                          =>  c1_p4_rd_error,
   c1_p5_cmd_clk                           =>  c1_p5_cmd_clk,
   c1_p5_cmd_en                            =>  c1_p5_cmd_en,
   c1_p5_cmd_instr                         =>  c1_p5_cmd_instr,
   c1_p5_cmd_bl                            =>  c1_p5_cmd_bl,
   c1_p5_cmd_byte_addr                     =>  c1_p5_cmd_byte_addr,
   c1_p5_cmd_empty                         =>  c1_p5_cmd_empty,
   c1_p5_cmd_full                          =>  c1_p5_cmd_full,
   c1_p5_rd_clk                            =>  c1_p5_rd_clk,
   c1_p5_rd_en                             =>  c1_p5_rd_en,
   c1_p5_rd_data                           =>  c1_p5_rd_data,
   c1_p5_rd_full                           =>  c1_p5_rd_full,
   c1_p5_rd_empty                          =>  c1_p5_rd_empty,
   c1_p5_rd_count                          =>  c1_p5_rd_count,
   c1_p5_rd_overflow                       =>  c1_p5_rd_overflow,
   c1_p5_rd_error                          =>  c1_p5_rd_error,

    c3_sys_clk_p  =>         c3_sys_clk_p,
  c3_sys_clk_n    =>       c3_sys_clk_n,
  c3_sys_rst_n    =>       c3_sys_rst_n,                        

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
  
  mcb3_dram_dm  =>       mcb3_dram_dm,
    c3_clk0	=>	        c3_clk0,
  c3_rst0		=>        c3_rst0,
	
 
  c3_calib_done      =>    c3_calib_done,
     mcb3_rzq        =>            rzq3,
	
     mcb3_zio        =>            zio3,
	
     c3_p0_cmd_clk                           =>  c3_p0_cmd_clk,
   c3_p0_cmd_en                            =>  c3_p0_cmd_en,
   c3_p0_cmd_instr                         =>  c3_p0_cmd_instr,
   c3_p0_cmd_bl                            =>  c3_p0_cmd_bl,
   c3_p0_cmd_byte_addr                     =>  c3_p0_cmd_byte_addr,
   c3_p0_cmd_empty                         =>  c3_p0_cmd_empty,
   c3_p0_cmd_full                          =>  c3_p0_cmd_full,
   c3_p0_wr_clk                            =>  c3_p0_wr_clk,
   c3_p0_wr_en                             =>  c3_p0_wr_en,
   c3_p0_wr_mask                           =>  c3_p0_wr_mask,
   c3_p0_wr_data                           =>  c3_p0_wr_data,
   c3_p0_wr_full                           =>  c3_p0_wr_full,
   c3_p0_wr_empty                          =>  c3_p0_wr_empty,
   c3_p0_wr_count                          =>  c3_p0_wr_count,
   c3_p0_wr_underrun                       =>  c3_p0_wr_underrun,
   c3_p0_wr_error                          =>  c3_p0_wr_error,
   c3_p0_rd_clk                            =>  c3_p0_rd_clk,
   c3_p0_rd_en                             =>  c3_p0_rd_en,
   c3_p0_rd_data                           =>  c3_p0_rd_data,
   c3_p0_rd_full                           =>  c3_p0_rd_full,
   c3_p0_rd_empty                          =>  c3_p0_rd_empty,
   c3_p0_rd_count                          =>  c3_p0_rd_count,
   c3_p0_rd_overflow                       =>  c3_p0_rd_overflow,
   c3_p0_rd_error                          =>  c3_p0_rd_error,
   c3_p1_cmd_clk                           =>  c3_p1_cmd_clk,
   c3_p1_cmd_en                            =>  c3_p1_cmd_en,
   c3_p1_cmd_instr                         =>  c3_p1_cmd_instr,
   c3_p1_cmd_bl                            =>  c3_p1_cmd_bl,
   c3_p1_cmd_byte_addr                     =>  c3_p1_cmd_byte_addr,
   c3_p1_cmd_empty                         =>  c3_p1_cmd_empty,
   c3_p1_cmd_full                          =>  c3_p1_cmd_full,
   c3_p1_wr_clk                            =>  c3_p1_wr_clk,
   c3_p1_wr_en                             =>  c3_p1_wr_en,
   c3_p1_wr_mask                           =>  c3_p1_wr_mask,
   c3_p1_wr_data                           =>  c3_p1_wr_data,
   c3_p1_wr_full                           =>  c3_p1_wr_full,
   c3_p1_wr_empty                          =>  c3_p1_wr_empty,
   c3_p1_wr_count                          =>  c3_p1_wr_count,
   c3_p1_wr_underrun                       =>  c3_p1_wr_underrun,
   c3_p1_wr_error                          =>  c3_p1_wr_error,
   c3_p1_rd_clk                            =>  c3_p1_rd_clk,
   c3_p1_rd_en                             =>  c3_p1_rd_en,
   c3_p1_rd_data                           =>  c3_p1_rd_data,
   c3_p1_rd_full                           =>  c3_p1_rd_full,
   c3_p1_rd_empty                          =>  c3_p1_rd_empty,
   c3_p1_rd_count                          =>  c3_p1_rd_count,
   c3_p1_rd_overflow                       =>  c3_p1_rd_overflow,
   c3_p1_rd_error                          =>  c3_p1_rd_error,
   c3_p2_cmd_clk                           =>  c3_p2_cmd_clk,
   c3_p2_cmd_en                            =>  c3_p2_cmd_en,
   c3_p2_cmd_instr                         =>  c3_p2_cmd_instr,
   c3_p2_cmd_bl                            =>  c3_p2_cmd_bl,
   c3_p2_cmd_byte_addr                     =>  c3_p2_cmd_byte_addr,
   c3_p2_cmd_empty                         =>  c3_p2_cmd_empty,
   c3_p2_cmd_full                          =>  c3_p2_cmd_full,
   c3_p2_rd_clk                            =>  c3_p2_rd_clk,
   c3_p2_rd_en                             =>  c3_p2_rd_en,
   c3_p2_rd_data                           =>  c3_p2_rd_data,
   c3_p2_rd_full                           =>  c3_p2_rd_full,
   c3_p2_rd_empty                          =>  c3_p2_rd_empty,
   c3_p2_rd_count                          =>  c3_p2_rd_count,
   c3_p2_rd_overflow                       =>  c3_p2_rd_overflow,
   c3_p2_rd_error                          =>  c3_p2_rd_error,
   c3_p3_cmd_clk                           =>  c3_p3_cmd_clk,
   c3_p3_cmd_en                            =>  c3_p3_cmd_en,
   c3_p3_cmd_instr                         =>  c3_p3_cmd_instr,
   c3_p3_cmd_bl                            =>  c3_p3_cmd_bl,
   c3_p3_cmd_byte_addr                     =>  c3_p3_cmd_byte_addr,
   c3_p3_cmd_empty                         =>  c3_p3_cmd_empty,
   c3_p3_cmd_full                          =>  c3_p3_cmd_full,
   c3_p3_rd_clk                            =>  c3_p3_rd_clk,
   c3_p3_rd_en                             =>  c3_p3_rd_en,
   c3_p3_rd_data                           =>  c3_p3_rd_data,
   c3_p3_rd_full                           =>  c3_p3_rd_full,
   c3_p3_rd_empty                          =>  c3_p3_rd_empty,
   c3_p3_rd_count                          =>  c3_p3_rd_count,
   c3_p3_rd_overflow                       =>  c3_p3_rd_overflow,
   c3_p3_rd_error                          =>  c3_p3_rd_error,
   c3_p4_cmd_clk                           =>  c3_p4_cmd_clk,
   c3_p4_cmd_en                            =>  c3_p4_cmd_en,
   c3_p4_cmd_instr                         =>  c3_p4_cmd_instr,
   c3_p4_cmd_bl                            =>  c3_p4_cmd_bl,
   c3_p4_cmd_byte_addr                     =>  c3_p4_cmd_byte_addr,
   c3_p4_cmd_empty                         =>  c3_p4_cmd_empty,
   c3_p4_cmd_full                          =>  c3_p4_cmd_full,
   c3_p4_rd_clk                            =>  c3_p4_rd_clk,
   c3_p4_rd_en                             =>  c3_p4_rd_en,
   c3_p4_rd_data                           =>  c3_p4_rd_data,
   c3_p4_rd_full                           =>  c3_p4_rd_full,
   c3_p4_rd_empty                          =>  c3_p4_rd_empty,
   c3_p4_rd_count                          =>  c3_p4_rd_count,
   c3_p4_rd_overflow                       =>  c3_p4_rd_overflow,
   c3_p4_rd_error                          =>  c3_p4_rd_error,
   c3_p5_cmd_clk                           =>  c3_p5_cmd_clk,
   c3_p5_cmd_en                            =>  c3_p5_cmd_en,
   c3_p5_cmd_instr                         =>  c3_p5_cmd_instr,
   c3_p5_cmd_bl                            =>  c3_p5_cmd_bl,
   c3_p5_cmd_byte_addr                     =>  c3_p5_cmd_byte_addr,
   c3_p5_cmd_empty                         =>  c3_p5_cmd_empty,
   c3_p5_cmd_full                          =>  c3_p5_cmd_full,
   c3_p5_rd_clk                            =>  c3_p5_rd_clk,
   c3_p5_rd_en                             =>  c3_p5_rd_en,
   c3_p5_rd_data                           =>  c3_p5_rd_data,
   c3_p5_rd_full                           =>  c3_p5_rd_full,
   c3_p5_rd_empty                          =>  c3_p5_rd_empty,
   c3_p5_rd_count                          =>  c3_p5_rd_count,
   c3_p5_rd_overflow                       =>  c3_p5_rd_overflow,
   c3_p5_rd_error                          =>  c3_p5_rd_error
);

-- INST_TAG_END ------ End INSTANTIATION Template ------------

-- You must compile the wrapper file mig_36_1.vhd when simulating
-- the core, mig_36_1. When compiling the wrapper file, be sure to
-- reference the XilinxCoreLib VHDL simulation library. For detailed
-- instructions, please refer to the "CORE Generator Help".

