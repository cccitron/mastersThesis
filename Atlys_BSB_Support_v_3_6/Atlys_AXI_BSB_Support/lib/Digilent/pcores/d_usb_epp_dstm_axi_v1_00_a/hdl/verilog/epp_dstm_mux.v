`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:14:39 08/31/2011 
// Design Name: 
// Module Name:    epp_dstm_mux 
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
module epp_dstm_mux(

		input EPPRST,     					 // EPP reset, will select between DSTM and EPP ports
		
		input STMEN,				      	 // stream enable : active high enable for the stream data transfer
		input FLAGA,				    		 // FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		input FLAGB,				    		 // FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		input FLAGC,						    // EPP Protocol RNW signal
		
		output wire SLRD,				 		 // signal used to read from OUT FIFO
		output wire SLWR,				 		 // signal used to write to IN FIFO
		output wire SLOE,				 		 // FIFO output enable 
		output wire [1:0] FIFOADR,	       // FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		output wire PKTEND, 		   	 	 // IN transfer end 
		output int_usb,						 // Interrupt request for USB


		input wire  [7:0] DB_I,				 // data in
		output wire [7:0] DB_O,				 // data out
		output wire [7:0] DB_T,			    // if 1 : DB is set as input, if 0 : DB is set as output
	 
	 /****************************DSTM side ports************************************************/
	 
		output STMEN_DSTM,				      	 // stream enable : active high enable for the stream data transfer
		output FLAGA_DSTM,				    		 // FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		output FLAGB_DSTM,				    		 // FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		
		input  SLRD_DSTM,				 		 // signal used to read from OUT FIFO
		input  SLWR_DSTM,				 		 // signal used to write to IN FIFO
		input  SLOE_DSTM,				 		 // FIFO output enable 
		input  [1:0] FIFOADR_DSTM,	       // FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		input  PKTEND_DSTM, 		   	 	 // IN transfer end 
		output EPPRST_DSTM,     					 // EPP reset

		output [7:0] DB_I_DSTM,				 // data in
		input  [7:0] DB_O_DSTM,				 // data out
		input  [7:0] DB_T_DSTM,			    // if 1 : DB is set as input, if 0 : DB is set as output	 
	 
	 /****************************EPP side ports************************************************/
	 
		output ASTB_EPP,				    		// EPP protocol Address Strobe signal
		output DSTB_EPP,				    		// EPP protocol Data Strobe signal
		output EPP_write,							//	EPP protocol RNW signal
		input  WAIT_EPP,				 		   // EPP protocol BUSY signal

		input int_usb_epp,						 // Interrupt request for USB
		output EPPRST_EPP,     					 // EPP reset

		output [7:0] DB_I_EPP,				 // data in
		input  [7:0] DB_O_EPP,				 // data out
		input  [7:0] DB_T_EPP			    // if 1 : DB is set as input, if 0 : DB is set as output	 	 
	 );


//DSTM outputs
assign STMEN_DSTM = STMEN;
assign FLAGA_DSTM = (EPPRST) ? 1'b1 : FLAGA;
assign FLAGB_DSTM = (EPPRST) ? 1'b1 : FLAGB;

assign EPPRST_DSTM = EPPRST;

//EPP outputs
assign ASTB_EPP = (EPPRST) ? FLAGA : 1'b1;
assign DSTB_EPP = (EPPRST) ? FLAGB : 1'b1;
assign EPP_write = FLAGC;

assign EPPRST_EPP = EPPRST;

//USB-EPP-DSTM outputs
assign SLRD = (EPPRST)? WAIT_EPP : SLRD_DSTM;

assign SLWR = (EPPRST)? 1'b1 : SLWR_DSTM;
assign SLOE = (EPPRST)? 1'b1 : SLOE_DSTM;
assign FIFOADR = FIFOADR_DSTM;
assign PKTEND = PKTEND_DSTM;

assign int_usb = int_usb_epp;

//Data inputs and outputs
assign DB_I_DSTM = DB_I;
assign DB_I_EPP = DB_I;

assign DB_O = (EPPRST) ? DB_O_EPP: DB_O_DSTM;
assign DB_T = (EPPRST) ? DB_T_EPP: DB_T_DSTM;

endmodule
