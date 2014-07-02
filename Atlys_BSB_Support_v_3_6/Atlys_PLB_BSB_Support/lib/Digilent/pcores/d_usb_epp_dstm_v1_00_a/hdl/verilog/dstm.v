`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:06:37 08/18/2010 
// Design Name: 
// Module Name:    DSTM 
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
module dstm
	#(parameter FIFO_ADDR_WIDTH = 11
	)
	(
		input Bus2IP_Clk,
		input Bus2IP_Reset,
		input Reset,
		
		
		output IRQ, //interrupt request for processor side FIFO read or write
		input Set_Pktend, //control signal from the processor side to set PKTEND when fifo_from_proce becomes empty
		output Done_Transfer, //DSTM transfer done signal
		output Proc_Read_Expected, //status signal showing that processor side read from fifo_to_proc is expected
		output Proc_Write_Expected, //status signal showing that processor side write to fifo_from_proc is expected
		output Done_Write_Transaction, //write to DSTM  done and there is no other transaction running
		output Done_Read_Transaction, //read from DSTM done and there is no other transaction running
/******************* DSTM Side ports **************************************************/
		
		input IFCLK,  				       	 // interface clock 
		input STMEN,				      	 // stream enable : active high enable for the stream data transfer
		input FLAGA,				    		 // FIFO OUT flag : while 1 - shows the empty state of the OUT (download) FIFO
		input FLAGB,				    		 // FIFO IN flag : while 1 - shows the full state of the IN (upload) FIFO 
		
		output wire SLRD,				 		 // signal used to read from OUT FIFO
		output wire SLWR,				 		 // signal used to write to IN FIFO
		output wire SLOE,				 		 // FIFO output enable 
		output wire [1:0] FIFOADR,	       // FIFO address : "00" select OUT FIFO, "10" select IN FIFO
		output wire PKTEND, 		   	 	 // IN transfer end 
		input EPPRST,     					 // EPP reset

		input wire  [7:0] DB_I,				 // data in
		output wire [7:0] DB_O,				 // data out
		output wire [7:0] DB_T,			    // if 1 : DB is set as input, if 0 : DB is set as output
		
/******************* Processor Side ports **************************************************/
		
		
		//writing side from processor
		input [7:0] DIN_from_proc,		     // data in : data written by the processor
		input wen_from_proc,					  // write enable : signal controlled by the processor
		output wire fifo_from_proc_full,	  // FIFO written by the processor full signal
		output wire fifo_from_proc_afull,  // FIFO written by the processor almost full signal
		output wire fifo_from_proc_empty,  // FIFO written by the processor empty signal
		output wire fifo_from_proc_aempty, // FIFO written by the processor almost empty signal
		output wire [FIFO_ADDR_WIDTH:0] fifo_from_proc_count, // FIFO written by the processor data count signal
		
		//reading side from processor
		output [7:0] DOUT_to_proc,		// data out : data read by the processor
		input rden_from_proc,					// read enable : signal coming from DSTM state machine
		output wire fifo_to_proc_full,   // FIFO read by the processor full signal
		output wire fifo_to_proc_afull,  // FIFO read by the processor almost full signal
		output wire fifo_to_proc_empty,  // FIFO read by the processor empty signal
		output wire fifo_to_proc_aempty, // FIFO read by the processor almost empty signal
		output wire [FIFO_ADDR_WIDTH:0] fifo_to_proc_count // FIFO read by the processor data count signal
	
	 );
	
	
/*******************  state machine definition  ***************************************************/
	localparam [11:0] Idle 				 		= {4'b0000 , 4'b1111 , 4'b0100 } ; // do nothing
	localparam [11:0] Wait_on_Proc_Read		= {4'b0001 , 4'b1111 , 4'b0001 } ; // prepare reading data from OUT FIFO
	localparam [11:0] Wait_on_Proc_Write	= {4'b1000 , 4'b0111 , 4'b0111 } ; // prepare writing data to IN FIFO
	localparam [11:0] Read_Data 	    		= {4'b0011 , 4'b1110 , 4'b0001 } ; // read data from OUT FIFO
	localparam [11:0] Write_Data       		= {4'b1100 , 4'b0011 , 4'b0111 } ; // write data to IN FIFO
//	localparam [11:0] Check_FLAGA      		= {4'b0111 , 4'b0101 , 4'b0100 } ; // if FLAGA=1 -> move to next state
//	localparam [11:0] Check_FLAGB      		= {4'b1110 , 4'b1101 , 4'b0110 } ;	// if FLAGB=1 -> move to next state
	localparam [11:0] Done_RD			 		= {4'b0110 , 4'b1111 , 4'b1100 } ; // Reading Done
	localparam [11:0] Done_WR          		= {4'b1111 , 4'b1101 , 4'b1110 } ; // Writing Done
	
	
	// current state & next state declaration
 	(* FSM_ENCODING="USER", SAFE_IMPLEMENTATION="NO", SAFE_RECOVERY_STATE="Idle" *) 
	reg [11:0] StC;	
	reg [11:0] StN;

	wire RDEN_FIFO_FROM_PROC;
	wire WEN_FIFO_TO_PROC;
	
	// set DB to either output ( active low) or input (active high )
	wire db_t_signal;
	
	//Delay the SLWR signal with one IFCLK period
	wire SLWR_INT;
	reg SLWR_Pipe;
	
	//Internal statemachine reset
	wire Reset_Int;
	
	//set Done_Write_Transaction and Done_Read_Transaction
	reg Done_Write_Transaction_reg;
	reg Done_Read_Transaction_reg;
	
	// assign the control signals coming from the state machine
	assign IRQ			 			= StC[0];
	assign FIFOADR[1] 			= StC[1];
	assign SLOE						= StC[2];
	assign Done_Transfer       = StC[3];
	assign SLRD						= StC[4] | FLAGA;
	assign PKTEND				   = StC[5];
	assign SLWR_INT				= StC[6] | FLAGB;
	assign db_t_signal			= StC[7];

	assign FIFOADR[0] = 1'b0;
	assign RDEN_FIFO_FROM_PROC = ~SLWR_INT;
	assign WEN_FIFO_TO_PROC = ~SLRD;

   assign Proc_Read_Expected   = ((StC == Wait_on_Proc_Read) || (StC == Read_Data)) ? 1'b1:1'b0;
	assign Proc_Write_Expected  = ((StC == Wait_on_Proc_Write) || (StC == Write_Data)) ? 1'b1:1'b0;
	
	always @ (posedge IFCLK)
		SLWR_Pipe <= SLWR_INT;
	
	assign SLWR = SLWR_Pipe;

	//Assign Reset_Int
	assign Reset_Int = (EPPRST) || (~STMEN) || Bus2IP_Reset || Reset;
	
	
	//Assign Done_Write_Transaction ans DOne_Read_Transaction
	always @ (posedge IFCLK)
	if (StC == Done_WR)
			Done_Write_Transaction_reg <= 1'b1;
	else if (StC != Idle)
			Done_Write_Transaction_reg <= 1'b0;
	
	always @ (posedge IFCLK)
	if (StC == Done_RD)
			Done_Read_Transaction_reg <= 1'b1;
	else if (StC != Idle)
			Done_Read_Transaction_reg <= 1'b0;

	assign Done_Write_Transaction = Done_Write_Transaction_reg;
	assign Done_Read_Transaction = Done_Read_Transaction_reg;


fifo #(.FIFO_ADDR_WIDTH (FIFO_ADDR_WIDTH)
					)
FIFO_FROM_PROC	
(
		 .reset	(Reset_Int),
		 .wrclk  (Bus2IP_Clk),   	       // clock used as FIFO OUT write clock
		 .wen    (wen_from_proc),         // write enable
		 .DIN		(DIN_from_proc),			 // data in
		 .afull	(fifo_from_proc_afull),  //almost full signal
		 .full	(fifo_from_proc_full),	 //full signal

		.rdclk	(IFCLK),						 // clock used as FIFO read clock
		.rden		(RDEN_FIFO_FROM_PROC),	 // read enable, controlled by the state machine
		.DOUT		(DB_O),						 // data read
		.empty	(fifo_from_proc_empty),	 // empty signal
		.aempty	(fifo_from_proc_aempty), // almost empty signal
		.count	(fifo_from_proc_count)   // Data count = written data - read data
);

fifo #(.FIFO_ADDR_WIDTH (FIFO_ADDR_WIDTH)
					)
FIFO_TO_PROC
(
		 .reset	(Reset_Int),
		 .wrclk  (IFCLK),   	           // clock used as FIFO OUT write clock
		 .wen    (WEN_FIFO_TO_PROC),    // write enable
		 .DIN		(DB_I),			        // data in
		 .afull	(fifo_to_proc_afull),  //almost full signal
		 .full	(fifo_to_proc_full),	  //full signal

		.rdclk	(Bus2IP_Clk),			  // clock used as FIFO read clock
		.rden		(rden_from_proc),	     // read enable, controlled by the state machine
		.DOUT		(DOUT_to_proc),		  // data read
		.empty	(fifo_to_proc_empty),  // empty signal
		.aempty	(fifo_to_proc_aempty), // almost empty signal
		.count	(fifo_to_proc_count)   // Data count = written data - read data
);


		
/****************************************************************************************************
										state machine registerred process
****************************************************************************************************/

always @ (posedge IFCLK)
	if (Reset_Int)
		StC <= Idle;
	else
		StC <= StN;
		
/***************************************************************************************************	
										state machine transitions
****************************************************************************************************/

always @ *
	begin
		StN <= StC;
		case (StC)
			Idle : 							if (~(FLAGA))
														StN <= Wait_on_Proc_Read;
												else if (~(FLAGB))
														StN <= Wait_on_Proc_Write;
														
			Wait_on_Proc_Read:			if ((~fifo_to_proc_full) && (~FLAGA))
														StN <= Read_Data;
												else if (fifo_to_proc_empty && FLAGA)
														StN <= Done_RD;
			
			Wait_on_Proc_Write:		   if (~fifo_from_proc_empty)
														StN <= Write_Data;
												else if (fifo_from_proc_empty && Set_Pktend)
														StN <= Done_WR;
			
			Read_Data: 						if ((fifo_to_proc_afull) || (FLAGA))
														StN <= Wait_on_Proc_Read;

			Write_Data:						if ((fifo_from_proc_aempty) && (~Set_Pktend))
														StN <= Wait_on_Proc_Write;
												else if (fifo_from_proc_aempty && Set_Pktend)
														StN <= Done_WR;
		
/*
			Check_FLAGA: 					if ( FLAGA )
														StN <= Done_RD;
												else 
														StN <= Wait_on_Proc_Read;
													
			Check_FLAGB:					if ( FLAGB )
														StN <= Done_WR;
												else
														StN <= Prepare_Writing;
*/														
			Done_RD:							StN <= Idle;
														
			Done_WR:							StN <= Idle;
													
			default : 						StN <= Idle;  // Fault Recovery
		endcase
	end
			


/****************************** assign DB_T **********************************************/

assign DB_T = ( db_t_signal ) ? 8'hFF : 8'h00;

endmodule
