module VmodCAM_Ref (
   output TMDS_TX_2_P,
   output TMDS_TX_2_N,
   output TMDS_TX_1_P,
   output TMDS_TX_1_N,
   output TMDS_TX_0_P,
   output TMDS_TX_0_N,
   output TMDS_TX_CLK_P,
   output TMDS_TX_CLK_N,
   inout TMDS_TX_SCL,
   inout TMDS_TX_SDA,
   input SW_I[7:0],
   output LED_O[7:0],
   input CLK_I,
   input RESET_I,
//--------------------------------------------------------------------------------
// Camera Board signals
//--------------------------------------------------------------------------------
   inout CAMA_SDA,
   inout CAMA_SCL,
   input CAMA_D_I[7:0],
   inout CAMA_PCLK_I,
   output CAMA_MCLK_O,		
   input CAMA_LV_I,
   input CAMA_FV_I,
   output CAMA_RST_O, //Reset active LOW
   output CAMA_PWDN_O, //Power-down active HIGH

   output CAMX_VDDEN_O, // common power supply enable (can do power cycle)
   
   inout CAMB_SDA,
   inout CAMB_SCL,
   input CAMB_D_I[7:0],
   inout CAMB_PCLK_I,
   output CAMB_MCLK_O;		
   input CAMB_LV_I,
   input CAMB_FV_I,
   output CAMB_RST_O, //Reset active LOW
   output CAMB_PWDN_O, //Power-down active HIGH			  
//--------------------------------------------------------------------------------
// DDR2 Interface
//--------------------------------------------------------------------------------
   inout mcb3_dram_dq[C3_NUM_DQ_PINS-1:0],
   output mcb3_dram_a[C3_MEM_ADDR_WIDTH-1:0],
   output mcb3_dram_ba[C3_MEM_BANKADDR_WIDTH-1:0],
   output mcb3_dram_ras_n,
   output mcb3_dram_cas_n,
   output mcb3_dram_we_n,
   output mcb3_dram_odt,
   output mcb3_dram_cke,
   output mcb3_dram_dm,
   inout mcb3_dram_udqs,
   inout mcb3_dram_udqs_n,
   inout mcb3_rzq,
   inout mcb3_zio,
   output mcb3_dram_udm,
   inout mcb3_dram_dqs,
   inout mcb3_dram_dqs_n,
   output mcb3_dram_ck,
   output mcb3_dram_ck_n
   );
   
parameter C3_NUM_DQ_PINS = 16; 
parameter C3_MEM_ADDR_WIDTH = 13; 
parameter C3_MEM_BANKADDR_WIDTH = 3;

architecture Behavioral of VmodCAM_Ref is
signal SysClk, PClk, PClkX2, SysRst, SerClk, SerStb : std_logic;
signal MSel : std_logic_vector(1 downto 0);

signal VtcHs, VtcVs, VtcVde, VtcRst : std_logic;
signal VtcHCnt, VtcVCnt : NATURAL;

signal CamClk, CamClk_180, CamAPClk, CamBPClk, CamADV, CamBDV, CamAVddEn, CamBVddEn : std_logic;
signal CamAD, CamBD : std_logic_vector(15 downto 0);
signal dummy_t, int_CAMA_PCLK_I, int_CAMB_PCLK_I : std_logic;

attribute S: string;
attribute S of CAMA_PCLK_I: signal is "TRUE";
attribute S of CAMB_PCLK_I: signal is "TRUE";
attribute S of dummy_t: signal is "TRUE";

signal ddr2clk_2x, ddr2clk_2x_180, mcb_drp_clk, pll_ce_0, pll_ce_90, pll_lock, async_rst : std_logic;
signal FbRdy, FbRdEn, FbRdRst, FbRdClk : std_logic;
signal FbRdData : std_logic_vector(16-1 downto 0);
signal FbWrARst, FbWrBRst, int_FVA, int_FVB : std_logic;

begin

LED_O <= VtcHs & VtcHs & VtcVde & async_rst & "0000";
----------------------------------------------------------------------------------
// System Control Unit
// This component provides a System Clock, a Synchronous Reset and other signals
// needed for the 40:4 serialization:
//	- Serialization clock (5x System Clock)
// - Serialization strobe
// - 2x Pixel Clock
----------------------------------------------------------------------------------
	Inst_SysCon: entity work.SysCon PORT MAP(
		CLK_I => CLK_I,
		CLK_O => open,
		RSTN_I => RESET_I,
		SW_I => SW_I,
		SW_O => open,
		RSEL_O => open, //resolution selector synchronized with PClk
		MSEL_O => MSel, //mode selector synchornized with PClk
		CAMCLK_O => CamClk,
		CAMCLK_180_O => CamClk_180,
		PCLK_O => PClk,
		PCLK_X2_O => PClkX2,
		PCLK_X10_O => SerClk,
		SERDESSTROBE_O => SerStb,
		
		DDR2CLK_2X_O => DDR2Clk_2x,
		DDR2CLK_2X_180_O => DDR2Clk_2x_180,
		MCB_DRP_CLK_O => mcb_drp_clk,
		PLL_CE_0_O => pll_ce_0,
		PLL_CE_90_O => pll_ce_90,
		PLL_LOCK => pll_lock,
		ASYNC_RST => async_rst
	);
	
----------------------------------------------------------------------------------
// Video Timing Controller
// Generates horizontal and vertical sync and video data enable signals.
----------------------------------------------------------------------------------
	Inst_VideoTimingCtl: entity digilent.VideoTimingCtl PORT MAP (
		PCLK_I => PClk,
		RSEL_I => R640_480P, //this project supports only VGA
		RST_I => VtcRst,
		VDE_O => VtcVde,
		HS_O => VtcHs,
		VS_O => VtcVs,
		HCNT_O => VtcHCnt,
		VCNT_O => VtcVCnt
	);
	VtcRst <= async_rst or not FbRdy;
----------------------------------------------------------------------------------
// Frame Buffer
----------------------------------------------------------------------------------
	Inst_FBCtl: entity work.FBCtl 
	GENERIC MAP (
		DEBUG_EN => 0,
		COLORDEPTH=> 16
	)
	PORT MAP(
		RDY_O => FbRdy,
		ENC => FbRdEn,
		RSTC_I => FbRdRst,
		DOC => FbRdData,
		CLKC => FbRdClk,
		RD_MODE => MSel,
		
		ENA => CamADV,
		RSTA_I => FbWrARst,
		DIA => CamAD,
		CLKA => CamAPClk,
		
		ENB => CamBDV,
		RSTB_I	=> FbWrBRst,
		DIB => CamBD,
		CLKB => CamBPClk,
		
		ddr2clk_2x => DDR2Clk_2x,
		ddr2clk_2x_180 => DDR2Clk_2x_180,
		pll_ce_0 => pll_ce_0,
		pll_ce_90 => pll_ce_90,
		pll_lock => pll_lock,
		async_rst => async_rst,
		mcb_drp_clk => mcb_drp_clk,
		mcb3_dram_dq => mcb3_dram_dq,
		mcb3_dram_a => mcb3_dram_a,
		mcb3_dram_ba => mcb3_dram_ba,
		mcb3_dram_ras_n => mcb3_dram_ras_n,
		mcb3_dram_cas_n => mcb3_dram_cas_n,
		mcb3_dram_we_n => mcb3_dram_we_n,
		mcb3_dram_odt => mcb3_dram_odt,
		mcb3_dram_cke => mcb3_dram_cke,
		mcb3_dram_dm => mcb3_dram_dm,
		mcb3_dram_udqs => mcb3_dram_udqs,
		mcb3_dram_udqs_n => mcb3_dram_udqs_n,
		mcb3_rzq => mcb3_rzq,
		mcb3_zio => mcb3_zio,
		mcb3_dram_udm => mcb3_dram_udm,
		mcb3_dram_dqs => mcb3_dram_dqs,
		mcb3_dram_dqs_n => mcb3_dram_dqs_n,
		mcb3_dram_ck => mcb3_dram_ck,
		mcb3_dram_ck_n => mcb3_dram_ck_n
	);

FbRdEn <= VtcVde;
FbRdRst <= async_rst;
FbRdClk <= PClk;
//Register FV signal to meet timing for FbWrXRst
	Inst_InputSync_FVA: entity digilent.InputSync PORT MAP(
		D_I => CAMA_FV_I,
		D_O => int_FVA,
		CLK_I => CamAPClk
	);
	Inst_InputSync_FVB: entity digilent.InputSync PORT MAP(
		D_I => CAMB_FV_I,
		D_O => int_FVB,
		CLK_I => CamBPClk
	);

FbWrARst <= async_rst or not int_FVA;
FbWrBRst <= async_rst or not int_FVB;

----------------------------------------------------------------------------------
// DVI Transmitter
----------------------------------------------------------------------------------
	Inst_DVITransmitter: entity digilent.DVITransmitter PORT MAP(
		RED_I => FbRdData(15 downto 11) & "000",
		GREEN_I => FbRdData(10 downto 5) & "00",
		BLUE_I => FbRdData(4 downto 0) & "000",
		HS_I => VtcHs,
		VS_I => VtcVs,
		VDE_I => VtcVde,
		PCLK_I => PClk,
		PCLK_X2_I => PClkX2,
		SERCLK_I => SerClk,
		SERSTB_I => SerStb,
		TMDS_TX_2_P => TMDS_TX_2_P,
		TMDS_TX_2_N => TMDS_TX_2_N,
		TMDS_TX_1_P => TMDS_TX_1_P,
		TMDS_TX_1_N => TMDS_TX_1_N,
		TMDS_TX_0_P => TMDS_TX_0_P,
		TMDS_TX_0_N => TMDS_TX_0_N,
		TMDS_TX_CLK_P => TMDS_TX_CLK_P,
		TMDS_TX_CLK_N => TMDS_TX_CLK_N
	);

//--------------------------------------------------------------------------------
// Camera A Controller
//--------------------------------------------------------------------------------
	Inst_camctlA: entity work.camctl
	PORT MAP (
		D_O => CamAD,
		PCLK_O => CamAPClk,
		DV_O => CamADV,
		RST_I => async_rst,
		CLK => CamClk,
		CLK_180 => CamClk_180,
		SDA => CAMA_SDA,
		SCL => CAMA_SCL,
		D_I => CAMA_D_I,
		PCLK_I => int_CAMA_PCLK_I,
		MCLK_O => CAMA_MCLK_O,
		LV_I => CAMA_LV_I,
		FV_I => CAMA_FV_I,
		RST_O => CAMA_RST_O,
		PWDN_O => CAMA_PWDN_O,
		VDDEN_O => CamAVddEn
	);
//--------------------------------------------------------------------------------
// Camera B Controller
//--------------------------------------------------------------------------------
	Inst_camctlB: entity work.camctl
	PORT MAP (
		D_O => CamBD,
		PCLK_O => CamBPClk,
		DV_O => CamBDV,
		RST_I => async_rst,
		CLK => CamClk,
		CLK_180 => CamClk_180,
		SDA => CAMB_SDA,
		SCL => CAMB_SCL,
		D_I => CAMB_D_I,
		PCLK_I => int_CAMB_PCLK_I,
		MCLK_O => CAMB_MCLK_O,
		LV_I => CAMB_LV_I,
		FV_I => CAMB_FV_I,
		RST_O => CAMB_RST_O,
		PWDN_O => CAMB_PWDN_O,
		VDDEN_O => CamBVddEn
	);
	CAMX_VDDEN_O <= CamAVddEn and CamBVddEn;
	
----------------------------------------------------------------------------------
// Workaround for IN_TERM bug AR# 	40818
----------------------------------------------------------------------------------
   Inst_IOBUF_CAMA_PCLK : IOBUF
   generic map (
      DRIVE => 12,
      IOSTANDARD => "DEFAULT",
      SLEW => "SLOW")
   port map (
      O => int_CAMA_PCLK_I,     // Buffer output
      IO => CAMA_PCLK_I,   // Buffer inout port (connect directly to top-level port)
      I => '0',     // Buffer input
      T => dummy_t      // 3-state enable input, high=input, low=output 
   );
   Inst_IOBUF_CAMB_PCLK : IOBUF
   generic map (
      DRIVE => 12,
      IOSTANDARD => "DEFAULT",
      SLEW => "SLOW")
   port map (
      O => int_CAMB_PCLK_I,     // Buffer output
      IO => CAMB_PCLK_I,   // Buffer inout port (connect directly to top-level port)
      I => '0',     // Buffer input
      T => dummy_t      // 3-state enable input, high=input, low=output 
   );	
dummy_t <= '1';
end Behavioral;
