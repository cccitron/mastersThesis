--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:21:25 03/01/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/camera/tb_FBCtl.vhd
-- Project Name:  VmodCAM_Ref_VGA_Split
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FBCtl
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_FBCtl IS
END tb_FBCtl;
 
ARCHITECTURE behavior OF tb_FBCtl IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FBCtl
    PORT(
         RDY_O : OUT  std_logic;
         ENC : IN  std_logic;
         RSTC_I : IN  std_logic;
         DOC : OUT  std_logic_vector(15 downto 0);
         CLKC : IN  std_logic;
         RD_MODE : IN  std_logic_vector(1 downto 0);
         ENB : IN  std_logic;
         RSTB_I : IN  std_logic;
         DIB : IN  std_logic_vector(15 downto 0);
         CLKB : IN  std_logic;
         ENA : IN  std_logic;
         RSTA_I : IN  std_logic;
         DIA : IN  std_logic_vector(15 downto 0);
         CLKA : IN  std_logic;
         ddr2clk_2x : IN  std_logic;
         ddr2clk_2x_180 : IN  std_logic;
         pll_ce_0 : IN  std_logic;
         pll_ce_90 : IN  std_logic;
         pll_lock : IN  std_logic;
         async_rst : IN  std_logic;
         mcb_drp_clk : IN  std_logic;
         mcb3_dram_dq : INOUT  std_logic_vector(15 downto 0);
         mcb3_dram_a : OUT  std_logic_vector(12 downto 0);
         mcb3_dram_ba : OUT  std_logic_vector(2 downto 0);
         mcb3_dram_ras_n : OUT  std_logic;
         mcb3_dram_cas_n : OUT  std_logic;
         mcb3_dram_we_n : OUT  std_logic;
         mcb3_dram_odt : OUT  std_logic;
         mcb3_dram_cke : OUT  std_logic;
         mcb3_dram_dm : OUT  std_logic;
         mcb3_dram_udqs : INOUT  std_logic;
         mcb3_dram_udqs_n : INOUT  std_logic;
         mcb3_rzq : INOUT  std_logic;
         mcb3_zio : INOUT  std_logic;
         mcb3_dram_udm : OUT  std_logic;
         mcb3_dram_dqs : INOUT  std_logic;
         mcb3_dram_dqs_n : INOUT  std_logic;
         mcb3_dram_ck : OUT  std_logic;
         mcb3_dram_ck_n : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ENC : std_logic := '0';
   signal RSTC_I : std_logic := '0';
   signal CLKC : std_logic := '0';
   signal RD_MODE : std_logic_vector(1 downto 0) := (others => '0');
   signal ENB : std_logic := '0';
   signal RSTB_I : std_logic := '0';
   signal DIB : std_logic_vector(15 downto 0) := (others => '0');
   signal CLKB : std_logic := '0';
   signal ENA : std_logic := '0';
   signal RSTA_I : std_logic := '0';
   signal DIA : std_logic_vector(15 downto 0) := (others => '0');
   signal CLKA : std_logic := '0';
   signal ddr2clk_2x : std_logic := '0';
   signal ddr2clk_2x_180 : std_logic := '0';
   signal pll_ce_0 : std_logic := '0';
   signal pll_ce_90 : std_logic := '0';
   signal pll_lock : std_logic := '0';
   signal async_rst : std_logic := '0';
   signal mcb_drp_clk : std_logic := '0';

	--BiDirs
   signal mcb3_dram_dq : std_logic_vector(15 downto 0);
   signal mcb3_dram_udqs : std_logic;
   signal mcb3_dram_udqs_n : std_logic;
   signal mcb3_rzq : std_logic;
   signal mcb3_zio : std_logic;
   signal mcb3_dram_dqs : std_logic;
   signal mcb3_dram_dqs_n : std_logic;

 	--Outputs
   signal RDY_O : std_logic;
   signal DOC : std_logic_vector(15 downto 0);
   signal mcb3_dram_a : std_logic_vector(12 downto 0);
   signal mcb3_dram_ba : std_logic_vector(2 downto 0);
   signal mcb3_dram_ras_n : std_logic;
   signal mcb3_dram_cas_n : std_logic;
   signal mcb3_dram_we_n : std_logic;
   signal mcb3_dram_odt : std_logic;
   signal mcb3_dram_cke : std_logic;
   signal mcb3_dram_dm : std_logic;
   signal mcb3_dram_udm : std_logic;
   signal mcb3_dram_ck : std_logic;
   signal mcb3_dram_ck_n : std_logic;

   -- Clock period definitions
   constant CLKC_period : time := 10 ns;
   constant CLKB_period : time := 10 ns;
   constant CLKA_period : time := 10 ns;
   constant mcb_drp_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FBCtl PORT MAP (
          RDY_O => RDY_O,
          ENC => ENC,
          RSTC_I => RSTC_I,
          DOC => DOC,
          CLKC => CLKC,
          RD_MODE => RD_MODE,
          ENB => ENB,
          RSTB_I => RSTB_I,
          DIB => DIB,
          CLKB => CLKB,
          ENA => ENA,
          RSTA_I => RSTA_I,
          DIA => DIA,
          CLKA => CLKA,
          ddr2clk_2x => ddr2clk_2x,
          ddr2clk_2x_180 => ddr2clk_2x_180,
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

   -- Clock process definitions
   CLKC_process :process
   begin
		CLKC <= '0';
		wait for CLKC_period/2;
		CLKC <= '1';
		wait for CLKC_period/2;
   end process;
 
   CLKB_process :process
   begin
		CLKB <= '0';
		wait for CLKB_period/2;
		CLKB <= '1';
		wait for CLKB_period/2;
   end process;
 
   CLKA_process :process
   begin
		CLKA <= '0';
		wait for CLKA_period/2;
		CLKA <= '1';
		wait for CLKA_period/2;
   end process;
 
   mcb_drp_clk_process :process
   begin
		mcb_drp_clk <= '0';
		wait for mcb_drp_clk_period/2;
		mcb_drp_clk <= '1';
		wait for mcb_drp_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLKC_period*10;

      -- insert stimulus here 
		ENA <= '1';
		wait for 10 ns;
		DIA <= x"a65f";
		
		
		wait for 20 ns;
		DIA <= x"f56a";
		
		wait for 20 ns;
		ENA <= '0';

      wait;
   end process;

END;
