----------------------------------------------------------------------------------
-- Company: Digilent Ro
-- Engineer: Elod Gyorgy
-- 
-- Create Date:    18:36:17 01/20/2011 
-- Design Name: 
-- Module Name:    FBCtl - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: FBCtl is a frame buffer controller using a DDR2 memory for
-- physical storage. The controller allocates two separate frame buffers each one
-- with a stream write FIFO interface for video sources and one stream read
-- only port for a video consumer. MSEL_I configures the read port to stream data
-- from either or both frame buffers.
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
use IEEE.std_logic_unsigned.all;
use IEEE.std_logic_arith.all;

library digilent;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity FBCtl is
	generic (
		DEBUG_EN                : integer := 0;
		COLORDEPTH					: integer := 16;
----------------------------------------------------------------------------------
-- Copied from <mig_component_name.vhd>/generic
----------------------------------------------------------------------------------
		C3_P0_MASK_SIZE           : integer := 4;
		C3_P0_DATA_PORT_SIZE      : integer := 32;
		C3_P1_MASK_SIZE           : integer := 4;
		C3_P1_DATA_PORT_SIZE      : integer := 32;
		C3_MEMCLK_PERIOD        : integer := 3000; 
		C3_RST_ACT_LOW          : integer := 0; 
		C3_INPUT_CLK_TYPE       : string := "SINGLE_ENDED"; 
		C3_CALIB_SOFT_IP        : string := "TRUE"; 
		C3_SIMULATION           : string := "FALSE"; 
		C3_MEM_ADDR_ORDER       : string := "ROW_BANK_COLUMN"; 
		C3_NUM_DQ_PINS          : integer := 16; 
		C3_MEM_ADDR_WIDTH       : integer := 13; 
		C3_MEM_BANKADDR_WIDTH   : integer := 3	
	);
	port (
------------------------------------------------------------------------------------
-- Frame Buffer
------------------------------------------------------------------------------------
		RDY_O : out STD_LOGIC;
------------------------------------------------------------------------------------
-- Title : Port C - read only
-- Description: Supports straightforward read functionality for whole frames on a
-- constant basis. Connect to Display Controller
------------------------------------------------------------------------------------
		ENC : in  STD_LOGIC; --port enable
		RSTC_I : in  STD_LOGIC; --asynchronous port reset
		DOC : out  STD_LOGIC_VECTOR (COLORDEPTH - 1 downto 0); --data output
		CLKC : in  STD_LOGIC; --port clock
		RD_MODE: in STD_LOGIC_VECTOR(1 downto 0);
------------------------------------------------------------------------------------
-- Title : Port B - write only
------------------------------------------------------------------------------------
		ENB : in  STD_LOGIC; --port enable
		RSTB_I : in  STD_LOGIC; --asynchronous port reset
		DIB : in  STD_LOGIC_VECTOR (COLORDEPTH - 1 downto 0); --data output
		CLKB : in  STD_LOGIC; --port clock
------------------------------------------------------------------------------------
-- Title : Port A - write only
------------------------------------------------------------------------------------
		ENA : in  STD_LOGIC; --port enable
		RSTA_I : in  STD_LOGIC; --asynchronous port reset
		DIA : in  STD_LOGIC_VECTOR (COLORDEPTH - 1 downto 0); --data output
		CLKA : in  STD_LOGIC; --port clock				
----------------------------------------------------------------------------------
-- High-speed PLL clock interface/reset
----------------------------------------------------------------------------------	
      ddr2clk_2x       	: in std_logic;
      ddr2clk_2x_180   	: in std_logic;
      pll_ce_0        	: in std_logic;
      pll_ce_90       	: in std_logic;
      pll_lock        	: in std_logic;
      async_rst       	: in std_logic;
		mcb_drp_clk     	: in  std_logic;
----------------------------------------------------------------------------------
-- DDR2 Interface
----------------------------------------------------------------------------------
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
		mcb3_dram_dqs                           : inout  std_logic;
		mcb3_dram_dqs_n                         : inout  std_logic;
		mcb3_dram_ck                            : out std_logic;
		mcb3_dram_ck_n                          : out std_logic
  );
end FBCtl;

architecture Behavioral of FBCtl is
----------------------------------------------------------------------------------
-- MIG-generated constants
----------------------------------------------------------------------------------
----------------------------------------------------------------------------------
-- Copied from <mig_component_name.vhd>/constants
----------------------------------------------------------------------------------
  constant C3_ARB_NUM_TIME_SLOTS   : integer := 12; 
   constant C3_ARB_TIME_SLOT_0      : bit_vector(11 downto 0) := o"3120"; 
   constant C3_ARB_TIME_SLOT_1      : bit_vector(11 downto 0) := o"3210"; 
   constant C3_ARB_TIME_SLOT_2      : bit_vector(11 downto 0) := o"2103"; 
   constant C3_ARB_TIME_SLOT_3      : bit_vector(11 downto 0) := o"1032"; 
   constant C3_ARB_TIME_SLOT_4      : bit_vector(11 downto 0) := o"0321"; 
   constant C3_ARB_TIME_SLOT_5      : bit_vector(11 downto 0) := o"3210"; 
   constant C3_ARB_TIME_SLOT_6      : bit_vector(11 downto 0) := o"2103"; 
   constant C3_ARB_TIME_SLOT_7      : bit_vector(11 downto 0) := o"1032"; 
   constant C3_ARB_TIME_SLOT_8      : bit_vector(11 downto 0) := o"0321"; 
   constant C3_ARB_TIME_SLOT_9      : bit_vector(11 downto 0) := o"3210"; 
   constant C3_ARB_TIME_SLOT_10     : bit_vector(11 downto 0) := o"2103"; 
   constant C3_ARB_TIME_SLOT_11     : bit_vector(11 downto 0) := o"1032"; 
   constant C3_MEM_TRAS             : integer := 42500; 
   constant C3_MEM_TRCD             : integer := 12500; 
   constant C3_MEM_TREFI            : integer := 7800000; 
   constant C3_MEM_TRFC             : integer := 127500; 
   constant C3_MEM_TRP              : integer := 12500; 
   constant C3_MEM_TWR              : integer := 15000; 
   constant C3_MEM_TRTP             : integer := 7500; 
   constant C3_MEM_TWTR             : integer := 7500; 
   constant C3_MEM_TYPE             : string := "DDR2"; 
   constant C3_MEM_DENSITY          : string := "1Gb"; 
   constant C3_MEM_BURST_LEN        : integer := 4; 
   constant C3_MEM_CAS_LATENCY      : integer := 5; 
   constant C3_MEM_NUM_COL_BITS     : integer := 10; 
   constant C3_MEM_DDR1_2_ODS       : string := "FULL"; 
   constant C3_MEM_DDR2_RTT         : string := "50OHMS"; 
   constant C3_MEM_DDR2_DIFF_DQS_EN  : string := "YES"; 
   constant C3_MEM_DDR2_3_PA_SR     : string := "FULL"; 
   constant C3_MEM_DDR2_3_HIGH_TEMP_SR  : string := "NORMAL"; 
   constant C3_MEM_DDR3_CAS_LATENCY  : integer := 6; 
   constant C3_MEM_DDR3_ODS         : string := "DIV6"; 
   constant C3_MEM_DDR3_RTT         : string := "DIV2"; 
   constant C3_MEM_DDR3_CAS_WR_LATENCY  : integer := 5; 
   constant C3_MEM_DDR3_AUTO_SR     : string := "ENABLED"; 
   constant C3_MEM_DDR3_DYN_WRT_ODT  : string := "OFF"; 
   constant C3_MEM_MOBILE_PA_SR     : string := "FULL"; 
   constant C3_MEM_MDDR_ODS         : string := "FULL"; 
   constant C3_MC_CALIB_BYPASS      : string := "NO"; 
   constant C3_MC_CALIBRATION_MODE  : string := "CALIBRATION"; 
   constant C3_MC_CALIBRATION_DELAY  : string := "HALF"; 
   constant C3_SKIP_IN_TERM_CAL     : integer := 0; 
   constant C3_SKIP_DYNAMIC_CAL     : integer := 0; 
   constant C3_LDQSP_TAP_DELAY_VAL  : integer := 0; 
   constant C3_LDQSN_TAP_DELAY_VAL  : integer := 0; 
   constant C3_UDQSP_TAP_DELAY_VAL  : integer := 0; 
   constant C3_UDQSN_TAP_DELAY_VAL  : integer := 0; 
   constant C3_DQ0_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ1_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ2_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ3_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ4_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ5_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ6_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ7_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ8_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ9_TAP_DELAY_VAL    : integer := 0; 
   constant C3_DQ10_TAP_DELAY_VAL   : integer := 0; 
   constant C3_DQ11_TAP_DELAY_VAL   : integer := 0; 
   constant C3_DQ12_TAP_DELAY_VAL   : integer := 0; 
   constant C3_DQ13_TAP_DELAY_VAL   : integer := 0; 
   constant C3_DQ14_TAP_DELAY_VAL   : integer := 0; 
   constant C3_DQ15_TAP_DELAY_VAL   : integer := 0; 

	
component memc3_wrapper is
	generic (
      C_MEMCLK_PERIOD      	: integer;
      C_CALIB_SOFT_IP      	: string;
		C_SIMULATION         	: string;
      C_P0_MASK_SIZE       	: integer;
      C_P0_DATA_PORT_SIZE   	: integer;
      C_P1_MASK_SIZE       	: integer;
      C_P1_DATA_PORT_SIZE   	: integer;

      C_ARB_NUM_TIME_SLOTS   	: integer;
      C_ARB_TIME_SLOT_0    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_1    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_2    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_3    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_4    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_5    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_6    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_7    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_8    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_9    : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_10   : bit_vector(11 downto 0);
      C_ARB_TIME_SLOT_11   : bit_vector(11 downto 0);

      C_MEM_TRAS           	: integer;
      C_MEM_TRCD           	: integer;
      C_MEM_TREFI          	: integer;
      C_MEM_TRFC           	: integer;
      C_MEM_TRP           		: integer;
      C_MEM_TWR            	: integer;
      C_MEM_TRTP           	: integer;
      C_MEM_TWTR           	: integer;

      C_MEM_ADDR_ORDER     	: string;
      C_NUM_DQ_PINS        	: integer;
      C_MEM_TYPE           	: string;
      C_MEM_DENSITY        	: string;
      C_MEM_BURST_LEN      	: integer;
      C_MEM_CAS_LATENCY    	: integer;
      C_MEM_ADDR_WIDTH     	: integer;
      C_MEM_BANKADDR_WIDTH   	: integer;
      C_MEM_NUM_COL_BITS   	: integer;

      C_MEM_DDR1_2_ODS     		: string;
      C_MEM_DDR2_RTT       		: string;
      C_MEM_DDR2_DIFF_DQS_EN   	: string;
      C_MEM_DDR2_3_PA_SR   		: string;
      C_MEM_DDR2_3_HIGH_TEMP_SR  : string;

      C_MEM_DDR3_CAS_LATENCY   : integer;
      C_MEM_DDR3_ODS       : string;
      C_MEM_DDR3_RTT       : string;
      C_MEM_DDR3_CAS_WR_LATENCY   : integer;
      C_MEM_DDR3_AUTO_SR   : string;
      C_MEM_DDR3_DYN_WRT_ODT   : string;
      C_MEM_MOBILE_PA_SR   : string;
      C_MEM_MDDR_ODS       : string;
      C_MC_CALIB_BYPASS    : string;
      C_MC_CALIBRATION_MODE   : string;
      C_MC_CALIBRATION_DELAY   : string;
      C_SKIP_IN_TERM_CAL   : integer;
      C_SKIP_DYNAMIC_CAL   : integer;
      C_LDQSP_TAP_DELAY_VAL   : integer;
      C_LDQSN_TAP_DELAY_VAL   : integer;
      C_UDQSP_TAP_DELAY_VAL   : integer;
      C_UDQSN_TAP_DELAY_VAL   : integer;
      C_DQ0_TAP_DELAY_VAL   : integer;
      C_DQ1_TAP_DELAY_VAL   : integer;
      C_DQ2_TAP_DELAY_VAL   : integer;
      C_DQ3_TAP_DELAY_VAL   : integer;
      C_DQ4_TAP_DELAY_VAL   : integer;
      C_DQ5_TAP_DELAY_VAL   : integer;
      C_DQ6_TAP_DELAY_VAL   : integer;
      C_DQ7_TAP_DELAY_VAL   : integer;
      C_DQ8_TAP_DELAY_VAL   : integer;
      C_DQ9_TAP_DELAY_VAL   : integer;
      C_DQ10_TAP_DELAY_VAL   : integer;
      C_DQ11_TAP_DELAY_VAL   : integer;
      C_DQ12_TAP_DELAY_VAL   : integer;
      C_DQ13_TAP_DELAY_VAL   : integer;
      C_DQ14_TAP_DELAY_VAL   : integer;
      C_DQ15_TAP_DELAY_VAL   : integer
      );
	port (
	
      -- high-speed PLL clock interface
      sysclk_2x       : in std_logic;
      sysclk_2x_180   : in std_logic;
      pll_ce_0        : in std_logic;
      pll_ce_90       : in std_logic;
      pll_lock        : in std_logic;
      async_rst       : in std_logic;

      --User Port0 Interface Signals

      p0_cmd_clk                            : in std_logic;
      p0_cmd_en                             : in std_logic;
      p0_cmd_instr                          : in std_logic_vector(2 downto 0) ;
      p0_cmd_bl                             : in std_logic_vector(5 downto 0) ;
      p0_cmd_byte_addr                      : in std_logic_vector(29 downto 0) ;
      p0_cmd_empty                          : out std_logic;
      p0_cmd_full                           : out std_logic;

      -- Data Wr Port signals
      p0_wr_clk                             : in std_logic;
      p0_wr_en                              : in std_logic;
      p0_wr_mask                            : in std_logic_vector(C_P0_MASK_SIZE - 1 downto 0) ;
      p0_wr_data                            : in std_logic_vector(C_P0_DATA_PORT_SIZE - 1 downto 0) ;
      p0_wr_full                            : out std_logic;
      p0_wr_empty                           : out std_logic;
      p0_wr_count                           : out std_logic_vector(6 downto 0) ;
      p0_wr_underrun                        : out std_logic;
      p0_wr_error                           : out std_logic;

      --Data Rd Port signals
      p0_rd_clk                             : in std_logic;
      p0_rd_en                              : in std_logic;
      p0_rd_data                            : out std_logic_vector(C_P0_DATA_PORT_SIZE - 1 downto 0) ;
      p0_rd_full                            : out std_logic;
      p0_rd_empty                           : out std_logic;
      p0_rd_count                           : out std_logic_vector(6 downto 0) ;
      p0_rd_overflow                        : out std_logic;
      p0_rd_error                           : out std_logic;

      --User Port1 Interface Signals

      p1_cmd_clk                            : in std_logic;
      p1_cmd_en                             : in std_logic;
      p1_cmd_instr                          : in std_logic_vector(2 downto 0) ;
      p1_cmd_bl                             : in std_logic_vector(5 downto 0) ;
      p1_cmd_byte_addr                      : in std_logic_vector(29 downto 0) ;
      p1_cmd_empty                          : out std_logic;
      p1_cmd_full                           : out std_logic;

      -- Data Wr Port signals
      p1_wr_clk                             : in std_logic;
      p1_wr_en                              : in std_logic;
      p1_wr_mask                            : in std_logic_vector(C_P1_MASK_SIZE - 1 downto 0) ;
      p1_wr_data                            : in std_logic_vector(C_P1_DATA_PORT_SIZE - 1 downto 0) ;
      p1_wr_full                            : out std_logic;
      p1_wr_empty                           : out std_logic;
      p1_wr_count                           : out std_logic_vector(6 downto 0) ;
      p1_wr_underrun                        : out std_logic;
      p1_wr_error                           : out std_logic;

      --Data Rd Port signals
      p1_rd_clk                             : in std_logic;
      p1_rd_en                              : in std_logic;
      p1_rd_data                            : out std_logic_vector(C_P1_DATA_PORT_SIZE - 1 downto 0) ;
      p1_rd_full                            : out std_logic;
      p1_rd_empty                           : out std_logic;
      p1_rd_count                           : out std_logic_vector(6 downto 0) ;
      p1_rd_overflow                        : out std_logic;
      p1_rd_error                           : out std_logic;
		
      --User Port2 Interface Signals

      p2_cmd_clk                            : in std_logic;
      p2_cmd_en                             : in std_logic;
      p2_cmd_instr                          : in std_logic_vector(2 downto 0) ;
      p2_cmd_bl                             : in std_logic_vector(5 downto 0) ;
      p2_cmd_byte_addr                      : in std_logic_vector(29 downto 0) ;
      p2_cmd_empty                          : out std_logic;
      p2_cmd_full                           : out std_logic;

      --Data Wr Port signals
      p2_wr_clk                             : in std_logic;
      p2_wr_en                              : in std_logic;
      p2_wr_mask                            : in std_logic_vector(3 downto 0) ;
      p2_wr_data                            : in std_logic_vector(31 downto 0) ;
      p2_wr_full                            : out std_logic;
      p2_wr_empty                           : out std_logic;
      p2_wr_count                           : out std_logic_vector(6 downto 0) ;
      p2_wr_underrun                        : out std_logic;
      p2_wr_error                           : out std_logic;

      --User Port3 Interface Signals

      p3_cmd_clk                            : in std_logic;
      p3_cmd_en                             : in std_logic;
      p3_cmd_instr                          : in std_logic_vector(2 downto 0) ;
      p3_cmd_bl                             : in std_logic_vector(5 downto 0) ;
      p3_cmd_byte_addr                      : in std_logic_vector(29 downto 0) ;
      p3_cmd_empty                          : out std_logic;
      p3_cmd_full                           : out std_logic;

      --Data Rd Port signals
      p3_rd_clk                             : in std_logic;
      p3_rd_en                              : in std_logic;
      p3_rd_data                            : out std_logic_vector(31 downto 0) ;
      p3_rd_full                            : out std_logic;
      p3_rd_empty                           : out std_logic;
      p3_rd_count                           : out std_logic_vector(6 downto 0) ;
      p3_rd_overflow                        : out std_logic;
      p3_rd_error                           : out std_logic;

      -- memory interface signals
      mcb3_dram_ck          : out std_logic;
      mcb3_dram_ck_n        : out std_logic;
      mcb3_dram_a           : out std_logic_vector(C_MEM_ADDR_WIDTH-1 downto 0);
      mcb3_dram_ba          : out std_logic_vector(C_MEM_BANKADDR_WIDTH-1 downto 0);
      mcb3_dram_ras_n       : out std_logic;
      mcb3_dram_cas_n       : out std_logic;
      mcb3_dram_we_n        : out std_logic;
      mcb3_dram_odt         : out std_logic;
--      mcb3_dram_odt         : out std_logic;
      mcb3_dram_cke         : out std_logic;
      mcb3_dram_dq          : inout std_logic_vector(C_NUM_DQ_PINS-1 downto 0);
      mcb3_dram_dqs         : inout std_logic;
		mcb3_dram_dqs_n : inout std_logic;


		mcb3_dram_udqs   : inout std_logic;
		mcb3_dram_udm    : out std_logic; 
	
		mcb3_dram_udqs_n : inout std_logic;
		mcb3_dram_dm : out std_logic;

      mcb3_rzq                             : inout std_logic;
      mcb3_zio                              : inout std_logic;

      -- Calibration signals
      mcb_drp_clk            : in std_logic;
      calib_done           : out std_logic;
      selfrefresh_enter    : in std_logic;
      selfrefresh_mode     : out std_logic
	);
end component memc3_wrapper;
------------------------------------------------------------------------------------
-- Debug components
------------------------------------------------------------------------------------
	component icon
	 port (
		CONTROL0 : inout std_logic_vector(35 downto 0);
		CONTROL1 : inout std_logic_vector(35 downto 0)
		);
	end component;

	component ila
	 port (
	  CLK     : in    std_logic;
	  DATA    : in    std_logic_vector(255 downto 0);
	  TRIG0   : in    std_logic_vector(1 downto 0);
	  CONTROL : inout std_logic_vector(35 downto 0)
	  );
	end component;

	component vio
	 port (
		CONTROL : inout std_logic_vector(35 downto 0);
		ASYNC_OUT: out std_logic_vector(6 downto 0)
		);
	end component;

	attribute syn_black_box          : boolean;
	attribute syn_noprune            : boolean;
	attribute syn_black_box of icon  : component is TRUE;
	attribute syn_noprune of icon    : component is TRUE;
	attribute syn_black_box of ila   : component is TRUE;
	attribute syn_noprune of ila     : component is TRUE;
	attribute syn_black_box of vio   : component is TRUE;
	attribute syn_noprune of vio     : component is TRUE;
----------------------------------------------------------------------------------
-- MCB Commands
---------------------------------------------------------------------------------- 
	constant MCB_CMD_RD : std_logic_vector(2 downto 0) := "001";
	constant MCB_CMD_WR : std_logic_vector(2 downto 0) := "000";
	
	constant RD_BATCH : natural := 16;
	constant WR_BATCH : natural := 32;
	--memory address space reserved for a video memory (one for each camera)
	constant VMEM_SIZE : natural := 2**23; 
	type stateRd_type is (stRdIdle, stRdCmd, stRdCmdWait, stRdErr); 
   signal stateRd, nstateRd : stateRd_type;
	type stateWr_type is (stWrIdle, stWrCmd, stWrCmdWait, stWrErr); 
   signal stateWrA, nstateWrA : stateWr_type;
   signal stateWrB, nstateWrB : stateWr_type;
----------------------------------------------------------------------------------
-- Internal signals
---------------------------------------------------------------------------------- 	
	signal calib_done        	: std_logic;
	signal p3_cmd_clk        	: std_logic;
   signal p3_cmd_en          	: std_logic;
   signal p3_cmd_instr        : std_logic_vector(2 downto 0);
	signal p3_cmd_bl           : std_logic_vector(5 downto 0);
	signal p3_cmd_byte_addr    : std_logic_vector(29 downto 0);
	signal p3_cmd_empty        : std_logic;
	signal p3_cmd_full         : std_logic;
	signal p3_rd_clk           : std_logic;
	signal p3_rd_en            : std_logic;
	signal p3_rd_data          : std_logic_vector(31 downto 0) ;
	signal p3_rd_full          : std_logic;
	signal p3_rd_empty         : std_logic;
	signal p3_rd_count         : std_logic_vector(6 downto 0) ;
	signal p3_rd_overflow      : std_logic;
	signal p3_rd_error         : std_logic;

	
	signal p1_cmd_clk        	: std_logic;
   signal p1_cmd_en          	: std_logic;
   signal p1_cmd_instr        : std_logic_vector(2 downto 0);
	signal p1_cmd_bl           : std_logic_vector(5 downto 0);
	signal p1_cmd_byte_addr    : std_logic_vector(29 downto 0);
	signal p1_cmd_empty        : std_logic;
	signal p1_cmd_full         : std_logic;
	signal p1_wr_clk           : std_logic;
	signal p1_wr_en            : std_logic;
	signal p1_wr_data          : std_logic_vector(C3_P1_DATA_PORT_SIZE - 1 downto 0) ;
	signal p1_wr_mask				: std_logic_vector(C3_P1_MASK_SIZE - 1 downto 0);
	signal p1_wr_full          : std_logic;
	signal p1_wr_empty         : std_logic;
	signal p1_wr_count         : std_logic_vector(6 downto 0) ;
	signal p1_wr_underrun     : std_logic;
	signal p1_wr_error         : std_logic;

	signal p2_cmd_clk        	: std_logic;
   signal p2_cmd_en          	: std_logic;
   signal p2_cmd_instr        : std_logic_vector(2 downto 0);
	signal p2_cmd_bl           : std_logic_vector(5 downto 0);
	signal p2_cmd_byte_addr    : std_logic_vector(29 downto 0);
	signal p2_cmd_empty        : std_logic;
	signal p2_cmd_full         : std_logic;
	signal p2_wr_clk           : std_logic;
	signal p2_wr_en            : std_logic;
	signal p2_wr_data          : std_logic_vector(31 downto 0) ;
	signal p2_wr_mask				: std_logic_vector(3 downto 0);
	signal p2_wr_full          : std_logic;
	signal p2_wr_empty         : std_logic;
	signal p2_wr_count         : std_logic_vector(6 downto 0) ;
	signal p2_wr_underrun     : std_logic;
	signal p2_wr_error         : std_logic;	
	
	signal pa_wr_cnt, pb_wr_cnt : natural := 0;
	signal pa_wr_addr, pb_wr_addr : natural range 0 to VMEM_SIZE-1 := 0;
	signal pa_wr_data_sel, pa_int_rst, pb_wr_data_sel, pb_int_rst : std_logic;

	signal pc_rd_addr1, pc_rd_addr2, pc_rd_addr3	: natural := 0;
	signal fVMemSource : std_logic := '0';
	signal rd_data_sel : std_logic;
	signal int_rd_mode : std_logic_vector(1 downto 0);
	
	signal RstB, RstA, RstC, SRstC, SRstB, SRstA, SCalibDoneA, SCalibDoneB : std_logic;
begin
----------------------------------------------------------------------------------
-- MCB Instantiation
----------------------------------------------------------------------------------
 mcb_ddr2 : memc3_wrapper
	generic map (
		C_MEMCLK_PERIOD                   => C3_MEMCLK_PERIOD,
		C_CALIB_SOFT_IP                   => C3_CALIB_SOFT_IP,
		C_SIMULATION                      => C3_SIMULATION,
		C_P0_MASK_SIZE                    => C3_P0_MASK_SIZE,
		C_P0_DATA_PORT_SIZE               => C3_P0_DATA_PORT_SIZE,
		C_P1_MASK_SIZE                    => C3_P1_MASK_SIZE,
		C_P1_DATA_PORT_SIZE               => C3_P1_DATA_PORT_SIZE,
		C_ARB_NUM_TIME_SLOTS              => C3_ARB_NUM_TIME_SLOTS,
		C_ARB_TIME_SLOT_0                 => C3_ARB_TIME_SLOT_0,
		C_ARB_TIME_SLOT_1                 => C3_ARB_TIME_SLOT_1,
		C_ARB_TIME_SLOT_2                 => C3_ARB_TIME_SLOT_2,
		C_ARB_TIME_SLOT_3                 => C3_ARB_TIME_SLOT_3,
		C_ARB_TIME_SLOT_4                 => C3_ARB_TIME_SLOT_4,
		C_ARB_TIME_SLOT_5                 => C3_ARB_TIME_SLOT_5,
		C_ARB_TIME_SLOT_6                 => C3_ARB_TIME_SLOT_6,
		C_ARB_TIME_SLOT_7                 => C3_ARB_TIME_SLOT_7,
		C_ARB_TIME_SLOT_8                 => C3_ARB_TIME_SLOT_8,
		C_ARB_TIME_SLOT_9                 => C3_ARB_TIME_SLOT_9,
		C_ARB_TIME_SLOT_10                => C3_ARB_TIME_SLOT_10,
		C_ARB_TIME_SLOT_11                => C3_ARB_TIME_SLOT_11,
		C_MEM_TRAS                        => C3_MEM_TRAS,
		C_MEM_TRCD                        => C3_MEM_TRCD,
		C_MEM_TREFI                       => C3_MEM_TREFI,
		C_MEM_TRFC                        => C3_MEM_TRFC,
		C_MEM_TRP                         => C3_MEM_TRP,
		C_MEM_TWR                         => C3_MEM_TWR,
		C_MEM_TRTP                        => C3_MEM_TRTP,
		C_MEM_TWTR                        => C3_MEM_TWTR,
		C_MEM_ADDR_ORDER                  => C3_MEM_ADDR_ORDER,
		C_NUM_DQ_PINS                     => C3_NUM_DQ_PINS,
		C_MEM_TYPE                        => C3_MEM_TYPE,
		C_MEM_DENSITY                     => C3_MEM_DENSITY,
		C_MEM_BURST_LEN                   => C3_MEM_BURST_LEN,
		C_MEM_CAS_LATENCY                 => C3_MEM_CAS_LATENCY,
		C_MEM_ADDR_WIDTH                  => C3_MEM_ADDR_WIDTH,
		C_MEM_BANKADDR_WIDTH              => C3_MEM_BANKADDR_WIDTH,
		C_MEM_NUM_COL_BITS                => C3_MEM_NUM_COL_BITS,
		C_MEM_DDR1_2_ODS                  => C3_MEM_DDR1_2_ODS,
		C_MEM_DDR2_RTT                    => C3_MEM_DDR2_RTT,
		C_MEM_DDR2_DIFF_DQS_EN            => C3_MEM_DDR2_DIFF_DQS_EN,
		C_MEM_DDR2_3_PA_SR                => C3_MEM_DDR2_3_PA_SR,
		C_MEM_DDR2_3_HIGH_TEMP_SR         => C3_MEM_DDR2_3_HIGH_TEMP_SR,
		C_MEM_DDR3_CAS_LATENCY            => C3_MEM_DDR3_CAS_LATENCY,
		C_MEM_DDR3_ODS                    => C3_MEM_DDR3_ODS,
		C_MEM_DDR3_RTT                    => C3_MEM_DDR3_RTT,
		C_MEM_DDR3_CAS_WR_LATENCY         => C3_MEM_DDR3_CAS_WR_LATENCY,
		C_MEM_DDR3_AUTO_SR                => C3_MEM_DDR3_AUTO_SR,
		C_MEM_DDR3_DYN_WRT_ODT            => C3_MEM_DDR3_DYN_WRT_ODT,
		C_MEM_MOBILE_PA_SR                => C3_MEM_MOBILE_PA_SR,
		C_MEM_MDDR_ODS                    => C3_MEM_MDDR_ODS,
		C_MC_CALIB_BYPASS                 => C3_MC_CALIB_BYPASS,
		C_MC_CALIBRATION_MODE             => C3_MC_CALIBRATION_MODE,
		C_MC_CALIBRATION_DELAY            => C3_MC_CALIBRATION_DELAY,
		C_SKIP_IN_TERM_CAL                => C3_SKIP_IN_TERM_CAL,
		C_SKIP_DYNAMIC_CAL                => C3_SKIP_DYNAMIC_CAL,
		C_LDQSP_TAP_DELAY_VAL             => C3_LDQSP_TAP_DELAY_VAL,
		C_LDQSN_TAP_DELAY_VAL             => C3_LDQSN_TAP_DELAY_VAL,
		C_UDQSP_TAP_DELAY_VAL             => C3_UDQSP_TAP_DELAY_VAL,
		C_UDQSN_TAP_DELAY_VAL             => C3_UDQSN_TAP_DELAY_VAL,
		C_DQ0_TAP_DELAY_VAL               => C3_DQ0_TAP_DELAY_VAL,
		C_DQ1_TAP_DELAY_VAL               => C3_DQ1_TAP_DELAY_VAL,
		C_DQ2_TAP_DELAY_VAL               => C3_DQ2_TAP_DELAY_VAL,
		C_DQ3_TAP_DELAY_VAL               => C3_DQ3_TAP_DELAY_VAL,
		C_DQ4_TAP_DELAY_VAL               => C3_DQ4_TAP_DELAY_VAL,
		C_DQ5_TAP_DELAY_VAL               => C3_DQ5_TAP_DELAY_VAL,
		C_DQ6_TAP_DELAY_VAL               => C3_DQ6_TAP_DELAY_VAL,
		C_DQ7_TAP_DELAY_VAL               => C3_DQ7_TAP_DELAY_VAL,
		C_DQ8_TAP_DELAY_VAL               => C3_DQ8_TAP_DELAY_VAL,
		C_DQ9_TAP_DELAY_VAL               => C3_DQ9_TAP_DELAY_VAL,
		C_DQ10_TAP_DELAY_VAL              => C3_DQ10_TAP_DELAY_VAL,
		C_DQ11_TAP_DELAY_VAL              => C3_DQ11_TAP_DELAY_VAL,
		C_DQ12_TAP_DELAY_VAL              => C3_DQ12_TAP_DELAY_VAL,
		C_DQ13_TAP_DELAY_VAL              => C3_DQ13_TAP_DELAY_VAL,
		C_DQ14_TAP_DELAY_VAL              => C3_DQ14_TAP_DELAY_VAL,
		C_DQ15_TAP_DELAY_VAL              => C3_DQ15_TAP_DELAY_VAL
   )
port map
(
   mcb3_dram_dq                         => mcb3_dram_dq,
   mcb3_dram_a                          => mcb3_dram_a,
   mcb3_dram_ba                         => mcb3_dram_ba,
   mcb3_dram_ras_n                      => mcb3_dram_ras_n,
   mcb3_dram_cas_n                      => mcb3_dram_cas_n,
   mcb3_dram_we_n                       => mcb3_dram_we_n,
   mcb3_dram_odt                        => mcb3_dram_odt,
   mcb3_dram_cke                        => mcb3_dram_cke,
   mcb3_dram_dm                         => mcb3_dram_dm,
   mcb3_dram_udqs                       => mcb3_dram_udqs,
   mcb3_dram_udqs_n                     => mcb3_dram_udqs_n,
   mcb3_rzq                             => mcb3_rzq,
   mcb3_zio                             => mcb3_zio,
   mcb3_dram_udm                        => mcb3_dram_udm,
   mcb3_dram_dqs                        => mcb3_dram_dqs,
   mcb3_dram_dqs_n                      => mcb3_dram_dqs_n,
   mcb3_dram_ck                         => mcb3_dram_ck,
   mcb3_dram_ck_n                       => mcb3_dram_ck_n,
	
   calib_done                      		=> calib_done,
	async_rst                       		=> async_rst,
   sysclk_2x                       		=> ddr2clk_2x,
   sysclk_2x_180                   		=> ddr2clk_2x_180,
   pll_ce_0                        		=> pll_ce_0,
   pll_ce_90                       		=> pll_ce_90,
   pll_lock                        		=> pll_lock,
   mcb_drp_clk                     		=> mcb_drp_clk,
	
   p0_cmd_clk                           =>  '0',
   p0_cmd_en                            =>  '0',
   p0_cmd_instr                         =>  (others => '0'),
   p0_cmd_bl                            =>  (others => '0'),
   p0_cmd_byte_addr                     =>  (others => '0'),
   p0_cmd_empty                         =>  open,
   p0_cmd_full                          =>  open,
   p0_rd_clk                            =>  '0',
   p0_rd_en                             =>  '0',
   p0_rd_data                           =>  open,
   p0_rd_full                           =>  open,
   p0_rd_empty                          =>  open,
   p0_rd_count                          =>  open,
   p0_rd_overflow                       =>  open,
   p0_rd_error                          =>  open,
   p0_wr_clk                            =>  '0',
   p0_wr_en                             =>  '0',
   p0_wr_mask                           =>  (others => '0'),
   p0_wr_data                           =>  (others => '0'),
   p0_wr_full                           =>  open,
   p0_wr_empty                          =>  open,
   p0_wr_count                          =>  open,
   p0_wr_underrun                       =>  open,
   p0_wr_error                          =>  open,	
	
   p1_cmd_clk                           =>  p1_cmd_clk,
   p1_cmd_en                            =>  p1_cmd_en,
   p1_cmd_instr                         =>  p1_cmd_instr,
   p1_cmd_bl                            =>  p1_cmd_bl,
   p1_cmd_byte_addr                     =>  p1_cmd_byte_addr,
   p1_cmd_empty                         =>  p1_cmd_empty,
   p1_cmd_full                          =>  p1_cmd_full,
   p1_wr_clk                            =>  p1_wr_clk,
   p1_wr_en                             =>  p1_wr_en,
   p1_wr_mask                           =>  p1_wr_mask,
   p1_wr_data                           =>  p1_wr_data,
   p1_wr_full                           =>  p1_wr_full,
   p1_wr_empty                          =>  p1_wr_empty,
   p1_wr_count                          =>  p1_wr_count,
   p1_wr_underrun                       =>  p1_wr_underrun,
   p1_wr_error                          =>  p1_wr_error,
   p1_rd_clk                            =>  '0',--p1_rd_clk,
   p1_rd_en                             =>  '0',--p1_rd_en,
   p1_rd_data                           =>  open,--p1_rd_data,
   p1_rd_full                           =>  open,--p1_rd_full,
   p1_rd_empty                          =>  open,--p1_rd_empty,
   p1_rd_count                          =>  open,--p1_rd_count,
   p1_rd_overflow                       =>  open,--p1_rd_overflow,
   p1_rd_error                          =>  open,--p1_rd_error,

   p2_cmd_clk                           =>  p2_cmd_clk,
   p2_cmd_en                            =>  p2_cmd_en,
   p2_cmd_instr                         =>  p2_cmd_instr,
   p2_cmd_bl                            =>  p2_cmd_bl,
   p2_cmd_byte_addr                     =>  p2_cmd_byte_addr,
   p2_cmd_empty                         =>  p2_cmd_empty,
   p2_cmd_full                          =>  p2_cmd_full,
   p2_wr_clk                            =>  p2_wr_clk,
   p2_wr_en                             =>  p2_wr_en,
   p2_wr_mask                           =>  p2_wr_mask,
   p2_wr_data                           =>  p2_wr_data,
   p2_wr_full                           =>  p2_wr_full,
   p2_wr_empty                          =>  p2_wr_empty,
   p2_wr_count                          =>  p2_wr_count,
   p2_wr_underrun                       =>  p2_wr_underrun,
   p2_wr_error                          =>  p2_wr_error,	
	
   p3_cmd_clk                           =>  p3_cmd_clk,
   p3_cmd_en                            =>  p3_cmd_en,
   p3_cmd_instr                         =>  p3_cmd_instr,
   p3_cmd_bl                            =>  p3_cmd_bl,
   p3_cmd_byte_addr                     =>  p3_cmd_byte_addr,
   p3_cmd_empty                         =>  p3_cmd_empty,
   p3_cmd_full                          =>  p3_cmd_full,
   p3_rd_clk                            =>  p3_rd_clk,
   p3_rd_en                             =>  p3_rd_en,
   p3_rd_data                           =>  p3_rd_data,
   p3_rd_full                           =>  p3_rd_full,
   p3_rd_empty                          =>  p3_rd_empty,
   p3_rd_count                          =>  p3_rd_count,
   p3_rd_overflow                       =>  p3_rd_overflow,
   p3_rd_error                          =>  p3_rd_error,
	
   selfrefresh_enter                    =>  '0',--selfrefresh_enter,
   selfrefresh_mode                     =>  open--selfrefresh_mode
);

-----------------------------------------------------------------------------
-- PORT C Read-only (for DVI)
-----------------------------------------------------------------------------
	Inst_LocalRstC: entity digilent.LocalRst PORT MAP(
		RST_I => RstC,
		CLK_I => CLKC,
		SRST_O => SRstC
	);
	RstC <= RSTC_I or not calib_done;
-----------------------------------------------------------------------------
-- Upper/lower 16-bit selection mux
-----------------------------------------------------------------------------
	RDOUTSEL_PROC: process (CLKC)
   begin
      if Rising_Edge(CLKC) then
         if (SRstC = '1') then
            rd_data_sel <= '0';
         elsif (ENC = '1') then
				rd_data_sel <= not rd_data_sel;
         end if;        
      end if;
   end process;
	DOC <= 	p3_rd_data(31 downto 16) when rd_data_sel = '1' else
				p3_rd_data(15 downto 0);
	p3_rd_en <= rd_data_sel and ENC;
	p3_rd_clk <= CLKC;
	
-----------------------------------------------------------------------------
-- Frame Buffer RDY signal
-----------------------------------------------------------------------------
	RDY_PROC: process (CLKC)
   begin
      if Rising_Edge(CLKC) then
         if (SRstC = '1') then
            RDY_O <= '0';
         elsif (p3_rd_empty = '0') then
				RDY_O <= '1';
         end if;        
      end if;
   end process;
-----------------------------------------------------------------------------
-- Read Addressing
-----------------------------------------------------------------------------	
	RDADDRCNT_PROC: process (CLKC)
	variable hCnt : natural;
   begin
      if Rising_Edge(CLKC) then
			if (SRstC = '1') then
				hCnt := 0;
				fVMemSource <= '0';
				pc_rd_addr1 <= 0;
				pc_rd_addr2 <= (VMEM_SIZE-640*2)/(RD_BATCH*4);
				pc_rd_addr3 <= VMEM_SIZE/(RD_BATCH*4);
				int_rd_mode <= "11";
         elsif (stateRd = stRdCmd) then
				if (pc_rd_addr1 = 640*2*480/(RD_BATCH*4)-1) then
					pc_rd_addr1 <= 0;
					pc_rd_addr2 <= (VMEM_SIZE-640/2*2)/(RD_BATCH*4);	
					pc_rd_addr3 <= VMEM_SIZE/(RD_BATCH*4);
					if (RD_MODE /= "00") then
						int_rd_mode <= RD_MODE;
					end if;
				else
					pc_rd_addr1 <= pc_rd_addr1 + 1;
					pc_rd_addr2 <= pc_rd_addr2 + 1;
					pc_rd_addr3 <= pc_rd_addr3 + 1;
				end if;
				--we count to the middle of a line only
				
				if (hCnt = 640/2 * 2 / (RD_BATCH*4) - 1) then
					hCnt := 0;
					fVmemSource <= not fVmemSource;
				else
					hCnt := hCnt + 1;
				end if;
         end if;        
      end if;
   end process;
	
	p3_cmd_byte_addr <=
		conv_std_logic_vector(pc_rd_addr1 * (RD_BATCH*4),30) 	when (fVMemSource = '0' and int_rd_mode = "11") else
		conv_std_logic_vector(pc_rd_addr2 * (RD_BATCH*4),30) 	when (fVMemSource = '1' and int_rd_mode = "11") else
		conv_std_logic_vector(pc_rd_addr1 * (RD_BATCH*4),30) 	when (int_rd_mode = "10") else
		conv_std_logic_vector(pc_rd_addr3 * (RD_BATCH*4),30)	when (int_rd_mode = "01") else
		(others => '-');
	
-----------------------------------------------------------------------------
-- Read FSM
-- CLKC clock domain; issues a read 32 words command, when the data count in
-- the Read FIFO is below 16;
-----------------------------------------------------------------------------
	SYNC_PROC: process (CLKC)
   begin
      if Rising_Edge(CLKC) then
         if (SRstC = '1') then
            stateRd <= stRdIdle;
         else
            stateRd <= nstateRd;
         end if;        
      end if;
   end process;

	p3_cmd_instr <= MCB_CMD_RD; -- Port 3 read-only
	p3_cmd_bl <= conv_std_logic_vector(RD_BATCH-1,6); -- We read 32 dwords (32-bit) at a time
	p3_cmd_clk <= CLKC;
 
   OUTPUT_DECODE: process (stateRd)
   begin
		p3_cmd_en <= '0';
      if stateRd = stRdCmd then
         p3_cmd_en <= '1';
      end if;
		
   end process;
 
   NEXT_STATE_DECODE: process (stateRd, p3_rd_count, p3_rd_error)
   begin
      nstateRd <= stateRd;  --default is to stay in current state
      case (stateRd) is
         when stRdIdle =>
				if (p3_rd_count < 16) then
					nstateRd <= stRdCmd;
            end if;
         when stRdCmd =>
            nstateRd <= stRdCmdWait;
			when stRdCmdWait =>
				if (p3_rd_error = '1') then
					nstateRd <= stRdErr; --the read FIFO got empty
				elsif not (p3_rd_count < 16) then -- data is present in the FIFO
					nstateRd <= stRdIdle;
				end if;
			when stRdErr =>
				null;
         when others =>
            nstateRd <= stRdIdle;
      end case;      
   end process;

-----------------------------------------------------------------------------
-- PORT A Write-only (for Camera A)
-----------------------------------------------------------------------------
	Inst_LocalRstA1: entity digilent.LocalRst PORT MAP(
		RST_I => RstA,
		CLK_I => CLKA,
		SRST_O => SRstA
	);
	RstA <= RSTA_I or not calib_done;
	
	Inst_LocalRstA2: entity digilent.LocalRst PORT MAP(
		RST_I => calib_done,
		CLK_I => CLKA,
		SRST_O => SCalibDoneA
	);
-----------------------------------------------------------------------------
-- Upper/lower 16-bit selection mux
-----------------------------------------------------------------------------
	WROUTSEL_PROC_A: process (CLKA)
   begin
      if Rising_Edge(CLKA) then
         if (SRstA = '1') then
            pa_wr_data_sel <= '0';
         elsif (ENA = '1') then
				pa_wr_data_sel <= not pa_wr_data_sel;
         end if;
			
			if (ENA = '1') then
				if (pa_wr_data_sel = '0') then
					p1_wr_data(15 downto 0) <= DIA;
				end if;
			end if;
      end if;
   end process;
	
-----------------------------------------------------------------------------
-- Port A reset
-----------------------------------------------------------------------------
	PORTARST_PROC_A: process(CLKA)
	begin
		if Rising_Edge(CLKA) then
			if (SRstA = '1') then
				pa_int_rst <= '1';
			elsif (p1_wr_empty = '1') then -- port has been reset when no more data is waiting to be written
				pa_int_rst <= '0';
			end if;
		end if;
	end process;
	
	p1_cmd_bl <=	conv_std_logic_vector(pa_wr_cnt-1,6) when pa_int_rst = '1' else
						conv_std_logic_vector(WR_BATCH-1,6); -- We write 32 dwords (32-bit) at a time
	p1_wr_data(31 downto 16) <= DIA;
	--p1_wr_data <= p1_cmd_byte_addr(11 downto 7) & p1_cmd_byte_addr(11 downto 7) & '0' & p1_cmd_byte_addr(11 downto 7) & p1_cmd_byte_addr(11 downto 7) & p1_cmd_byte_addr(11 downto 7) & '0' & p1_cmd_byte_addr(11 downto 7);
	p1_wr_en <= pa_wr_data_sel and ENA;
	p1_wr_clk <= CLKA;
	p1_wr_mask <= "0000";
	
-----------------------------------------------------------------------------
-- Write Counter; use this instead of the FIFO's
-----------------------------------------------------------------------------
	WRCNT_PROC_A: process(CLKA)
	begin
		if Rising_Edge(CLKA) then
			if (stateWrA = stWrCmd) then
				if (p1_wr_en = '1' and pa_int_rst = '0') then
					pa_wr_cnt <= 1;
				else
					pa_wr_cnt <= 0;
				end if;
			elsif (p1_wr_en = '1' and pa_int_rst = '0') then
				pa_wr_cnt <= pa_wr_cnt + 1;
			end if;
		end if;
	end process;
	
-----------------------------------------------------------------------------
-- Write Addressing
-----------------------------------------------------------------------------	
	WRADDRCNT_PROC_A: process (CLKA)
   begin
      if Rising_Edge(CLKA) then
			if (pa_int_rst = '1' and p1_wr_empty = '1') then
				pa_wr_addr <= 0;
         elsif (stateWrA = stWrCmd) then
				if (pa_wr_addr = 640*480*2/(WR_BATCH*4)-1) then
					pa_wr_addr <= 0;
				else
					pa_wr_addr <= pa_wr_addr + 1;
				end if;
         end if;        
      end if;
   end process;
	
	p1_cmd_byte_addr <= conv_std_logic_vector(pa_wr_addr * (WR_BATCH*4),30);
	
-----------------------------------------------------------------------------
-- Write FSM
-- CLKA clock domain; issues a write 32 words command, when we have
-- 32 words to the FIFO; it also issues a write command for less than 32
-- words upon port reset.
-----------------------------------------------------------------------------
	WRSYNC_PROC_A: process (CLKA)
   begin
      if Rising_Edge(CLKA) then
         if (SCalibDoneA = '0' or p1_wr_empty = '1') then
            stateWrA <= stWrIdle;
         else
            stateWrA <= nstateWrA;
         end if;        
      end if;
   end process;

	p1_cmd_instr <= MCB_CMD_WR; -- Port 1 write-only
	p1_cmd_clk <= CLKA;
 
   WROUTPUT_DECODE_A: process (stateWrA)
   begin
		p1_cmd_en <= '0';
      if stateWrA = stWrCmd then
         p1_cmd_en <= '1';
      end if;
		
   end process;
 
   WRNEXT_STATE_DECODE_A: process (stateWrA, p1_wr_count, p1_wr_error, pa_int_rst, p1_wr_empty, pa_wr_cnt)
   begin
      nstateWrA <= stateWrA;  --default is to stay in current state
      case (stateWrA) is
         when stWrIdle =>
				if (pa_wr_cnt >= WR_BATCH or pa_int_rst = '1') then
					nstateWrA <= stWrCmd;
            end if;
         when stWrCmd =>
            nstateWrA <= stWrCmdWait;
			when stWrCmdWait =>
				if (p1_wr_error = '1') then
					nstateWrA <= stWrErr; --the write FIFO got empty
				elsif ((pa_int_rst = '0' and p1_wr_count < WR_BATCH) or 
						 (pa_int_rst = '1' and p1_wr_empty = '1')) then -- data got transferred from the FIFO
					nstateWrA <= stWrIdle;
				end if;
			when stWrErr =>
				null;
         when others =>
            nstateWrA <= stWrIdle;
      end case;      
   end process;

-----------------------------------------------------------------------------
-- PORT B Write-only (for Camera B)
-----------------------------------------------------------------------------
	Inst_LocalRstB1: entity digilent.LocalRst PORT MAP(
		RST_I => RstB,
		CLK_I => CLKB,
		SRST_O => SRstB
	);
	RstB <= RSTB_I or not calib_done;
	
	Inst_LocalRstB2: entity digilent.LocalRst PORT MAP(
		RST_I => calib_done,
		CLK_I => CLKB,
		SRST_O => SCalibDoneB
	);
-----------------------------------------------------------------------------
-- Upper/lower 16-bit selection mux
-----------------------------------------------------------------------------
	WROUTSEL_PROC_B: process (CLKB)
   begin
      if Rising_Edge(CLKB) then
         if (SRstB = '1') then
            pb_wr_data_sel <= '0';
         elsif (ENB = '1') then
				pb_wr_data_sel <= not pb_wr_data_sel;
         end if;
			
			if (ENB = '1') then
				if (pb_wr_data_sel = '0') then
					p2_wr_data(15 downto 0) <= DIB;
				end if;
			end if;
      end if;
   end process;
	
-----------------------------------------------------------------------------
-- Port A reset
-----------------------------------------------------------------------------
	PORTARST_PROC_B: process(CLKB)
	begin
		if Rising_Edge(CLKB) then
			if (SRstB = '1') then
				pb_int_rst <= '1';
			elsif (p2_wr_empty = '1') then -- port has been reset when no more data is waiting to be written
				pb_int_rst <= '0';
			end if;
		end if;
	end process;
	
	p2_cmd_bl <=	conv_std_logic_vector(pb_wr_cnt-1,6) when pb_int_rst = '1' else
						conv_std_logic_vector(WR_BATCH-1,6); -- We write 32 dwords (32-bit) at a time
	p2_wr_data(31 downto 16) <= DIB;
	--p1_wr_data <= p1_cmd_byte_addr(11 downto 7) & p1_cmd_byte_addr(11 downto 7) & '0' & p1_cmd_byte_addr(11 downto 7) & p1_cmd_byte_addr(11 downto 7) & p1_cmd_byte_addr(11 downto 7) & '0' & p1_cmd_byte_addr(11 downto 7);
	p2_wr_en <= pb_wr_data_sel and ENB;
	p2_wr_clk <= CLKB;
	p2_wr_mask <= "0000";
	
-----------------------------------------------------------------------------
-- Write Counter; use this instead of the FIFO's
-----------------------------------------------------------------------------
	WRCNT_PROC_B: process(CLKB)
	begin
		if Rising_Edge(CLKB) then
			if (stateWrB = stWrCmd) then
				if (p2_wr_en = '1' and pb_int_rst = '0') then
					pb_wr_cnt <= 1;
				else
					pb_wr_cnt <= 0;
				end if;
			elsif (p2_wr_en = '1' and pb_int_rst = '0') then
				pb_wr_cnt <= pb_wr_cnt + 1;
			end if;
		end if;
	end process;
	
-----------------------------------------------------------------------------
-- Write Addressing
-----------------------------------------------------------------------------	
	WRADDRCNT_PROC_B: process (CLKB)
   begin
      if Rising_Edge(CLKB) then
			if (pb_int_rst = '1' and p2_wr_empty = '1') then
				pb_wr_addr <= 0;
         elsif (stateWrB = stWrCmd) then
				if (pb_wr_addr = 640*480*2/(WR_BATCH*4)-1) then
					pb_wr_addr <= 0;
				else
					pb_wr_addr <= pb_wr_addr + 1;
				end if;
         end if;        
      end if;
   end process;
	
	--Port B writes to next VMEM_SIZE location
	p2_cmd_byte_addr <= conv_std_logic_vector(VMEM_SIZE + pb_wr_addr * (WR_BATCH*4),30);
	
-----------------------------------------------------------------------------
-- Write FSM
-- CLKB clock domain; issues a write 32 words command, when we have
-- 32 words to the FIFO; it also issues a write command for less than 32
-- words upon port reset.
-----------------------------------------------------------------------------
	WRSYNC_PROC_B: process (CLKB)
   begin
      if Rising_Edge(CLKB) then
         if (SCalibDoneB = '0' or p2_wr_empty = '1') then
            stateWrB <= stWrIdle;
         else
            stateWrB <= nstateWrB;
         end if;        
      end if;
   end process;

	p2_cmd_instr <= MCB_CMD_WR; -- Port 1 write-only
	p2_cmd_clk <= CLKB;
 
   WROUTPUT_DECODE_B: process (stateWrB)
   begin
		p2_cmd_en <= '0';
      if stateWrB = stWrCmd then
         p2_cmd_en <= '1';
      end if;
		
   end process;
 
   WRNEXT_STATE_DECODE_B: process (stateWrB, p2_wr_count, p2_wr_error, pb_int_rst, p2_wr_empty, pb_wr_cnt)
   begin
      nstateWrB <= stateWrB;  --default is to stay in current state
      case (stateWrB) is
         when stWrIdle =>
				if (pb_wr_cnt >= WR_BATCH or pb_int_rst = '1') then
					nstateWrB <= stWrCmd;
            end if;
         when stWrCmd =>
            nstateWrB <= stWrCmdWait;
			when stWrCmdWait =>
				if (p2_wr_error = '1') then
					nstateWrB <= stWrErr; --the write FIFO got empty
				elsif ((pb_int_rst = '0' and p2_wr_count < WR_BATCH) or 
						 (pb_int_rst = '1' and p2_wr_empty = '1')) then -- data got transferred from the FIFO
					nstateWrB <= stWrIdle;
				end if;
			when stWrErr =>
				null;
         when others =>
            nstateWrB <= stWrIdle;
      end case;      
   end process;


end Behavioral;

