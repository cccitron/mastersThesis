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
-- Version:           1.10.a
-- Description:       User logic.
-- Date:              Wed Jul 28 14:08:52 2010 (by Create and Import Peripheral Wizard)
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

entity user_logic is
  generic
  (
    -- ADD USER GENERICS BELOW THIS LINE ---------------
    --USER generics added here
    -- ADD USER GENERICS ABOVE THIS LINE ---------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol parameters, do not add to or delete
    C_SLV_DWIDTH                   : integer              := 32;
    C_NUM_REG                      : integer              := 10
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );
  port
  (
    -- ADD USER PORTS BELOW THIS LINE ------------------
    BITCLK								  : in STD_LOGIC;
	 SDATA_IN							  : in STD_LOGIC; 	-- AC Link input frame signal
	 SDATA_OUT							  : out STD_LOGIC;	-- AC Link output frame signal
	 SYNC									  : out STD_LOGIC;	-- the SYNC line determines the start of a nwe frame
																		-- it should have a frequency of 48KHz, regardless of 
																		-- the sample rate
    RESET_N								  : out STD_LOGIC;	-- AC97 cold reset signal
	 IRQ	   							  : out STD_LOGIC;
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

end entity user_logic;

------------------------------------------------------------------------------
-- Architecture section
------------------------------------------------------------------------------

architecture IMP of user_logic is

  --USER signal declarations added here, as needed for user logic

  ------------------------------------------
  -- Signals for user logic slave model s/w accessible register example
  ------------------------------------------
  signal ADDR                           : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal DATA_REG                       : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal PCM_OUT_L                      : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal PCM_OUT_R                      : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal PCM_IN_L                       : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal PCM_IN_R                       : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal CONTROL                        : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal STATUS                         : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_reg8                       : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_reg9                       : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_reg_write_sel              : std_logic_vector(0 to 9);
  signal slv_reg_read_sel               : std_logic_vector(0 to 9);
  signal slv_ip2bus_data                : std_logic_vector(0 to C_SLV_DWIDTH-1);
  signal slv_read_ack                   : std_logic;
  signal slv_write_ack                  : std_logic;
  
  ------------------------------------------
  ------------------------------------------
  
  signal SLOT_VALID_OUT						 : STD_LOGIC_VECTOR (0 to 15); -- inicates which slot written contains valid data
																							 -- bit 0 indicates if there is valid data in at least any slot
  signal SLOT_VALID_IN						 : STD_LOGIC_VECTOR (0 to 15); -- inicates which slot read contains valid data
																							 -- bit 0 indicates if there is valid data in at least any slot
  signal SLOT_REQ								 : STD_LOGIC_VECTOR (0 to 9);  -- read tag/slot request bits
  signal ADDR_OUT								 :	STD_LOGIC_VECTOR (0 to 6);  -- Address to which is written or from which is read
  signal DATA_OUT							    :	STD_LOGIC_VECTOR (0 to 15); -- Data written to the codec internal register
  signal ADDR_IN								 :	STD_LOGIC_VECTOR (0 to 6);  -- Address echoed from the codec
  signal DATA_IN								 :	STD_LOGIC_VECTOR (0 to 15); -- Data read from the codec internal register
  signal PCM_IN_L_REC						 :	STD_LOGIC_VECTOR (0 to 19); -- left channel PCM input data;
  signal PCM_IN_R_REC						 :	STD_LOGIC_VECTOR (0 to 19); -- right channel PCM input data;
  signal PCM_OUT_L_SEND						 :	STD_LOGIC_VECTOR (0 to 19); -- left channel PCM output data;
  signal PCM_OUT_R_SEND						 :	STD_LOGIC_VECTOR (0 to 19); -- right channel PCM output data;
  signal DONE									 : STD_LOGIC;
  signal RNW									 : STD_LOGIC;
  signal Slot1_in								 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot2_in								 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot1_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot2_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot5_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot6_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot7_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot8_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot9_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot10_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot11_out							 :	STD_LOGIC_VECTOR (0 to 19);
  signal Slot12_out							 :	STD_LOGIC_VECTOR (0 to 19);
	
  -------------------------------------------
  -------------------------------------------
  
  component ac97_controller
    Port ( 
			-- Input Ports
			Slot0_in								 : in STD_LOGIC_VECTOR (15 downto 0);
			Slot1_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot2_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot3_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot4_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot5_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot6_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot7_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot8_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot9_in								 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot10_in							 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot11_in							 : in STD_LOGIC_VECTOR (19 downto 0);
			Slot12_in							 : in STD_LOGIC_VECTOR (19 downto 0);
			-- Output Ports
			Slot0_out							 : out STD_LOGIC_VECTOR (15 downto 0);
			Slot1_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot2_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot3_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot4_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot5_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot6_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot7_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot8_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot9_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot10_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot11_out							 : out STD_LOGIC_VECTOR (19 downto 0);
			Slot12_out							 : out STD_LOGIC_VECTOR (19 downto 0);			
			-- AC 97 link ports
			BIT_CLK								 :	in STD_LOGIC;
			SDATA_IN								 :	in STD_LOGIC;
			SDATA_OUT							 :	out STD_LOGIC;
			SYNC									 :	out STD_LOGIC;	-- the SYNC line determines the start of a nwe frame, it should have a frequency of 48KHz, regardless of the sample rate
			RESET									 : out STD_LOGIC;	-- AC97 cold reset signal
			-- System and control ports
			SYSCLK 								 : in  STD_LOGIC;	-- System Clock
			SYSTEM_RESET						 :	in STD_LOGIC;	-- Reset input
			DONE									 : out STD_LOGIC);-- The loaded frame was transmitted

  end component;
  
  
  
begin

  -- input signals to the codec
  -- In SLOT_VALID_OUT: bit 		0  - Frame valid
  -- 							bit 		1  - Address
  -- 							bit 		2  - Data
  -- 							bits 3...12 - Slot valid bits (TAG)
  -- 							bit 		13 - unused (0)
  -- 							bits 14..15 - Codec ID ("00")
  
  SLOT_VALID_OUT 		<= CONTROL (C_SLV_DWIDTH - 16 to C_SLV_DWIDTH - 4) & '0' &  CONTROL (C_SLV_DWIDTH - 2 to C_SLV_DWIDTH - 1); 

  ADDR_OUT 				<= ADDR (C_SLV_DWIDTH - 7 to C_SLV_DWIDTH - 1);
  DATA_OUT				<= DATA_REG(C_SLV_DWIDTH - 16 to C_SLV_DWIDTH - 1);

  PCM_OUT_L_SEND		<= PCM_OUT_L (C_SLV_DWIDTH - 20 to C_SLV_DWIDTH-1);
  PCM_OUT_R_SEND		<= PCM_OUT_R (C_SLV_DWIDTH - 20 to C_SLV_DWIDTH-1);
  RNW 					<= ADDR (C_SLV_DWIDTH - 8);
  Slot1_in 				<= RNW & ADDR_OUT & X"000"; -- Last 12 bits reserved (0s)
  Slot2_in				<= DATA_OUT & "0000";

  -- output signals from the codec
  SLOT_REQ 				<= Slot1_out(8 to 17);
  ADDR_IN 				<= Slot1_out (1 to 7);
  DATA_IN 				<= Slot2_out (0 to 15);
  
  ------------------------------------------
  ------------------------------------------
  
  ac97_controller_I: ac97_controller
    port map
    (
			-- Input Ports
			Slot0_in		=> SLOT_VALID_OUT,
			Slot1_in		=> Slot1_in,
			Slot2_in		=> Slot2_in,
			Slot3_in		=> PCM_OUT_L_SEND,
			Slot4_in		=> PCM_OUT_R_SEND,
			Slot5_in		=> X"00000",
			Slot6_in		=> X"00000",
			Slot7_in		=> X"00000",
			Slot8_in		=> X"00000",
			Slot9_in		=> X"00000",
			Slot10_in	=> X"00000",
			Slot11_in	=> X"00000",
			Slot12_in	=> X"00000",
			-- Output Ports
			Slot0_out	=> SLOT_VALID_IN,
			Slot1_out	=> Slot1_out,
			Slot2_out	=> Slot2_out,
			Slot3_out	=> PCM_IN_L_REC,
			Slot4_out	=> PCM_IN_R_REC,
			Slot5_out	=> Slot5_out,
			Slot6_out	=> Slot6_out,
			Slot7_out	=> Slot7_out,
			Slot8_out	=> Slot8_out,
			Slot9_out	=> Slot9_out,
			Slot10_out	=> Slot10_out,
			Slot11_out	=> Slot11_out,
			Slot12_out	=> Slot12_out,
			-- AC 97 link ports
			BIT_CLK	   => BITCLK,
			SDATA_IN	   => SDATA_IN, 		-- AC Link input frame signal
			SDATA_OUT   => SDATA_OUT,		-- AC Link output frame signal
			SYNC		   => SYNC,				-- the SYNC line determines the start of a nwe frame
													-- it should have a frequency of 48KHz, regardless of the sample rate
			RESET	  		=> RESET_N, 		-- AC97 cold reset signal
			-- System and control ports
			SYSCLK 	   => Bus2IP_Clk,		-- System Clock
			SYSTEM_RESET=> Bus2IP_Reset,	-- Reset input
			DONE       	=> DONE
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
  slv_reg_write_sel <= Bus2IP_WrCE(0 to 9);
  slv_reg_read_sel  <= Bus2IP_RdCE(0 to 9);
  slv_write_ack     <= Bus2IP_WrCE(0) or Bus2IP_WrCE(1) or Bus2IP_WrCE(2) or Bus2IP_WrCE(3) or Bus2IP_WrCE(4) or Bus2IP_WrCE(5) or Bus2IP_WrCE(6) or Bus2IP_WrCE(7) or Bus2IP_WrCE(8) or Bus2IP_WrCE(9);
  slv_read_ack      <= Bus2IP_RdCE(0) or Bus2IP_RdCE(1) or Bus2IP_RdCE(2) or Bus2IP_RdCE(3) or Bus2IP_RdCE(4) or Bus2IP_RdCE(5) or Bus2IP_RdCE(6) or Bus2IP_RdCE(7) or Bus2IP_RdCE(8) or Bus2IP_RdCE(9);

  -- implement slave model software accessible register(s)
  SLAVE_REG_WRITE_PROC : process( Bus2IP_Clk ) is
  begin

    if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
      if Bus2IP_Reset = '1' then
        ADDR <= (others => '0');
        DATA_REG <= (others => '0');
        PCM_OUT_L <= (others => '0');
        PCM_OUT_R <= (others => '0');
        PCM_IN_L <= (others => '0');
        PCM_IN_R <= (others => '0');
        CONTROL <= (others => '0');
        STATUS <= (others => '0');
        slv_reg8 <= (others => '0');
        slv_reg9 <= (others => '0');
      else
        case slv_reg_write_sel is
          when "1000000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                ADDR(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0100000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                DATA_REG(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0010000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                PCM_OUT_L(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0001000000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                PCM_OUT_R(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0000100000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                PCM_IN_L(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0000010000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                PCM_IN_R(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0000001000" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                CONTROL(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0000000100" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                STATUS(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0000000010" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                slv_reg8(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when "0000000001" =>
            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
              if ( Bus2IP_BE(byte_index) = '1' ) then
                slv_reg9(byte_index*8 to byte_index*8+7) <= Bus2IP_Data(byte_index*8 to byte_index*8+7);
              end if;
            end loop;
          when others => 
					if DONE = '1' then
						STATUS (0 to C_SLV_DWIDTH - 17) <= SLOT_VALID_IN;
						STATUS (C_SLV_DWIDTH - 16) <= '1'; -- set the DONE bit, cleared by the software
						STATUS (C_SLV_DWIDTH - 12 to C_SLV_DWIDTH - 3) <= SLOT_REQ; -- set the SLOT_REQ bits
					
						ADDR (C_SLV_DWIDTH - 15 to C_SLV_DWIDTH - 9) <= ADDR_IN;
						DATA_REG (0 to C_SLV_DWIDTH - 17) <= DATA_IN;
						-- set the interrupt when a new frame arrived
						IRQ <= '1';
					
						PCM_IN_L (C_SLV_DWIDTH - 20 to C_SLV_DWIDTH - 1) <= PCM_IN_L_REC;
						
						if PCM_IN_L_REC(0) = '1' then
							PCM_IN_L (0 to C_SLV_DWIDTH - 21) <= (others => '1');
						else
							PCM_IN_L (0 to C_SLV_DWIDTH - 21) <= (others => '0');
						end if;
					
						PCM_IN_R (C_SLV_DWIDTH - 20 to C_SLV_DWIDTH - 1) <= PCM_IN_R_REC;
						
						if PCM_IN_R_REC(0) = '1' then
							PCM_IN_R (0 to C_SLV_DWIDTH - 21) <= (others => '1');
						else
							PCM_IN_R (0 to C_SLV_DWIDTH - 21) <= (others => '0');
						end if;
					end if;
        end case;
      end if;
    end if;

  end process SLAVE_REG_WRITE_PROC;

  -- implement slave model software accessible register(s) read mux
  SLAVE_REG_READ_PROC : process( slv_reg_read_sel, ADDR, DATA_REG, PCM_OUT_L, PCM_OUT_R, PCM_IN_L, PCM_IN_R, CONTROL, STATUS, slv_reg8, slv_reg9 ) is
  begin

    case slv_reg_read_sel is
      when "1000000000" => slv_ip2bus_data <= ADDR;
      when "0100000000" => slv_ip2bus_data <= DATA_REG;
      when "0010000000" => slv_ip2bus_data <= PCM_OUT_L;
      when "0001000000" => slv_ip2bus_data <= PCM_OUT_R;
      when "0000100000" => slv_ip2bus_data <= PCM_IN_L;
      when "0000010000" => slv_ip2bus_data <= PCM_IN_R;
      when "0000001000" => slv_ip2bus_data <= CONTROL;
      when "0000000100" => slv_ip2bus_data <= STATUS;
      when "0000000010" => slv_ip2bus_data <= slv_reg8;
      when "0000000001" => slv_ip2bus_data <= slv_reg9;
      when others => slv_ip2bus_data <= (others => '0');
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
