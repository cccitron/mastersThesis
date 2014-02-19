----------------------------------------------------------------------------------
-- Company: Digilent Ro
-- Engineer: Elod Gyorgy
-- 
-- Create Date:    14:55:31 04/07/2011 
-- Design Name: 
-- Module Name:    SysCon - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: This module provides clocks and reset signal for the whole design.
--
-- Dependencies: 
--
-- Revision:
-- Revision 0.02 - Removed Dynamic Resolution Change option; fixed to VGA
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.math_real.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

library digilent;
use digilent.Video.ALL;
---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity SysCon is
    Port ( CLK_I : in  STD_LOGIC;
			  CLK_O : out STD_LOGIC;
           RSTN_I : in  STD_LOGIC;
			  SW_I : in STD_LOGIC_VECTOR(7 downto 0);
			  CAMCLK_O : out STD_LOGIC;
			  CAMCLK_180_O : out STD_LOGIC;
			  RSEL_O : out RESOLUTION; --resolution selector
			  MSEL_O : out STD_LOGIC_VECTOR(1 downto 0); --mode selector
           PCLK_O : out  STD_LOGIC;		--pixel clock
			  PCLK_X2_O : out  STD_LOGIC;	--pixel clock x2
			  PCLK_X10_O : out  STD_LOGIC;	--serialization/deserialization clock
			  SERDESSTROBE_O : out STD_LOGIC;	--serdes strobe
			  
			  DDR2CLK_2X_O : out STD_LOGIC;
			  DDR2CLK_2X_180_O : out STD_LOGIC;
			  MCB_DRP_CLK_O : out STD_LOGIC;
			  PLL_CE_0_O : out STD_LOGIC;
			  PLL_CE_90_O : out STD_LOGIC;
			  PLL_LOCK : out STD_LOGIC;
			  ASYNC_RST : out STD_LOGIC;
			  
			  SW_O : out STD_LOGIC_VECTOR(7 downto 0));
end SysCon;

architecture Behavioral of SysCon is

	constant S : NATURAL := 10; -- serialization factor
	constant CLKIN_PERIOD : REAL := 13.468; --ns = 74.25MHz (maximum supported pixel clock)
	constant PLLO0 : NATURAL := 1;	-- SERCLK = PCLK * S
	constant PLLO2 : NATURAL := PLLO0 * S; -- PCLK = PCLK * S / S
	constant PLLO3 : NATURAL := PLLO0 * S / 2;	-- PCLK_X2 = PLCK * S / (S/2)
  
  -- # of clock cycles to delay deassertion of reset. Needs to be a fairly
  -- high number not so much for metastability protection, but to give time
  -- for reset (i.e. stable clock cycles) to propagate through all state
  -- machines and to all control signals (i.e. not all control signals have
  -- resets, instead they rely on base state logic being reset, and the effect
  -- of that reset propagating through the logic). Need this because we may not
  -- be getting stable clock cycles while reset asserted (i.e. since reset
  -- depends on PLL/DCM lock status)

  constant RST_SYNC_NUM   : integer := 100;
  constant RST_DBNC   : integer := 10;
  
  constant RST_SYNC_NUM_LENGTH : natural := natural(ceil(log(real(RST_SYNC_NUM), 2.0)));
  
	component dcm_fixed
	port
	 (-- Clock in ports
	  CLK_IN1           : in     std_logic;
	  -- Clock out ports
	  CLK_OUT1          : out    std_logic;
	  CLK_OUT2          : out    std_logic;
	  -- Status and control signals
	  RESET             : in     std_logic;
	  LOCKED            : out    std_logic
	 );
	end component;
	component dcm_recfg
	port
	 (-- Clock in ports
	  CLK_IN1           : in     std_logic;
	  -- Clock out ports
	  CLK_OUT1          : out    std_logic;
	  -- Dynamic reconfiguration ports
	  PROGCLK           : in     std_logic;
	  PROGEN            : in     std_logic;
	  PROGDATA          : in     std_logic;
	  PROGDONE          : out    std_logic;
	  -- Status and control signals
	  RESET             : in     std_logic;
	  LOCKED            : out    std_logic
	 );
	end component;

	signal pllout_xs, pllout_x1, pllout_x2, PllRst, PllLckd, BufPllLckd, intpllout_x2 : std_logic;
	signal Start_Up_Rst, DcmRst, Pclk, DcmLckd, DcmProgDone, DcmProgEn, DcmProgD, DcmProgClk: std_logic;
	signal SysConCLK : std_logic; --buffered input clock that drives this unit
	
	signal RstDbncQ, RstDbncTemp : std_logic_vector(RST_DBNC-1 downto 0);
	signal intRst : std_logic;
	
	signal intfb, intpllout_xs: std_logic;
	
	signal int_sw : std_logic_vector(7 downto 0);
	
	signal bitCount : natural range 0 to 15 := 0;
	
	type state_type is (stIdle, stProgM, stProgMWait, stProgD, stProgDWait, stGo, stWait); 
   signal state, nstate : state_type; 
	
	signal shiftReg, loadRegEn, progEn : std_logic;
	signal DcmProgReg, loadReg : std_logic_vector(9 downto 0);
	signal DcmM, DcmD : natural range 0 to 255;
	
	signal res, prevRes : RESOLUTION;
	
	signal 	mcb_PllRst, mcb_intfb, ddr2clk_2x, ddr2clk_2x_180, mcb_drp_clk_bfg,
				mcb_PllLckd, mcb_drp_clk, mcb_BufPllLckd : std_logic;
	
	signal Dcm2Lckd : std_logic;
	
	signal RstQ : std_logic_vector(RST_SYNC_NUM-1 downto 0) := (RST_SYNC_NUM-1 => '0', others => '1');
	signal RstD : std_logic_vector(RST_SYNC_NUM_LENGTH downto 0) := '1' & conv_std_logic_vector(RST_SYNC_NUM, RST_SYNC_NUM_LENGTH);
	signal RstDbnc : std_logic;
	attribute KEEP : string; 
	attribute KEEP of async_rst     : signal is "TRUE";
begin

   IBUFG_inst : IBUFG
   port map (
      O => SysConCLK, -- Clock buffer output
      I => CLK_I  -- Clock buffer input (connect directly to top-level port)
   );
	CLK_O <= SysConCLK;
--4-bit Shift Register For resetting the DCM on startup (Xilinx Answer Record: 14425)
--Asserts Start_Up_Rst for 4 clock periods
   SRL16_inst : SRL16
   generic map (
      INIT => X"000F")
   port map (
      Q => Start_Up_Rst,       -- SRL data output
      A0 => '1',     -- Select[0] input
      A1 => '1',     -- Select[1] input
      A2 => '0',     -- Select[2] input
      A3 => '0',     -- Select[3] input
      CLK => SysConCLK,   -- Clock input
      D => '0'        -- SRL data input
   );	
	
----------------------------------------------------------------------------------
-- Debounce Reset
----------------------------------------------------------------------------------	
RstDbncQ(0) <= not RSTN_I;
DBNC_PROC: for i in 1 to RstDbncQ'high generate
	process(SysConCLK)
	begin
		if Rising_Edge(SysConCLK) then
			RstDbncQ(i) <= RstDbncQ(i-1);
		end if;
	end process;
end generate;
RstDbncTemp(0) <= RstDbncQ(0);

DBNCTEMP_PROC: for i in 1 to RstDbncQ'high-1 generate
	RstDbncTemp(i) <= RstDbncTemp(i-1) and RstDbncQ(i);
end generate;	

	RstDbnc <= RstDbncTemp(RstDbncQ'high-1) and (not RstDbncQ(RstDbncQ'high));

----------------------------------------------------------------------------------
-- Reset with take-off and landing
----------------------------------------------------------------------------------	
	process(SysConCLK)
	begin
		if Rising_Edge(SysConCLK) then
			if (RstDbnc = '1' or RstQ(RST_SYNC_NUM-1) = '1') then
				RstQ <= RstQ(RST_SYNC_NUM-2 downto 0) & RstQ(RST_SYNC_NUM-1);
			end if;
		end if;
	end process;
	
	DcmRst <= 	not RstQ(RST_SYNC_NUM-2) or not RstQ(RST_SYNC_NUM-3) or
					not RstQ(RST_SYNC_NUM-4) or Start_Up_Rst;
	
	intRst <= 	not DcmLckd or not Dcm2Lckd or not BufPllLckd or not mcb_BufPllLckd;
	
	process(SysConCLK, intRst)
	begin
		if (intRst = '1') then
			RstD <= '1' & conv_std_logic_vector(RST_SYNC_NUM, RST_SYNC_NUM_LENGTH);
		elsif Rising_Edge(SysConCLK) then
			if (RstD(RstD'high) = '1') then
				RstD <= RstD - 1;
			end if;
		end if;
	end process;
	
	ASYNC_RST <= RstQ(RST_SYNC_NUM-1) or RstD(RstD'high);
	
----------------------------------------------------------------------------------
-- Synchronize async switch inputs with System Control Clock
----------------------------------------------------------------------------------	
SYNC_SW: entity digilent.InputSyncV	port map (
	D_I =>	SW_I,
	D_O =>	int_sw,
	CLK_I => SysConCLK
);

SW_O <= int_sw;

Inst_dcm_fixed : dcm_fixed
  port map
   (-- Clock in ports
    CLK_IN1            => SysConCLK,
    -- Clock out ports
    CLK_OUT1           => CAMCLK_O,
	 CLK_OUT2           => CAMCLK_180_O,
    -- Status and control signals
    RESET              => DcmRst,
    LOCKED             => Dcm2Lckd);

----------------------------------------------------------------------------------
-- Reconfigurable DCM
-- This module generates the pixel clock. It provides support for dynamic
-- reconfiguration, thus enabling change in the pixel clock frequency & video
-- format.
----------------------------------------------------------------------------------	
Inst_dcm_recfg : dcm_recfg
  port map
   (-- Clock in ports
    CLK_IN1            => SysConCLK,
    -- Clock out ports
    CLK_OUT1           => PClk,
    -- Dynamic reconfiguration ports
    PROGCLK            => DcmProgClk,
    PROGEN             => DcmProgEn,
    PROGDATA           => DcmProgD,
    PROGDONE           => DcmProgDone,
    -- Status and control signals
    RESET              => DcmRst,
    LOCKED             => DcmLckd);
	 
DcmProgClk <= SysConCLK;
DcmProgEn <= progEn;
DcmProgD <= DcmProgReg(0);

----------------------------------------------------------------------------------
-- Dynamic resolution change
----------------------------------------------------------------------------------
res <= R640_480P;
					
process(res)
begin
	case (res) is
		when R640_480P => --640x480@60Hz = 25MHz
			DcmM <= 2 - 1;
			DcmD <= 8 - 1;
		when R720_480P => --720x480@60Hz = 25MHz
			DcmM <= 2 - 1;
			DcmD <= 8 - 1;
		when R1280_720P => --1280x720@60Hz = 75MHz
			DcmM <= 6 - 1;
			DcmD <= 8 - 1;
		when R1600_900P => --1600x900@60Hz = 108MHz
			DcmM <= 27 - 1;
			DcmD <= 25 - 1;			
		when others =>
			DcmM <= 2 - 1;
			DcmD <= 8 - 1;
	end case;
end process;

process(SysConCLK)
begin
	if Rising_Edge(SysConCLK) then
		if (DcmRst = '1') then
			prevRes <= R1600_900P; --dcm_recfg resets to this pixel clock frequency
		elsif (state = stWait and DcmProgDone = '1') then
			prevRes <= res;
		end if;
	end if;
end process;

process(pllout_x1)
begin
	if Rising_Edge(pllout_x1) then
		RSEL_O <= res;
	end if;
end process;

MODE_SYNC: entity digilent.InputSyncV PORT MAP (
	D_I => SW_I(7 downto 6),
	D_O => MSEL_O,
	CLK_I => pllout_x1
);

SYNC_PROC: process (SysConCLK)
   begin
      if Rising_Edge(SysConCLK) then
         if (DcmRst = '1') then
            state <= stIdle;
         else
            state <= nstate;
         end if;
			
			if (loadRegEn = '1') then
				DcmProgReg <= loadReg;
			elsif (shiftReg = '1') then
				DcmProgReg <= '0' & DcmProgReg(DcmProgReg'high downto 1);
			end if;
			
			if (loadRegEn = '1') then
				bitCount <= 0;
			elsif (shiftReg = '1') then
				bitCount <= bitCount+1;
			end if;
      end if;
   end process;
	
OUTPUT_DECODE: process (state, nstate, DcmD, DcmM)
   begin
		loadReg <= (others => '-');
		loadRegEn <= '0';
		if (state = stIdle and nstate = stProgD) then
         loadReg <= conv_std_logic_vector(DcmD, 8) & "01";
			loadRegEn <= '1';
      end if;
		if (state = stProgDWait and nstate = stProgM) then
         loadReg <= conv_std_logic_vector(DcmM, 8) & "11";
			loadRegEn <= '1';
      end if;
		
		shiftReg <= '0';
		if (state = stProgD or state = stProgM or state = stProgDWait) then
			shiftReg <= '1';
		end if;
		
		progEn <= '0';
		if (state = stProgD or state = stProgM or state = stGo) then
			progEn <= '1';
		end if;
		
   end process;
	
NEXT_STATE_DECODE: process (state, res, prevRes, DcmProgDone, DcmLckd, bitCount)
   begin
      nstate <= state;
      case (state) is
         when stIdle =>
            if (DcmProgDone = '1' and DcmLckd = '1' and prevRes /= res) then
               nstate <= stProgD;
            end if;
         when stProgD =>
            if (bitCount = 9) then
               nstate <= stProgDWait;
            end if;
			when stProgDWait =>
				if (bitCount = 11) then
					nstate <= stProgM;
				end if;
         when stProgM =>
            if (bitCount = 9) then
               nstate <= stProgMWait;
            end if;
			when stProgMWait =>
				nstate <= stGo;
			when stGo =>
				nstate <= stWait;
			when stWait =>
				if (DcmProgDone = '1') then
					nstate <= stIdle;
				end if;
      end case;      
   end process;

----------------------------------------------------------------------------------
-- Serialization PLL
-- This PLL generates the x2 and x10 pixel clock needed for TMDS serialization
----------------------------------------------------------------------------------
PllRst <= DcmRst or not DcmLckd;

Inst_10_1_pll : PLL_BASE generic map(
      BANDWIDTH			=> "OPTIMIZED",  		-- "high", "low" or "optimized"
      CLKFBOUT_MULT		=> S,       			-- multiplication factor for all output clocks
		COMPENSATION		=> "INTERNAL",			-- "SYSTEM_SYNCHRONOUS", "SOURCE_SYNCHRONOUS", "INTERNAL", "EXTERNAL", "DCM2PLL", "PLL2DCM"
      DIVCLK_DIVIDE		=> 1,       			-- division factor for all clocks (1 to 52)
      CLKFBOUT_PHASE		=> 0.0,     			-- phase shift (degrees) of all output clocks
		CLK_FEEDBACK		=> "CLKFBOUT",
      CLKIN_PERIOD		=> CLKIN_PERIOD,  		-- clock period (ns) of input clock on clkin1
      CLKOUT0_DIVIDE		=> PLLO0,       			-- division factor for clkout0 (1 to 128)
      CLKOUT2_DIVIDE		=> PLLO2,   			-- division factor for clkout2 (1 to 128)
      CLKOUT3_DIVIDE		=> PLLO3,   			-- division factor for clkout3 (1 to 128)
      REF_JITTER		=> 0.025)       		-- input reference jitter (0.000 to 0.999 ui%)
port map (
      CLKFBOUT			=> intfb,              		-- general output feedback signal
		CLKFBIN			=> intfb,			-- clock feedback input
      CLKOUT0			=> pllout_xs,      		-- x10 clock for transmitter
      CLKOUT1			=> open,
      CLKOUT2			=> pllout_x1,              	-- x1 clock for BUFG
      CLKOUT3			=> pllout_x2,              	-- x2 clock for BUFG
      CLKOUT4			=> open,              		-- one of six general clock output signals
      CLKOUT5			=> open,              		-- one of six general clock output signals
      LOCKED			=> PllLckd,        		-- active high pll lock signal
      CLKIN				=> PClk,	     		-- primary clock input
      RST				=> PllRst);               	-- asynchronous pll reset

----------------------------------------------------------------------------------
-- Route the pixel clock and 2x pixel clock through the global clock network
----------------------------------------------------------------------------------
   BUFG_inst1 : BUFG port map ( O => PCLK_O, I => pllout_x1 );
	BUFG_inst2 : BUFG port map ( O => intpllout_x2, I => pllout_x2 );
	PCLK_X2_O <= intpllout_x2;
	
----------------------------------------------------------------------------------
-- Route High-Speed serialization clock to OSERDES2 primitives in the whole bank
----------------------------------------------------------------------------------

BUFPLL_inst : BUFPLL
   generic map (
      DIVIDE => S/2,         -- DIVCLK divider (1-8)
      ENABLE_SYNC => TRUE  -- Enable synchrnonization between PLL and GCLK (TRUE/FALSE)
   )
   port map (
      IOCLK => PCLK_X10_O,               -- 1-bit Output I/O clock
      LOCK => BufPllLckd,                 -- 1-bit Synchronized LOCK output
      SERDESSTROBE => SERDESSTROBE_O, -- 1-bit Output SERDES strobe (connect to ISERDES/OSERDES)
      GCLK => intpllout_x2,                 -- 1-bit BUFG clock input
      LOCKED => PllLckd,           -- 1-bit LOCKED input from PLL
      PLLIN => pllout_xs            -- 1-bit Clock input from PLL
   );

----------------------------------------------------------------------------------
-- MCB PLL
-- This PLL generates the 2x and 2x_180 clocks for the DDR controller
----------------------------------------------------------------------------------
mcb_PllRst <= DcmRst;

Inst_pll_mcb : PLL_BASE generic map(
      BANDWIDTH			=> "OPTIMIZED",  		-- "high", "low" or "optimized"
      CLKFBOUT_MULT		=> 20,       			-- multiplication factor for all output clocks
		COMPENSATION		=> "INTERNAL",			-- "SYSTEM_SYNCHRONOUS", "SOURCE_SYNCHRONOUS", "INTERNAL", "EXTERNAL", "DCM2PLL", "PLL2DCM"
      DIVCLK_DIVIDE		=> 3,       			-- division factor for all clocks (1 to 52)
      CLKFBOUT_PHASE		=> 0.0,     			-- phase shift (degrees) of all output clocks
		CLK_FEEDBACK		=> "CLKFBOUT",
      CLKIN_PERIOD		=> CLKIN_PERIOD,  		-- clock period (ns) of input clock on clkin1
      CLKOUT0_DIVIDE		=> 1,       			-- division factor for clkout0 (1 to 128)
		CLKOUT0_PHASE     => 0.000,
		CLKOUT0_DUTY_CYCLE => 0.500,
      CLKOUT1_DIVIDE		=> 1,       			-- division factor for clkout1 (1 to 128)
		CLKOUT1_PHASE     => 180.000,
		CLKOUT1_DUTY_CYCLE => 0.500,
      CLKOUT2_DIVIDE		=> 16,       			-- division factor for clkout2 (1 to 128)
		CLKOUT2_PHASE     => 0.000,
		CLKOUT2_DUTY_CYCLE => 0.500,		
      REF_JITTER		=> 0.040)       		-- input reference jitter (0.000 to 0.999 ui%)
port map (
      CLKFBOUT			=> mcb_intfb,        -- general output feedback signal
		CLKFBIN			=> mcb_intfb,			-- clock feedback input
      CLKOUT0			=> ddr2clk_2x,      		-- ddr2 clk x2 clock
      CLKOUT1			=> ddr2clk_2x_180,		-- ddr2 clk x2 inverted clock
      CLKOUT2			=> mcb_drp_clk_bfg,    	-- x1 clock for BUFG
      CLKOUT3			=> open,              	-- x2 clock for BUFG
      CLKOUT4			=> open,              		-- one of six general clock output signals
      CLKOUT5			=> open,              		-- one of six general clock output signals
      LOCKED			=> mcb_PllLckd,        		-- active high pll lock signal
      CLKIN				=> SysConCLK,	     		-- primary clock input
      RST				=> mcb_PllRst);               	-- asynchronous pll reset

BUFG_inst3 : BUFG port map ( O => mcb_drp_clk, I => mcb_drp_clk_bfg );

BUFPLL_MCB_INST : BUFPLL_MCB
port map
( IOCLK0         => DDR2CLK_2X_O,	
  IOCLK1         => DDR2CLK_2X_180_O, 
  LOCKED         => mcb_PllLckd,
  GCLK           => mcb_drp_clk,
  SERDESSTROBE0  => PLL_CE_0_O, 
  SERDESSTROBE1  => PLL_CE_90_O, 
  PLLIN0         => ddr2clk_2x,  
  PLLIN1         => ddr2clk_2x_180,
  LOCK           => mcb_BufPllLckd 
  ); 

MCB_DRP_CLK_O <= mcb_drp_clk;
PLL_LOCK <= mcb_BufPllLckd;
 
end Behavioral;

