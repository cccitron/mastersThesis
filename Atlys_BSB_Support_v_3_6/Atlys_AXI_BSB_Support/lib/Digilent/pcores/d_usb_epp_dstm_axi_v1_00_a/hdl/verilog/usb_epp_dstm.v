`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:18 08/31/2011 
// Design Name: 
// Module Name:    usb_epp_dstm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module usb_epp_dstm 	
	#( parameter C_NUM_USER_REGS  = 256,
		parameter FIFO_ADDR_WIDTH = 11
	)
	(
		// bus protocol ports
		input Bus2IP_Clk,
		input Bus2IP_Reset,
		input Reset_DSTM,
		input Reset_EPP,
			
	   // USB_EPP processor side ports
		// RAM read and write ports
		input [7:0] RAM_Addr_EPP, 
		input [7:0] DIN_EPP,        
		input WRE_Data_EPP,       
		input EN_Mem_EPP,          
		input Sel_Ext_Addr_EPP,
	   output [7:0] address_reg_EPP,
		output update_current_address_EPP,
		output [7:0] DOUT_EPP,

		// USB_EPP control signals from the processor side
		input Bypass_ISR_Write_EPP,
		input Bypass_ISR_Read_EPP,
		// USB_EPP status signals
		output IRQ_EPP,
		output Read_Requested_EPP,
		output Write_Performed_EPP,
		output EPP_Performing,
		
		// DSTM Processor side control and status signals
		input Set_Pktend_DSTM, //control signal from the processor side to set PKTEND when fifo_from_proce becomes empty
		
		output IRQ_DSTM, //interrupt request for processor side FIFO read or write
		output Done_Transfer_DSTM, //DSTM transfer done signal
		output Proc_Read_Expected_DSTM, //status signal showing that processor side read from fifo_to_proc is expected
		output Proc_Write_Expected_DSTM, //status signal showing that processor side write to fifo_from_proc is expected
		output Done_Write_Transaction_DSTM, //write to DSTM  done and there is no other transaction running
		output Done_Read_Transaction_DSTM, //read from DSTM done and there is no other transaction running
		
	   //FIFO read side from processor signals
		output [7:0] DOUT_to_proc_DSTM,		// data out : data read by the processor
		input rden_from_proc_DSTM,					// read enable : signal coming from DSTM state machine
		//FIFO to processor status signals
		output wire fifo_to_proc_full,   // FIFO read by the processor full signal
		output wire fifo_to_proc_afull,  // FIFO read by the processor almost full signal
		output wire fifo_to_proc_empty,  // FIFO read by the processor empty signal
		output wire fifo_to_proc_aempty, // FIFO read by the processor almost empty signal
		output wire [FIFO_ADDR_WIDTH:0] fifo_to_proc_count, // FIFO read by the processor data count signal
		
		//FIFO write side from processor signals
		input [7:0] DIN_from_proc_DSTM,		     // data in : data written by the processor
		input wen_from_proc_DSTM,					  // write enable : signal controlled by the processor
		//FIFO from processor status signals
		output wire fifo_from_proc_full,	  // FIFO written by the processor full signal
		output wire fifo_from_proc_afull,  // FIFO written by the processor almost full signal
		output wire fifo_from_proc_empty,  // FIFO written by the processor empty signal
		output wire fifo_from_proc_aempty, // FIFO written by the processor almost empty signal
		output wire [FIFO_ADDR_WIDTH:0] fifo_from_proc_count, // FIFO written by the processor data count signal
		
		/******************* DSTM and EPP Side ports **************************************************/
		
		input IFCLK,  				       	 // interface clock 
		input STMEN,				      	 // stream enable : active high enable for the stream data transfer
		input FLAGA,				    		 // FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		input FLAGB,				    		 // FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		input	FLAGC, 							 // EPP protocol RNW signal
		
		output wire SLRD,				 		 // signal used to read from OUT FIFO
		output wire SLWR,				 		 // signal used to write to IN FIFO
		output wire SLOE,				 		 // FIFO output enable 
		output wire [1:0] FIFOADR,	       // FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		output wire PKTEND, 		   	 	 // IN transfer end 
		input EPPRST,     					 // EPP reset
		output int_usb,						 // USB intrerrupt request

		input wire  [7:0] DB_I,				 // data in
		output wire [7:0] DB_O,				 // data out
		output wire [7:0] DB_T			    // if 1 : DB is set as input, if 0 : DB is set as output

		);


wire STMEN_DSTM;
wire FLAGA_DSTM;
wire FLAGB_DSTM;
wire SLRD_DSTM;
wire SLWR_DSTM;
wire SLOE_DSTM;
wire [1:0] FIFOADR_DSTM;
wire PKTEND_DSTM;
wire EPPRST_DSTM;
wire [7:0] DB_I_DSTM;
wire [7:0] DB_O_DSTM;
wire [7:0] DB_T_DSTM;

wire EPP_write;
wire ASTB_EPP;
wire DSTB_EPP;
wire EPPRST_EPP;
wire WAIT_EPP;
wire int_usb_epp;
wire [7:0] DB_I_EPP;
wire [7:0] DB_O_EPP;
wire [7:0] DB_T_EPP;


//DSTM instance

dstm  		#(
					.FIFO_ADDR_WIDTH (FIFO_ADDR_WIDTH)
					)		
			DSTM_Inst_0
				(
					.Bus2IP_Clk 				(Bus2IP_Clk),
					.Bus2IP_Reset				(Bus2IP_Reset),
					.Reset						(Reset_DSTM),
					.IRQ							(IRQ_DSTM), //interrupt request for processor side FIFO read or write
					.Set_Pktend					(Set_Pktend_DSTM), //control signal from the processor side to set PKTEND when fifo_from_proce becomes empty
					.Done_Transfer				(Done_Transfer_DSTM), //DSTM transfer done signal
					.Proc_Read_Expected		(Proc_Read_Expected_DSTM), //status signal showing that processor side read from fifo_to_proc is expected
					.Proc_Write_Expected		(Proc_Write_Expected_DSTM), //status signal showing that processor side write to fifo_from_proc is expected
					.Done_Write_Transaction	(Done_Write_Transaction_DSTM), //write to DSTM  done and there is no other transaction running
					.Done_Read_Transaction	(Done_Read_Transaction_DSTM), //read from DSTM done and there is no other transaction running

/******************* DSTM Side ports **************************************************/
		
					.IFCLK						(IFCLK),  				    // interface clock 
					.STMEN						(STMEN_DSTM),				 // stream enable : active high enable for the stream data transfer
					.FLAGA						(FLAGA_DSTM),				 // FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
					.FLAGB						(FLAGB_DSTM),			    // FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
					.SLRD							(SLRD_DSTM),				 // signal used to read from OUT FIFO
					.SLWR							(SLWR_DSTM),				 // signal used to write to IN FIFO
					.SLOE							(SLOE_DSTM),				 // FIFO output enable 
					.FIFOADR						(FIFOADR_DSTM),	       // FIFO address : "00" select OUT FIFO, "10" select IN FIFO
					.PKTEND						(PKTEND_DSTM), 		    // IN transfer end 
					.EPPRST						(EPPRST_DSTM),     		 // EPP reset
					.DB_I							(DB_I_DSTM),				 // data in
					.DB_O							(DB_O_DSTM),				 // data out
					.DB_T							(DB_T_DSTM),			    // if 1 : DB is set as input, if 0 : DB is set as output
		
/******************* Processor Side ports **************************************************/
		
		
					//writing side from processor
					.DIN_from_proc				(DIN_from_proc_DSTM),	 // data in : data written by the processor
					.wen_from_proc				(wen_from_proc_DSTM),	 // write enable : signal controlled by the processor
					.fifo_from_proc_full		(fifo_from_proc_full),	 // FIFO written by the processor full signal
					.fifo_from_proc_afull	(fifo_from_proc_afull),  // FIFO written by the processor almost full signal
					.fifo_from_proc_empty	(fifo_from_proc_empty),  // FIFO written by the processor empty signal
					.fifo_from_proc_aempty	(fifo_from_proc_aempty), // FIFO written by the processor almost empty signal
					.fifo_from_proc_count	(fifo_from_proc_count),  // FIFO written by the processor data count signal
		
					//reading side from processor
					.DOUT_to_proc				(DOUT_to_proc_DSTM),	  // data out : data read by the processor
					.rden_from_proc			(rden_from_proc_DSTM), // read enable : signal coming from DSTM state machine
					.fifo_to_proc_full		(fifo_to_proc_full),   // FIFO read by the processor full signal
					.fifo_to_proc_afull		(fifo_to_proc_afull),  // FIFO read by the processor almost full signal
					.fifo_to_proc_empty		(fifo_to_proc_empty),  // FIFO read by the processor empty signal
					.fifo_to_proc_aempty		(fifo_to_proc_aempty), // FIFO read by the processor almost empty signal
					.fifo_to_proc_count		(fifo_to_proc_count)   // FIFO read by the processor data count signal
				);
			
usb_epp
		#(
			.C_NUM_USER_REGS (C_NUM_USER_REGS)
		)
usb_epp_inst_0
		(			
		// bus protocol ports
		.Bus2IP_Clk					(Bus2IP_Clk),
      .Bus2IP_Reset				(Bus2IP_Reset),
		.Reset						(Reset_EPP),
                   
	   // processor side ports
		// RAM read and write ports
		.RAM_Addr					(RAM_Addr_EPP), 
		.DIN							(DIN_EPP),        
		.WRE_Data					(WRE_Data_EPP),
		.EN_Mem						(EN_Mem_EPP),          
		.Sel_Ext_Addr				(Sel_Ext_Addr_EPP),
	   .address_reg				(address_reg_EPP),
		.update_current_address	(update_current_address_EPP),
		.DOUT							(DOUT_EPP),

		// control signals from the processor side
		.Bypass_ISR_Write			(Bypass_ISR_Write_EPP),
		.Bypass_ISR_Read			(Bypass_ISR_Read_EPP),
		
		// status signals
		.IRQ_EPP						(IRQ_EPP),
		.Read_Requested			(Read_Requested_EPP),
		.Write_Performed			(Write_Performed_EPP),
		.EPP_Performing			(EPP_Performing),
		
		//	EPP side ports		
		.IFCLK						(IFCLK),					
		.EPP_write					(EPP_write),
		.ASTB							(ASTB_EPP),
		.DSTB							(DSTB_EPP),
		.EPPRST						(EPPRST_EPP),
		.int_usb						(int_usb_epp),
		.DB_I							(DB_I_EPP),
		.DB_O							(DB_O_EPP),
		.DB_T							(DB_T_EPP),
		.busy							(WAIT_EPP)
);

epp_dstm_mux epp_dstm_mux_inst_0
		
		(

		.EPPRST				(EPPRST),     	// EPP reset, will select between DSTM and EPP ports
		.STMEN				(STMEN),			// stream enable : active high enable for the stream data transfer
		.FLAGA				(FLAGA),			// FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		.FLAGB				(FLAGB),			// FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		.FLAGC				(FLAGC),
		.SLRD					(SLRD),			// signal used to read from OUT FIFO
		.SLWR					(SLWR),			// signal used to write to IN FIFO
		.SLOE					(SLOE),			// FIFO output enable 
		.FIFOADR				(FIFOADR),	   // FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		.PKTEND				(PKTEND), 		// IN transfer end 
		.int_usb				(int_usb),		// Interrupt request for USB
		.DB_I					(DB_I),			// data in
		.DB_O					(DB_O),			// data out
		.DB_T					(DB_T),			// if 1 : DB is set as input, if 0 : DB is set as output
	 
	 /****************************DSTM side ports************************************************/
	 
		.STMEN_DSTM			(STMEN_DSTM),	// stream enable : active high enable for the stream data transfer
		.FLAGA_DSTM			(FLAGA_DSTM),	// FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		.FLAGB_DSTM			(FLAGB_DSTM),	// FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		.SLRD_DSTM			(SLRD_DSTM),	// signal used to read from OUT FIFO
		.SLWR_DSTM			(SLWR_DSTM),	// signal used to write to IN FIFO
		.SLOE_DSTM			(SLOE_DSTM),	// FIFO output enable 
		.FIFOADR_DSTM		(FIFOADR_DSTM),// FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		.PKTEND_DSTM		(PKTEND_DSTM), // IN transfer end 
		.EPPRST_DSTM		(EPPRST_DSTM), // EPP reset
		.DB_I_DSTM			(DB_I_DSTM),	// data in
		.DB_O_DSTM			(DB_O_DSTM),	// data out
		.DB_T_DSTM			(DB_T_DSTM),	// if 1 : DB is set as input, if 0 : DB is set as output	 
	 
	 /****************************EPP side ports************************************************/
	 
		.ASTB_EPP			(ASTB_EPP),		// EPP protocol Address Strobe signal
		.DSTB_EPP			(DSTB_EPP),		// EPP protocol Data Strobe signal
		.EPP_write			(EPP_write),	//	EPP protocol RNW signal
		.WAIT_EPP			(WAIT_EPP),		// EPP protocol BUSY signal
		.int_usb_epp		(int_usb_epp),	// Interrupt request for USB
		.EPPRST_EPP			(EPPRST_EPP),  // EPP reset
		.DB_I_EPP			(DB_I_EPP),		// data in
		.DB_O_EPP			(DB_O_EPP),		// data out
		.DB_T_EPP			(DB_T_EPP)		// if 1 : DB is set as input, if 0 : DB is set as output	 	 
	 );

endmodule
