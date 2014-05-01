------------------------------------------------------------------------------
-- user_logic.vhd - entity/architecture pair
------------------------------------------------------------------------------
--
-- ***************************************************************************
-- ** Copyright (c) 1995-2010 Xilinx, Inc.  All rights reserved.            **
-- **                                                                       **
-- ** Xilinx, Inc.                                                          **
-- ** XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"         **
-- ** AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND       **
-- ** SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,        **
-- ** OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,        **
-- ** APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION           **
-- ** THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,     **
-- ** AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE      **
-- ** FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY              **
-- ** WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE               **
-- ** IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR        **
-- ** REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF       **
-- ** INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS       **
-- ** FOR A PARTICULAR PURPOSE.                                             **
-- **                                                                       **
-- ***************************************************************************
--
------------------------------------------------------------------------------
-- Filename:          user_logic.vhd
-- Version:           1.00.a
-- Description:       User logic.
-- Date:              Mon Sep 06 18:08:57 2010 (by Create and Import Peripheral Wizard)
-- VHDL Standard:     VHDL'93
------------------------------------------------------------------------------
-- Naming Conventions:
--   active low signals:                    "*_n"
--   clock signals:                         "clk", "clk_div#", "clk_#x"
--   reset signals:                         "rst", "rst_n"
--   generics:                              "C_*"
--   user defined types:                    "*_TYPE"
--   state machine next state:              "*_ns"
--   state machine current state:           "*_cs"
--   combinatorial signals:                 "*_com"
--   pipelined or register delay signals:   "*_d#"
--   counter signals:                       "*cnt*"
--   clock enable signals:                  "*_ce"
--   internal version of output port:       "*_i"
--   device pins:                           "*_pin"
--   ports:                                 "- Names begin with Uppercase"
--   processes:                             "*_PROCESS"
--   component instantiations:              "<ENTITY_>I_<#|FUNC>"
------------------------------------------------------------------------------

-- DO NOT EDIT BELOW THIS LINE --------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

library proc_common_v3_00_a;
use proc_common_v3_00_a.proc_common_pkg.all;

-- DO NOT EDIT ABOVE THIS LINE --------------------

--USER libraries added here

------------------------------------------------------------------------------
-- Entity section
------------------------------------------------------------------------------
-- Definition of Generics:
--   C_SLV_DWIDTH                 -- Slave interface data bus width
--   C_NUM_REG                    -- Number of software accessible registers
--
-- Definition of Ports:
--   Bus2IP_Clk                   -- Bus to IP clock
--   Bus2IP_Reset                 -- Bus to IP reset
--   Bus2IP_Data                  -- Bus to IP data bus
--   Bus2IP_BE                    -- Bus to IP byte enables
--   Bus2IP_RdCE                  -- Bus to IP read chip enable
--   Bus2IP_WrCE                  -- Bus to IP write chip enable
--   IP2Bus_Data                  -- IP to Bus data bus
--   IP2Bus_RdAck                 -- IP to Bus read transfer acknowledgement
--   IP2Bus_WrAck                 -- IP to Bus write transfer acknowledgement
--   IP2Bus_Error                 -- IP to Bus error response
------------------------------------------------------------------------------

entity d_usb_imp is
  generic
  (
    -- ADD USER GENERICS BELOW THIS LINE ---------------
     C_NUM_USER_REGS					  : integer 				:= 256;
	  FIFO_ADDR_WIDTH					  : integer 				:= 11;
    -- ADD USER GENERICS ABOVE THIS LINE ---------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol parameters, do not add to or delete
    C_SLV_DWIDTH                   : integer              := 32;
    C_NUM_REG                      : integer              := 12
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );
  port
  (
    -- ADD USER PORTS BELOW THIS LINE ------------------
    		--------------- DSTM and EPP Side ports ------------------------------------------
		
		IFCLK									: in std_logic; -- interface clock 
		STMEN									: in std_logic; -- stream enable : active high enable for the stream data transfer
		FLAGA									: in std_logic; -- FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		FLAGB									: in std_logic; -- FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		FLAGC									: in std_logic; -- EPP protocol RNW signal
		
		SLRD									: out std_logic; -- signal used to read from OUT FIFO
		SLWR									: out std_logic; -- signal used to write to IN FIFO
		SLOE									: out std_logic; -- FIFO output enable 
		FIFOADR								: out std_logic_vector ( 1 downto 0 ); -- FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		PKTEND								: out std_logic; -- IN transfer end 
		EPPRST								: in std_logic; -- EPP reset
		int_usb								: out std_logic; -- USB intrerrupt request

		DB_I									: in std_logic_vector ( 7 downto 0 ); -- data in
		DB_O									: out std_logic_vector ( 7 downto 0 ); -- data out
		DB_T									: out std_logic_vector ( 7 downto 0 ); -- Data tristate enable. If 1 : DB is set as input, if 0 : DB is set as output
    
		IRQ_DSTM								: out std_logic; -- interrupt request from the DSTM interface
		IRQ_EPP								: out std_logic; -- interrupt request from the EPP interface
	 
	 -- ADD USER PORTS ABOVE THIS LINE ------------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol ports, do not add to or delete
    Bus2IP_Clk                     : in  std_logic;
    Bus2IP_Reset                   : in  std_logic;
    Bus2IP_Data                    : in  std_logic_vector(0 to C_SLV_DWIDTH-1);
    Bus2IP_BE                      : in  std_logic_vector(0 to C_SLV_DWIDTH/8-1);
    Bus2IP_RdCE                    : in  std_logic_vector(0 to C_NUM_REG-1);
    Bus2IP_WrCE                    : in  std_logic_vector(0 to C_NUM_REG-1);
    IP2Bus_Data                    : out std_logic_vector(0 to C_SLV_DWIDTH-1);
    IP2Bus_RdAck                   : out std_logic;
    IP2Bus_WrAck                   : out std_logic;
    IP2Bus_Error                   : out std_logic
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );

  attribute SIGIS : string;
  attribute SIGIS of Bus2IP_Clk    : signal is "CLK";
  attribute SIGIS of Bus2IP_Reset  : signal is "RST";

end entity d_usb_imp;

------------------------------------------------------------------------------
-- Architecture section
------------------------------------------------------------------------------

architecture IMP of d_usb_imp is

  --USER signal declarations added here, as needed for user logic

  ------------------------------------------
  -- Signals for user logic slave model s/w accessible register example
  ------------------------------------------
  signal EPP_DATA_REG                   : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal EPP_ADDRESS_REG                : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal EPP_STATUS_REG                 : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal EPP_CONTROL_REG                : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal DSTM_DOUT_REG                  : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal DSTM_DIN_REG                   : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal DSTM_STATUS_REG                : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal FIFO_TO_PROC_STATUS_REG        : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal FIFO_FROM_PROC_STATUS_REG      : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal DSTM_CONTROL_REG               : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_reg10                      : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_reg11                      : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_reg_write_sel              : std_logic_vector(0 to 11);
  signal slv_reg_read_sel               : std_logic_vector(0 to 11);
  signal slv_ip2bus_data                : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_read_ack                   : std_logic;
  signal slv_write_ack                  : std_logic;


component usb_epp_dstm 	
	generic ( C_NUM_USER_REGS: integer := 256;
				 FIFO_ADDR_WIDTH: integer := 11
	);
	port
	(
		-- bus protocol ports
		Bus2IP_Clk				: in std_logic;
		Bus2IP_Reset			: in std_logic;
		Reset_DSTM				: in std_logic;
		Reset_EPP				: in std_logic;
			
	   -- USB_EPP processor side ports
		-- RAM read and write ports
		RAM_Addr_EPP						: in std_logic_vector ( 7 downto 0 ); 
		DIN_EPP								: in std_logic_vector ( 7 downto 0 ); 
		WRE_Data_EPP						: in std_logic;       
		EN_Mem_EPP							: in std_logic;          
		Sel_Ext_Addr_EPP					: in std_logic;
	   address_reg_EPP					: out std_logic_vector ( 7 downto 0);
		update_current_address_EPP		: out std_logic;
		DOUT_EPP								: out std_logic_vector (7 downto 0);

		--USB_EPP control signals from the processor side
		Bypass_ISR_Write_EPP				: in std_logic;
		Bypass_ISR_Read_EPP				: in std_logic;
		--USB_EPP status signals
		IRQ_EPP								: out std_logic;
		Read_Requested_EPP				: out std_logic;
		Write_Performed_EPP				: out std_logic;
		EPP_Performing						: out std_logic;
		
		--DSTM Processor side control and status signals
		Set_Pktend_DSTM					: in std_logic; -- control signal from the processor side to set PKTEND when fifo_from_proce becomes empty
		
		IRQ_DSTM								: out std_logic; -- interrupt request for processor side FIFO read or write
		Done_Transfer_DSTM				: out std_logic; -- DSTM transfer done signal
		Proc_Read_Expected_DSTM			: out std_logic; -- status signal showing that processor side read from fifo_to_proc is expected
		Proc_Write_Expected_DSTM		: out std_logic; -- status signal showing that processor side write to fifo_from_proc is expected
		Done_Write_Transaction_DSTM	: out std_logic; -- write to DSTM  done and there is no other transaction running
		Done_Read_Transaction_DSTM		: out std_logic; -- read from DSTM done and there is no other transaction running
		
	   --FIFO read side from processor signals
		DOUT_to_proc_DSTM					: out std_logic_vector ( 7 downto 0); -- data out : data read by the processor
		rden_from_proc_DSTM				: in std_logic; -- read enable : signal coming from DSTM state machine
		--FIFO to processor status signals
		fifo_to_proc_full					: out std_logic; -- FIFO read by the processor full signal
		fifo_to_proc_afull				: out std_logic; -- FIFO read by the processor almost full signal
		fifo_to_proc_empty				: out std_logic; -- FIFO read by the processor empty signal
		fifo_to_proc_aempty				: out std_logic; -- FIFO read by the processor almost empty signal
		fifo_to_proc_count				: out std_logic_vector ( FIFO_ADDR_WIDTH downto 0 ); -- FIFO read by the processor data count signal
		
		--FIFO write side from processor signals
		DIN_from_proc_DSTM				: in std_logic_vector ( 7 downto 0 ); -- data in : data written by the processor
		wen_from_proc_DSTM				: in std_logic; -- write enable : signal controlled by the processor
		--FIFO from processor status signals
		fifo_from_proc_full				: out std_logic; -- FIFO written by the processor full signal
		fifo_from_proc_afull				: out std_logic; -- FIFO written by the processor almost full signal
		fifo_from_proc_empty				: out std_logic; -- FIFO written by the processor empty signal
		fifo_from_proc_aempty			: out std_logic; -- FIFO written by the processor almost empty signal
		fifo_from_proc_count				: out std_logic_vector ( FIFO_ADDR_WIDTH downto 0 ); -- FIFO written by the processor data count signal
		
		--------------- DSTM and EPP Side ports ------------------------------------------
		
		IFCLK									: in std_logic; -- interface clock 
		STMEN									: in std_logic; -- stream enable : active high enable for the stream data transfer
		FLAGA									: in std_logic; -- FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		FLAGB									: in std_logic; -- FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		FLAGC									: in std_logic; -- EPP protocol RNW signal
		
		SLRD									: out std_logic; -- signal used to read from OUT FIFO
		SLWR									: out std_logic; -- signal used to write to IN FIFO
		SLOE									: out std_logic; -- FIFO output enable 
		FIFOADR								: out std_logic_vector ( 1 downto 0 ); -- FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		PKTEND								: out std_logic; -- IN transfer end 
		EPPRST								: in std_logic; -- EPP reset
		int_usb								: out std_logic; -- USB intrerrupt request

		DB_I									: in std_logic_vector ( 7 downto 0 ); -- data in
		DB_O									: out std_logic_vector ( 7 downto 0 ); -- data out
		DB_T									: out std_logic_vector ( 7 downto 0 ) -- Data tristate enable. If 1 : DB is set as input, if 0 : DB is set as output
		);

end component;


signal		Reset_DSTM							: std_logic;
signal		Reset_EPP							: std_logic;

signal		RAM_Addr_EPP						: std_logic_vector ( 7 downto 0 ); 
signal		DIN_EPP								: std_logic_vector ( 7 downto 0 ); 
signal		WRE_Data_EPP						: std_logic;       
signal		EN_Mem_EPP							: std_logic;          
signal		Sel_Ext_Addr_EPP					: std_logic;
signal	   address_reg_EPP					: std_logic_vector ( 7 downto 0);
signal		update_current_address_EPP		: std_logic;
signal		DOUT_EPP								: std_logic_vector (7 downto 0);

signal 		Read_Epp_Data_Mem					: std_logic_vector (2 downto 0);
signal 		Write_Epp_Data_Mem				: std_logic_vector (1 downto 0);

signal		Bypass_ISR_Write_EPP				: std_logic;
signal		Bypass_ISR_Read_EPP				: std_logic;
		--USB_EPP status signals

signal		Read_Requested_EPP				: std_logic;
signal		Write_Performed_EPP				: std_logic;
signal		EPP_Performing						: std_logic;

signal		Set_Pktend_DSTM					: std_logic; -- control signal from the processor side to set PKTEND when fifo_from_proce becomes empty

signal		Done_Transfer_DSTM				: std_logic; -- DSTM transfer done signal
signal		Proc_Read_Expected_DSTM			: std_logic; -- status signal showing that processor side read from fifo_to_proc is expected
signal		Proc_Write_Expected_DSTM		: std_logic; -- status signal showing that processor side write to fifo_from_proc is expected
signal		Done_Write_Transaction_DSTM	: std_logic; -- write to DSTM  done and there is no other transaction running
signal		Done_Read_Transaction_DSTM		: std_logic; -- read from DSTM done and there is no other transaction running

	   --FIFO read side from processor signals
signal		DOUT_to_proc_DSTM					: std_logic_vector ( 7 downto 0); -- data out : data read by the processor
signal		rden_from_proc_DSTM				: std_logic; -- read enable : signal coming from DSTM state machine

signal		rden_fifo_from_proc				: std_logic_vector ( 2 downto 0 );

		--FIFO to processor status signals
signal		fifo_to_proc_full					: std_logic; -- FIFO read by the processor full signal
signal		fifo_to_proc_afull				: std_logic; -- FIFO read by the processor almost full signal
signal		fifo_to_proc_empty				: std_logic; -- FIFO read by the processor empty signal
signal		fifo_to_proc_aempty				: std_logic; -- FIFO read by the processor almost empty signal
signal		fifo_to_proc_count				: std_logic_vector ( FIFO_ADDR_WIDTH downto 0 ); -- FIFO read by the processor data count signal
		
		--FIFO write side from processor signals
signal		DIN_from_proc_DSTM				: std_logic_vector ( 7 downto 0 ); -- data in : data written by the processor
signal		wen_from_proc_DSTM				: std_logic; -- write enable : signal controlled by the processor

signal		wen_fifo_from_proc				: std_logic_vector ( 1 downto 0 );

		--FIFO from processor status signals
signal		fifo_from_proc_full				: std_logic; -- FIFO written by the processor full signal
signal		fifo_from_proc_afull				: std_logic; -- FIFO written by the processor almost full signal
signal		fifo_from_proc_empty				: std_logic; -- FIFO written by the processor empty signal
signal		fifo_from_proc_aempty			: std_logic; -- FIFO written by the processor almost empty signal
signal		fifo_from_proc_count				: std_logic_vector ( FIFO_ADDR_WIDTH downto 0 ); -- FIFO written by the processor data count signal
		

begin

  --USER logic implementation added here

Reset_EPP						<=	EPP_CONTROL_REG (C_SLV_DWIDTH - 12);
RAM_Addr_EPP					<= EPP_CONTROL_REG (C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1);
DIN_EPP							<=	EPP_DATA_REG (C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1);
Sel_Ext_Addr_EPP				<=	EPP_CONTROL_REG (C_SLV_DWIDTH - 9);

Bypass_ISR_Write_EPP			<= EPP_CONTROL_REG (C_SLV_DWIDTH - 11);
Bypass_ISR_Read_EPP			<= EPP_CONTROL_REG (C_SLV_DWIDTH - 10);
		
Set_Pktend_DSTM				<= DSTM_CONTROL_REG (C_SLV_DWIDTH - 1); -- control signal from the processor side to set PKTEND when fifo_from_proce becomes empty
Reset_DSTM						<= DSTM_CONTROL_REG (C_SLV_DWIDTH - 2);

DIN_from_proc_DSTM			<= DSTM_DOUT_REG (C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1); -- data in : data written by the processor


		
Assign_Read_Epp_Mem: process (Bus2IP_Clk) is
begin
	if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
		if Bus2IP_Reset = '1' then
			Read_Epp_Data_Mem <= (others => '0');
		else
			Read_Epp_Data_Mem ( 2 downto 0 ) <= Read_Epp_Data_Mem ( 1 downto 0 ) & slv_reg_read_sel(0);
		end if;
	end if;
end process Assign_Read_Epp_Mem;

EN_Mem_EPP <= Read_Epp_Data_Mem(0) or Write_Epp_Data_Mem(0);

Assign_Write_Epp_Mem: process (Bus2IP_Clk) is
begin
	if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
		if Bus2IP_Reset = '1' then
			Write_Epp_Data_Mem <= (others => '0');
		else
			Write_Epp_Data_Mem( 1 downto 0 ) <= Write_Epp_Data_Mem(0) & slv_reg_write_sel(0);
		end if;
	end if;
end process Assign_Write_Epp_Mem;

WRE_Data_EPP <= Write_Epp_Data_Mem(0);


Assign_Rden_fifo_from_proc: process (Bus2IP_Clk) is
begin
	if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
		if Bus2IP_Reset = '1' then
			rden_fifo_from_proc <= (others => '0');
		else
			rden_fifo_from_proc ( 2 downto 0 ) <= rden_fifo_from_proc ( 1 downto 0 ) & slv_reg_read_sel(5);
		end if;
	end if;
end process Assign_Rden_fifo_from_proc;

rden_from_proc_DSTM <= rden_fifo_from_proc(0);

Assign_wen_fifo_from_proc: process (Bus2IP_Clk) is
begin
	if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
		if Bus2IP_Reset = '1' then
			wen_fifo_from_proc <= (others => '0');
		else
			wen_fifo_from_proc( 1 downto 0 ) <= wen_fifo_from_proc(0) & slv_reg_write_sel(4);
		end if;
	end if;
end process Assign_wen_fifo_from_proc;

wen_from_proc_DSTM <= wen_fifo_from_proc(0);

usb_epp_dstm_inst_0: usb_epp_dstm
 	
	generic map 
	( 
		C_NUM_USER_REGS	=> C_NUM_USER_REGS,
		FIFO_ADDR_WIDTH =>	FIFO_ADDR_WIDTH
	)
	port map
	(
		-- bus protocol ports
		Bus2IP_Clk							=>	Bus2IP_Clk,
		Bus2IP_Reset						=>	Bus2IP_Reset,
		Reset_DSTM							=>	Reset_DSTM,
		Reset_EPP							=>	Reset_EPP,
			
	   -- USB_EPP processor side ports
		-- RAM read and write ports
		RAM_Addr_EPP						=>	RAM_Addr_EPP,
		DIN_EPP								=>	DIN_EPP,
		WRE_Data_EPP						=>	WRE_Data_EPP,
		EN_Mem_EPP							=>	EN_Mem_EPP,     
		Sel_Ext_Addr_EPP					=>	Sel_Ext_Addr_EPP,
	   address_reg_EPP					=>	address_reg_EPP,
		update_current_address_EPP		=> update_current_address_EPP,
		DOUT_EPP								=>	DOUT_EPP,

		--USB_EPP control signals from the processor side
		Bypass_ISR_Write_EPP				=>	Bypass_ISR_Write_EPP,
		Bypass_ISR_Read_EPP				=>	Bypass_ISR_Read_EPP,
		--USB_EPP status signals
		IRQ_EPP								=>	IRQ_EPP,
		Read_Requested_EPP				=>	Read_Requested_EPP,
		Write_Performed_EPP				=>	Write_Performed_EPP,
		EPP_Performing						=>	EPP_Performing,
		
		--DSTM Processor side control and status signals
		Set_Pktend_DSTM					=>	Set_Pktend_DSTM, -- control signal from the processor side to set PKTEND when fifo_from_proce becomes empty
		
		IRQ_DSTM								=>	IRQ_DSTM, -- interrupt request for processor side FIFO read or write
		Done_Transfer_DSTM				=>	Done_Transfer_DSTM, -- DSTM transfer done signal
		Proc_Read_Expected_DSTM			=>	Proc_Read_Expected_DSTM, -- status signal showing that processor side read from fifo_to_proc is expected
		Proc_Write_Expected_DSTM		=>	Proc_Write_Expected_DSTM, -- status signal showing that processor side write to fifo_from_proc is expected
		Done_Write_Transaction_DSTM	=>	Done_Write_Transaction_DSTM, -- write to DSTM  done and there is no other transaction running
		Done_Read_Transaction_DSTM		=>	Done_Read_Transaction_DSTM, -- read from DSTM done and there is no other transaction running
		
	   --FIFO read side from processor signals
		DOUT_to_proc_DSTM					=>	DOUT_to_proc_DSTM, -- data out : data read by the processor
		rden_from_proc_DSTM				=>	rden_from_proc_DSTM, -- read enable : signal coming from DSTM state machine
		--FIFO to processor status signals
		fifo_to_proc_full					=>	fifo_to_proc_full, -- FIFO read by the processor full signal
		fifo_to_proc_afull				=>	fifo_to_proc_afull, -- FIFO read by the processor almost full signal
		fifo_to_proc_empty				=>	fifo_to_proc_empty, -- FIFO read by the processor empty signal
		fifo_to_proc_aempty				=>	fifo_to_proc_aempty, -- FIFO read by the processor almost empty signal
		fifo_to_proc_count				=>	fifo_to_proc_count, -- FIFO read by the processor data count signal
		
		--FIFO write side from processor signals
		DIN_from_proc_DSTM				=>	DIN_from_proc_DSTM, -- data in : data written by the processor
		wen_from_proc_DSTM				=>	wen_from_proc_DSTM, -- write enable : signal controlled by the processor
		--FIFO from processor status signals
		fifo_from_proc_full				=>	fifo_from_proc_full, -- FIFO written by the processor full signal
		fifo_from_proc_afull				=>	fifo_from_proc_afull, -- FIFO written by the processor almost full signal
		fifo_from_proc_empty				=>	fifo_from_proc_empty, -- FIFO written by the processor empty signal
		fifo_from_proc_aempty			=>	fifo_from_proc_aempty, -- FIFO written by the processor almost empty signal
		fifo_from_proc_count				=>	fifo_from_proc_count, -- FIFO written by the processor data count signal
		
		--------------- DSTM and EPP Side ports ------------------------------------------
		
		IFCLK									=>	IFCLK, -- interface clock 
		STMEN									=>	STMEN, -- stream enable : active high enable for the stream data transfer
		FLAGA									=>	FLAGA, -- FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		FLAGB									=>	FLAGB, -- FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		FLAGC									=>	FLAGC, -- EPP protocol RNW signal
		
		SLRD									=>	SLRD, -- signal used to read from OUT FIFO
		SLWR									=>	SLWR, -- signal used to write to IN FIFO
		SLOE									=>	SLOE, -- FIFO output enable 
		FIFOADR								=>	FIFOADR, -- FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		PKTEND								=>	PKTEND, -- IN transfer end 
		EPPRST								=>	EPPRST, -- EPP reset
		int_usb								=>	int_usb, -- USB intrerrupt request

		DB_I									=>	DB_I, -- data in
		DB_O									=>	DB_O, -- data out
		DB_T									=>	DB_T -- Data tristate enable. If 1 : DB is set as input, if 0 : DB is set as output
		);



  ------------------------------------------
  -- Example code to read/write user logic slave model s/w accessible registers
  -- 
  -- Note:
  -- The example code presented here is to show you one way of reading/writing
  -- software accessible registers implemented in the user logic slave model.
  -- Each bit of the Bus2IP_WrCE/Bus2IP_RdCE signals is configured to correspond
  -- to one software accessible register by the top level template. For example,
  -- if you have four 32 bit software accessible registers in the user logic,
  -- you are basically operating on the following memory mapped registers:
  -- 
  --    Bus2IP_WrCE/Bus2IP_RdCE   Memory Mapped Register
  --                     "1000"   C_BASEADDR + 0x0
  --                     "0100"   C_BASEADDR + 0x4
  --                     "0010"   C_BASEADDR + 0x8
  --                     "0001"   C_BASEADDR + 0xC
  -- 
  ------------------------------------------
  slv_reg_write_sel <= Bus2IP_WrCE(0 to 11);
  slv_reg_read_sel  <= Bus2IP_RdCE(0 to 11);
  slv_write_ack     <= Write_Epp_Data_Mem(1) or Bus2IP_WrCE(1) or Bus2IP_WrCE(2) or Bus2IP_WrCE(3) or wen_fifo_from_proc(1) or Bus2IP_WrCE(5) or Bus2IP_WrCE(6) or Bus2IP_WrCE(7) or Bus2IP_WrCE(8) or Bus2IP_WrCE(9) or Bus2IP_WrCE(10) or Bus2IP_WrCE(11);
  slv_read_ack      <= Read_Epp_Data_Mem(2) or Bus2IP_RdCE(1) or Bus2IP_RdCE(2) or Bus2IP_RdCE(3) or Bus2IP_RdCE(4) or rden_fifo_from_proc(2) or Bus2IP_RdCE(6) or Bus2IP_RdCE(7) or Bus2IP_RdCE(8) or Bus2IP_RdCE(9) or Bus2IP_RdCE(10) or Bus2IP_RdCE(11);

  -- implement slave model software accessible register(s)
  SLAVE_REG_WRITE_PROC : process( Bus2IP_Clk ) is
  begin

    if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
      if Bus2IP_Reset = '1' then
        EPP_DATA_REG <= (others => '0');
        EPP_ADDRESS_REG <= (others => '0');
        EPP_STATUS_REG <= (others => '0');
        EPP_CONTROL_REG <= (others => '0');
        DSTM_DOUT_REG <= (others => '0');
        DSTM_DIN_REG <= (others => '0');
        DSTM_STATUS_REG <= (others => '0');
        FIFO_TO_PROC_STATUS_REG <= (others => '0');
        FIFO_FROM_PROC_STATUS_REG <= (others => '0');
        DSTM_CONTROL_REG <= (others => '0');
        slv_reg10 <= (others => '0');
        slv_reg11 <= (others => '0');
      else
        case slv_reg_write_sel is
          when "100000000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                EPP_DATA_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "010000000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                EPP_ADDRESS_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "001000000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                EPP_STATUS_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000100000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                EPP_CONTROL_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000010000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                DSTM_DOUT_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000001000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                DSTM_DIN_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000000100000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                DSTM_STATUS_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000000010000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                FIFO_TO_PROC_STATUS_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000000001000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                FIFO_FROM_PROC_STATUS_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000000000100" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                DSTM_CONTROL_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000000000010" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                slv_reg10(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "000000000001" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                slv_reg11(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when others =>
					EPP_STATUS_REG(0)	<= Read_Requested_EPP;
					EPP_STATUS_REG(1)	<= Write_Performed_EPP;
					EPP_STATUS_REG(2)	<= EPP_Performing;

					if update_current_address_EPP = '1' then
						EPP_ADDRESS_REG ( 0 to C_SLV_DWIDTH - 9 ) <= ( others => '0' );
						EPP_ADDRESS_REG ( C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1 ) <= address_reg_EPP;
						EPP_STATUS_REG	( C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1 ) <= address_reg_EPP;
					end if;

					DSTM_STATUS_REG ( C_SLV_DWIDTH - 5)	<=	Done_Transfer_DSTM; -- DSTM transfer done signal
					DSTM_STATUS_REG ( C_SLV_DWIDTH - 4)	<=	Done_Write_Transaction_DSTM; -- write to DSTM  done and there is no other transaction running
					DSTM_STATUS_REG ( C_SLV_DWIDTH - 3)	<=	Done_Read_Transaction_DSTM; -- read from DSTM done and there is no other transaction running
					DSTM_STATUS_REG ( C_SLV_DWIDTH - 2)	<=	Proc_Write_Expected_DSTM; -- status signal showing that processor side write to fifo_from_proc is expected
					DSTM_STATUS_REG ( C_SLV_DWIDTH - 1)	<=	Proc_Read_Expected_DSTM;-- status signal showing that processor side read from fifo_to_proc is expected
			 
					FIFO_TO_PROC_STATUS_REG(0)	<= fifo_to_proc_full;
					FIFO_TO_PROC_STATUS_REG(1)	<= fifo_to_proc_afull;
					FIFO_TO_PROC_STATUS_REG(2)	<= fifo_to_proc_empty;
					FIFO_TO_PROC_STATUS_REG(3)	<= fifo_to_proc_aempty;
					
					FIFO_TO_PROC_STATUS_REG( C_SLV_DWIDTH - FIFO_ADDR_WIDTH - 1 to C_SLV_DWIDTH - 1 )	<= fifo_to_proc_count;
					
					FIFO_FROM_PROC_STATUS_REG(0)	<= fifo_from_proc_full;
					FIFO_FROM_PROC_STATUS_REG(1)	<= fifo_from_proc_afull;
					FIFO_FROM_PROC_STATUS_REG(2)	<= fifo_from_proc_empty;
					FIFO_FROM_PROC_STATUS_REG(3)	<= fifo_from_proc_aempty;
					
					FIFO_FROM_PROC_STATUS_REG( C_SLV_DWIDTH - FIFO_ADDR_WIDTH -1  to C_SLV_DWIDTH - 1 )	<= fifo_from_proc_count;

					if Read_Epp_Data_Mem (1) = '1' then
						EPP_DATA_REG( C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1 ) <= DOUT_EPP;
					end if;
					
					if rden_fifo_from_proc(1) = '1' then
						DSTM_DIN_REG( C_SLV_DWIDTH - 8 to C_SLV_DWIDTH - 1 )	<= DOUT_to_proc_DSTM;
					end if;

        end case;
      end if;
    end if;

  end process SLAVE_REG_WRITE_PROC;

  -- implement slave model software accessible register(s) read mux
  SLAVE_REG_READ_PROC : process( slv_reg_read_sel, EPP_DATA_REG, EPP_ADDRESS_REG, EPP_STATUS_REG, EPP_CONTROL_REG, DSTM_DOUT_REG, DSTM_DIN_REG, DSTM_STATUS_REG, FIFO_TO_PROC_STATUS_REG, FIFO_FROM_PROC_STATUS_REG, DSTM_CONTROL_REG, slv_reg10, slv_reg11, Read_Epp_Data_Mem,  rden_fifo_from_proc) is
  begin

    case slv_reg_read_sel is
      --when "100000000000" => slv_ip2bus_data <= EPP_DATA_REG;
      when "010000000000" => slv_ip2bus_data <= EPP_ADDRESS_REG;
      when "001000000000" => slv_ip2bus_data <= EPP_STATUS_REG;
      when "000100000000" => slv_ip2bus_data <= EPP_CONTROL_REG;
      when "000010000000" => slv_ip2bus_data <= DSTM_DOUT_REG;
      --when "000001000000" => slv_ip2bus_data <= DSTM_DIN_REG;
      when "000000100000" => slv_ip2bus_data <= DSTM_STATUS_REG;
      when "000000010000" => slv_ip2bus_data <= FIFO_TO_PROC_STATUS_REG;
      when "000000001000" => slv_ip2bus_data <= FIFO_FROM_PROC_STATUS_REG;
      when "000000000100" => slv_ip2bus_data <= DSTM_CONTROL_REG;
      when "000000000010" => slv_ip2bus_data <= slv_reg10;
      when "000000000001" => slv_ip2bus_data <= slv_reg11;
      when others => 
				slv_ip2bus_data <= (others => '0');
				
				if Read_Epp_Data_Mem (2) = '1' then
						slv_ip2bus_data <= EPP_DATA_REG;
				end if;
				
				if rden_fifo_from_proc(2) = '1' then
						slv_ip2bus_data <= DSTM_DIN_REG;
				end if;
				
				
    end case;

  end process SLAVE_REG_READ_PROC;

  ------------------------------------------
  -- Example code to drive IP to Bus signals
  ------------------------------------------
  IP2Bus_Data  <= slv_ip2bus_data when slv_read_ack = '1' else
                  (others => '0');

  IP2Bus_WrAck <= slv_write_ack;
  IP2Bus_RdAck <= slv_read_ack;
  IP2Bus_Error <= '0';

end IMP;
