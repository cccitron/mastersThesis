--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:00:27 02/22/2014
-- Design Name:   
-- Module Name:   /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/source/tb_VmodCAM_Ref.vhd
-- Project Name:  VmodCAM_Ref_VGA_Split
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: VmodCAM_Ref
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
 
ENTITY tb_VmodCAM_Ref IS
END tb_VmodCAM_Ref;
 
ARCHITECTURE behavior OF tb_VmodCAM_Ref IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT VmodCAM_Ref
    PORT(
         TMDS_TX_2_P : OUT  std_logic;
         TMDS_TX_2_N : OUT  std_logic;
         TMDS_TX_1_P : OUT  std_logic;
         TMDS_TX_1_N : OUT  std_logic;
         TMDS_TX_0_P : OUT  std_logic;
         TMDS_TX_0_N : OUT  std_logic;
         TMDS_TX_CLK_P : OUT  std_logic;
         TMDS_TX_CLK_N : OUT  std_logic;
         TMDS_TX_SCL : INOUT  std_logic;
         TMDS_TX_SDA : INOUT  std_logic;
         SW_I : IN  std_logic_vector(7 downto 0);
         LED_O : OUT  std_logic_vector(7 downto 0);
         CLK_I : IN  std_logic;
         RESET_I : IN  std_logic;
         CAMA_SDA : INOUT  std_logic;
         CAMA_SCL : INOUT  std_logic;
         CAMA_D_I : IN  std_logic_vector(7 downto 0);
         CAMA_PCLK_I : INOUT  std_logic;
         CAMA_MCLK_O : OUT  std_logic;
         CAMA_LV_I : IN  std_logic;
         CAMA_FV_I : IN  std_logic;
         CAMA_RST_O : OUT  std_logic;
         CAMA_PWDN_O : OUT  std_logic;
         CAMX_VDDEN_O : OUT  std_logic;
         CAMB_SDA : INOUT  std_logic;
         CAMB_SCL : INOUT  std_logic;
         CAMB_D_I : IN  std_logic_vector(7 downto 0);
         CAMB_PCLK_I : INOUT  std_logic;
         CAMB_MCLK_O : OUT  std_logic;
         CAMB_LV_I : IN  std_logic;
         CAMB_FV_I : IN  std_logic;
         CAMB_RST_O : OUT  std_logic;
         CAMB_PWDN_O : OUT  std_logic;
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
         mcb3_dram_ck_n : OUT  std_logic;
         fx2Clk_in : IN  std_logic;
         fx2Addr_out : OUT  std_logic_vector(1 downto 0);
         fx2Data_io : INOUT  std_logic_vector(7 downto 0);
         fx2Read_out : OUT  std_logic;
         fx2OE_out : OUT  std_logic;
         fx2GotData_in : IN  std_logic;
         fx2Write_out : OUT  std_logic;
         fx2GotRoom_in : IN  std_logic;
         fx2PktEnd_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal SW_I : std_logic_vector(7 downto 0) := (others => '0');
   signal CLK_I : std_logic := '0';
   signal RESET_I : std_logic := '0';
   signal CAMA_D_I : std_logic_vector(7 downto 0) := (others => '0');
   signal CAMA_LV_I : std_logic := '0';
   signal CAMA_FV_I : std_logic := '0';
   signal CAMB_D_I : std_logic_vector(7 downto 0) := (others => '0');
   signal CAMB_LV_I : std_logic := '0';
   signal CAMB_FV_I : std_logic := '0';
   signal fx2Clk_in : std_logic := '0';
   signal fx2GotData_in : std_logic := '0';
   signal fx2GotRoom_in : std_logic := '0';

	--BiDirs
   signal TMDS_TX_SCL : std_logic;
   signal TMDS_TX_SDA : std_logic;
   signal CAMA_SDA : std_logic;
   signal CAMA_SCL : std_logic;
   signal CAMA_PCLK_I : std_logic;
   signal CAMB_SDA : std_logic;
   signal CAMB_SCL : std_logic;
   signal CAMB_PCLK_I : std_logic;
   signal mcb3_dram_dq : std_logic_vector(15 downto 0);
   signal mcb3_dram_udqs : std_logic;
   signal mcb3_dram_udqs_n : std_logic;
   signal mcb3_rzq : std_logic;
   signal mcb3_zio : std_logic;
   signal mcb3_dram_dqs : std_logic;
   signal mcb3_dram_dqs_n : std_logic;
   signal fx2Data_io : std_logic_vector(7 downto 0);

 	--Outputs
   signal TMDS_TX_2_P : std_logic;
   signal TMDS_TX_2_N : std_logic;
   signal TMDS_TX_1_P : std_logic;
   signal TMDS_TX_1_N : std_logic;
   signal TMDS_TX_0_P : std_logic;
   signal TMDS_TX_0_N : std_logic;
   signal TMDS_TX_CLK_P : std_logic;
   signal TMDS_TX_CLK_N : std_logic;
   signal LED_O : std_logic_vector(7 downto 0);
   signal CAMA_MCLK_O : std_logic;
   signal CAMA_RST_O : std_logic;
   signal CAMA_PWDN_O : std_logic;
   signal CAMX_VDDEN_O : std_logic;
   signal CAMB_MCLK_O : std_logic;
   signal CAMB_RST_O : std_logic;
   signal CAMB_PWDN_O : std_logic;
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
   signal fx2Addr_out : std_logic_vector(1 downto 0);
   signal fx2Read_out : std_logic;
   signal fx2OE_out : std_logic;
   signal fx2Write_out : std_logic;
   signal fx2PktEnd_out : std_logic;

   -- Clock period definitions
   constant CLK_I_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: VmodCAM_Ref PORT MAP (
          TMDS_TX_2_P => TMDS_TX_2_P,
          TMDS_TX_2_N => TMDS_TX_2_N,
          TMDS_TX_1_P => TMDS_TX_1_P,
          TMDS_TX_1_N => TMDS_TX_1_N,
          TMDS_TX_0_P => TMDS_TX_0_P,
          TMDS_TX_0_N => TMDS_TX_0_N,
          TMDS_TX_CLK_P => TMDS_TX_CLK_P,
          TMDS_TX_CLK_N => TMDS_TX_CLK_N,
          TMDS_TX_SCL => TMDS_TX_SCL,
          TMDS_TX_SDA => TMDS_TX_SDA,
          SW_I => SW_I,
          LED_O => LED_O,
          CLK_I => CLK_I,
          RESET_I => RESET_I,
          CAMA_SDA => CAMA_SDA,
          CAMA_SCL => CAMA_SCL,
          CAMA_D_I => CAMA_D_I,
          CAMA_PCLK_I => CAMA_PCLK_I,
          CAMA_MCLK_O => CAMA_MCLK_O,
          CAMA_LV_I => CAMA_LV_I,
          CAMA_FV_I => CAMA_FV_I,
          CAMA_RST_O => CAMA_RST_O,
          CAMA_PWDN_O => CAMA_PWDN_O,
          CAMX_VDDEN_O => CAMX_VDDEN_O,
          CAMB_SDA => CAMB_SDA,
          CAMB_SCL => CAMB_SCL,
          CAMB_D_I => CAMB_D_I,
          CAMB_PCLK_I => CAMB_PCLK_I,
          CAMB_MCLK_O => CAMB_MCLK_O,
          CAMB_LV_I => CAMB_LV_I,
          CAMB_FV_I => CAMB_FV_I,
          CAMB_RST_O => CAMB_RST_O,
          CAMB_PWDN_O => CAMB_PWDN_O,
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
          mcb3_dram_ck_n => mcb3_dram_ck_n,
          fx2Clk_in => fx2Clk_in,
          fx2Addr_out => fx2Addr_out,
          fx2Data_io => fx2Data_io,
          fx2Read_out => fx2Read_out,
          fx2OE_out => fx2OE_out,
          fx2GotData_in => fx2GotData_in,
          fx2Write_out => fx2Write_out,
          fx2GotRoom_in => fx2GotRoom_in,
          fx2PktEnd_out => fx2PktEnd_out
        );

   -- Clock process definitions
   CLK_I_process :process
   begin
		CLK_I <= '0';
		wait for CLK_I_period/2;
		CLK_I <= '1';
		wait for CLK_I_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_I_period*10;

      -- insert stimulus here 
		CAMA_D_I <= x"0f";
		
      wait;
   end process;

END;
