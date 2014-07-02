`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:13:06 08/31/2011 
// Design Name: 
// Module Name:    fifo 
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
module fifo
	#(parameter FIFO_ADDR_WIDTH = 4
	)
	(
		input reset,

		//writing port
		input wrclk,      			              // clock used as FIFO write clock
		input wen,					                 // write enable
		input [7:0] DIN,								  // data in
		output wire afull,							  // almost full signal
		output wire full,								  // full signal
		
		//reading ports
		input rdclk,										// clock used as FIFO read clock
		input rden,											// read enable
		output reg [7:0] DOUT,							// data read
		output wire empty,								// empty signal
		output wire aempty,								// almost empty signal
		output wire [FIFO_ADDR_WIDTH:0] count	   // Data count = written data - read data

    );
	 
	localparam MEMSIZE = 2 ** FIFO_ADDR_WIDTH;
	
	reg  [FIFO_ADDR_WIDTH:0] wptr; // points to the next address to be written
	reg  [FIFO_ADDR_WIDTH:0] rptr; // points to the next address to be read

	// memory name
	reg [7:0] mem [MEMSIZE-1:0];
	
	// dual port RAM
/*******************************************************************************************	
	//write into dual port RAM
*******************************************************************************************/
	
	always @ ( posedge wrclk )
		if (reset)
			wptr <= 0;
		else if (wen)
			begin 
				if (~full)
					begin 
						mem[wptr[FIFO_ADDR_WIDTH-1:0]] <= DIN;
						wptr <= wptr + 1'b1;
					end
			end
/*******************************************************************************************		
	// read from dual port RAM
********************************************************************************************/
	
	always @ (posedge rdclk)
		if (reset)
			rptr <= 0;
		else if (rden)
			begin
				if (~empty)
					begin
						DOUT <= mem[rptr[FIFO_ADDR_WIDTH-1:0]];
						rptr <= rptr + 1'b1;
					end
			end
	
/******************************************************************************************	
	// empty generation logic
******************************************************************************************/

	// assign empty output
		assign empty = (rptr == wptr) ? 1'b1 : 1'b0;
		
/*****************************************************************************************
		full generation logic
*****************************************************************************************/

	// assign Full_OUT output
		assign full = ({~wptr[FIFO_ADDR_WIDTH], wptr[FIFO_ADDR_WIDTH-1:0]} == rptr) ? 1'b1 : 1'b0;
		
// count = data written - data read

		assign count = wptr - rptr;
		 
		assign aempty = (count == 1) ? 1'b1: 1'b0;
		
		assign afull = (count == (MEMSIZE - 1)) ? 1'b1: 1'b0;

endmodule
