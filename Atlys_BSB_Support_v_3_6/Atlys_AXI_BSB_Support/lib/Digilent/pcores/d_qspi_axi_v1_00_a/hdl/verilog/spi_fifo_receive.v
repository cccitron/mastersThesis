`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Digilent RO
// Engineer:       Mihaita Nagy
// 
// Create Date:    16:20:15 04/21/2011 
// Design Name: 
// Module Name:    spi_fifo_receive 
// Project Name:   Quad-SPI IP Core
// Target Devices: Spartan 6
// Tool versions:  12.2
// Description: 
//
// Dependencies:   spi_tr8.v, spi_sf.v
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module spi_fifo_receive(input clk,
								input reset,
								input rd_en, //-- read enable
								input wr_en, //-- write enable
								
								input [7:0] data_in,
								output [7:0] data_out,
								
								output reg empty,
								output reg almost_empty,
								output reg full, 
								output reg almost_full,
								output reg [8:0] count);


wire writing;
wire reading;

reg [8:0] rd_ptr;
reg [8:0] next_rd_ptr;
reg [8:0] wr_ptr;
reg [8:0] next_wr_ptr;

assign writing = (wr_en && (rd_en || !full));
assign reading = (rd_en && !empty);

//-- increment function --
function [8:0] increment;
	input [8:0] value;
	begin
		if (value == 260)
			increment = 0;
		else
			increment = value + 1;
	end
endfunction


//-- combinational read pointer --
always @ *
begin
	if (reset)
		next_rd_ptr = 0;
	else if (reading)
		next_rd_ptr = increment (rd_ptr);
	else
		next_rd_ptr = rd_ptr;
end

always @ (posedge clk)
begin
	rd_ptr <= next_rd_ptr;
end
//-------------------------------

//-- combinational write pointer --
always @ *
begin
	if (reset)
		next_wr_ptr = 0;
	else if (writing)
		next_wr_ptr = increment (wr_ptr);
	else
		next_wr_ptr = wr_ptr;
end

always @ (posedge clk)
begin
	wr_ptr <= next_wr_ptr;
end
//-------------------------------

//-- output counter --
always @ (posedge clk)
begin
	if (reset)
		count <= 0;
	else if (writing && !reading)
		count <= count + 1; //-- writing
	else if (reading && !writing)
		count <= count - 1; //-- reading
end


//-- empty --
always @ (posedge clk)
begin
	if (reset)
		empty <= 1;
	else if (reading && (next_wr_ptr == next_rd_ptr) && !full)
		empty <= 1;
	else if (writing && !reading)
		empty <= 0;
end

always@ (posedge clk)
begin
	if (reading && (next_rd_ptr == 260) && !full)
		almost_empty <= 1;
	else
		almost_empty <= 0;
end

//-- full --
always @ (posedge clk)
begin
	if (reset)
		full <= 0;
	else if (writing && (wr_ptr == 260))//(next_wr_ptr == next_rd_ptr))
		full <= 1;
	else if (reading && !writing)
		full <= 0;
end

always@ (posedge clk)
begin
	if (writing && (next_wr_ptr == 260))
		almost_full <= 1;
	else
		almost_full <= 0;
end

//--------------------------------------------------------

reg [7:0] mem [260:0];

always @ (posedge clk)
begin
	if (writing)
		mem[wr_ptr] <= data_in;
	rd_ptr <= next_rd_ptr;
end

assign data_out = mem[rd_ptr];

endmodule
