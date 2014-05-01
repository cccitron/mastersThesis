`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Digilent RO
// Engineer:       Mihaita Nagy
// 
// Create Date:    16:18:29 04/21/2011 
// Design Name: 
// Module Name:    spi_sf 
// Project Name: 	 Quad-SPI IP Core
// Target Devices: Spartan 6
// Tool versions:  12.2
// Description: 
//
// Dependencies:   spi_fifo_send.v, spi_fifo_receive.v, spi_tr8.v
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module spi_sf(	input clk,
					input reset,
					input [12:0] div_rate,
					input start_session,
					input end_session,
					input addr,
					input dummy,
					input [3:0] dummy_clks,
					input read_mem,
					input write_mem,
					input read_from_buffer_receive,
					input write_to_buffer_send,
					input [8:0] nr_of_bytes, //-- number of Bytes to read/write
					
					input [1:0] cmd_mode,
					input [1:0] addr_mode,
					input [1:0] read_mode,
					input [1:0] write_mode,
					
					input [7:0] data_input,
					output reg [7:0] data_output,
					
					//-- Status --
					output send_buffer_empty,
					output receive_buffer_empty,
					output send_buffer_full,
					output receive_buffer_full,
					output [8:0] status_send,
					output [8:0] status_read,
					
					output reg write_one_byte_done,
					output reg read_one_byte_done,
					
					output reg cycle_done, //-- session done
					
					//-- Flash Memory --
					output c,
					output s,
					output [3:0] dq_o,
					output [3:0] dq_t,
					input [3:0] dq_i );


//-- data transfer control --------------------------------------------------------------------

wire send_buffer_almost_empty;
wire receive_buffer_almost_empty;

wire send_buffer_almost_full;
wire receive_buffer_almost_full;

//---------------------------------------------------------------------------------------------

wire [7:0] data_in_buffer_send; //-- data input for the send buffer
wire [7:0] data_in_buffer_receive; //-- data input for the receive buffer
wire [7:0] data_out_buffer_send; //-- output data from the send buffer
wire [7:0] data_out_buffer_receive; //-- output data from the receive buffer

//---------------------------------------------------------------------------------------------

wire start_tr8; //-- start a session in spi_tr8 module
reg [7:0] din_tr8; //-- input data to spi_tr8 module
reg [7:0] dout_tr8; //-- output data from spi_tr8 module
reg [8:0] count_nr_bytes_read; //-- number of Bytes to read/write
reg [8:0] count_nr_bytes_send;

//---------------------------------------------------------------------------------------------

reg [3:0] state;
reg [3:0] next;
reg read_dly;
reg write_dly;
reg rd_en_r;
reg wr_en_r;
reg rd_en_s;
reg wr_en_s;

reg [3:0] state_dly;
reg start_same_state;
reg start;
reg start_session_dly;

reg [7:0] data_in_buff_receive;
reg [7:0] data_in_buff_send;
reg [7:0] d_in;

wire dummy_tr8;
wire rnw;
wire read_pulse;
wire write_pulse;

wire wr_en_send;
wire wr_en_read;
wire rd_en_send;
wire rd_en_read;

wire [7:0] dout;
wire [7:0] din;
wire start_for_rd_en;

assign data_in_buffer_send = data_in_buff_send;
assign data_in_buffer_receive = data_in_buff_receive;
assign din = d_in;

assign wr_en_send = wr_en_s;
assign wr_en_read = wr_en_r;
assign rd_en_send = rd_en_s;
assign rd_en_read = rd_en_r;

assign write_pulse = write_to_buffer_send & ~write_dly;
assign read_pulse = read_from_buffer_receive & ~read_dly;

assign rnw = (state == read_data) ? 1'b1 : 1'b0;
assign dummy_tr8 = (state == send_dummy) ? 1'b1 : 1'b0;


//main FSM states
parameter idle              = 4'b0000,
          send_cmd          = 4'b0001,
			 send_addr_0       = 4'b0011,
			 send_addr_1       = 4'b0010,
			 send_addr_2       = 4'b0110,
			 send_dummy        = 4'b0111,
			 prepare_read_data = 4'b1111,
			 read_data         = 4'b0100,
			 prepare_send_data = 4'b1110,
			 send_data         = 4'b1101;

//---------------------------------------------------------------------------------------------

//-- start session ----------------------------------------------------------------------------

always @ (posedge clk)
begin
	start_session_dly <= start_session;
end

assign start_session_pulse = start_session_dly & ~start_session;

//---------------------------------------------------------------------------------------------

//-- initialize main FSM ----------------------------------------------------------------------

always @ (posedge clk)
begin
	if (reset)
		state <= idle;
	else
		state <= next;
end

//---------------------------------------------------------------------------------------------

//-- main FSM ---------------------------------------------------------------------------------

always @ *
begin
	next = state;
	case (state)
      idle:	begin
					if (start_session_pulse)
						next = send_cmd;
					else
						next = idle;
				end
		
		send_cmd: begin
						 if (done && addr)
							 next = send_addr_0;
						 else if (done && read_mem && !addr)
							 next = read_data;
						 else if (done && write_mem && !addr)
						    next = send_data;
						 else if (done && end_session && !addr)
						    next = idle;
						 else
							 next = send_cmd;
					 end
		
		send_addr_0: begin
							 if (done)
								 next = send_addr_1;
							 else
								 next = send_addr_0;
						 end
		
		send_addr_1: begin
							 if (done)
								 next = send_addr_2;
							 else
								 next = send_addr_1;
						 end
		
		send_addr_2: begin
							 if (done && read_mem && !dummy)
								 next = read_data;
							 else if (done && write_mem && !dummy)
								 next = send_data;
							 else if (done && dummy)
								 next = send_dummy;
							 else if (done && end_session)
								 next = idle;
							 else
								 next = send_addr_2;
						 end
		
		send_dummy: begin
							if (done && read_mem)
								next = read_data;
							else if (done && write_mem)
								next = send_data;
							else
								next = send_dummy;
					   end
		
		prepare_read_data: next = read_data;
		
		read_data: begin
						  if (done && (count_nr_bytes_read == nr_of_bytes))
							  next = idle;
						  else
							  next = read_data;
					  end
		
		prepare_send_data: next = send_data;
		
		send_data: begin
						  if (done)
							  if (count_nr_bytes_send == nr_of_bytes)
								  next = idle;
							  else
								  next = send_data;
						  else
							  next = send_data;
					  end
		
	endcase
end

//---------------------------------------------------------------------------------------------

//-- modes ------------------------------------------------------------------------------------

reg [1:0] mode;

always @ (posedge clk)
begin
	if (reset)
		mode <= 2'b00;
	else if (next == send_cmd)
		mode <= cmd_mode;
	else if (next == send_addr_0)
		mode <= addr_mode;
	else if (next == read_data)
		mode <= read_mode;
	else if (next == send_data)
		mode <= write_mode;
end

//---------------------------------------------------------------------------------------------

//-- start signal -----------------------------------------------------------------------------

always @ (posedge clk)
begin
	start <= start_tr8;
end

assign start_tr8 = (((state[0] & ~state_dly[0]) && (state == send_cmd)) || start_same_state);

//---------------------------------------------------------------------------------------------

//-- generate start even if next state is the same as current state ---------------------------

always @ (posedge clk)
begin
	if (done && (next != idle))
		start_same_state <= 1'b1;
	else
		start_same_state <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//-- delay the second state -------------------------------------------------------------------

always @ (posedge clk)
begin
	if (state == send_cmd)
		state_dly <= state;
	else
		state_dly <= 4'b0000;
end

//---------------------------------------------------------------------------------------------

//-- read from fifo from top-level ------------------------------------------------------------

always @ (posedge clk)
begin
	read_dly <= read_from_buffer_receive;
end

always @ (posedge clk)
begin
	if (!read_dly)
		read_one_byte_done <= 1'b1;
	else
		read_one_byte_done <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//-- write to fifo from top-level module ------------------------------------------------------

always @ (posedge clk)
begin
	write_dly <= write_to_buffer_send;
end

always @ (posedge clk)
begin
	if (!write_pulse)
		write_one_byte_done <= 1'b1;
	else
		write_one_byte_done <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//-- cycle done -------------------------------------------------------------------------------

always @ (posedge clk)
begin
	if ((s && (state == idle)) || reset)
		cycle_done <= 1'b1;
	else
		cycle_done <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//-- count the number of bytes received -------------------------------------------------------

always @ (posedge clk)
begin
	if (reset || (state == idle))
		count_nr_bytes_read <= 9'b000000000;
	else if ((state == read_data) && start)
		count_nr_bytes_read <= count_nr_bytes_read + 9'b000000001;
end

//---------------------------------------------------------------------------------------------

//-- count the number of bytes transmitted ----------------------------------------------------

always @ (posedge clk)
begin
	if (reset || (state == idle))
		count_nr_bytes_send <= 9'b000000000;
	else if ((state == send_data) && start)
		count_nr_bytes_send <= count_nr_bytes_send + 9'b000000001;
end

//---------------------------------------------------------------------------------------------

//--read data from RECEIVE BUFFER, top-level module -------------------------------------------

always @ (posedge clk)
begin
	if (read_pulse && !(receive_buffer_empty))
		begin
			rd_en_r <= 1'b1;
			data_output <= data_out_buffer_receive;
		end
	else
		rd_en_r <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//-- write data to RECEIVE BUFFER, from spi_tr8 module ----------------------------------------

always @ (posedge clk)
begin
	if (!receive_buffer_full && done_for_wr && dq_t_delayed)
		begin
			wr_en_r <= 1'b1;
			data_in_buff_receive <= dout;
		end
	else
		wr_en_r <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//--read data from SEND BUFFER and send it to spi_tr8 module ----------------------------------

assign start_for_rd_en = s ? start_tr8 : done;

always @ (negedge clk)
begin
	if (((state == send_data) || (state == send_addr_0) || (state == send_addr_1) ||
		  (state == send_addr_2) || (state == send_cmd)) && start_for_rd_en)
		rd_en_s <= 1'b1;
	else
		rd_en_s <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//-- data out from receive fifo ---------------------------------------------------------------

always @ (posedge clk)
begin
	if (reset)
		d_in <= 8'b00000000;
	else if (rd_en_s)
		d_in <= data_out_buffer_send;
end

//---------------------------------------------------------------------------------------------

//-- write data to SEND BUFFER, from top-level module -----------------------------------------

always @ (posedge clk)
begin
	if (write_pulse && !(send_buffer_full))
		begin
			wr_en_s <= 1'b1;
			data_in_buff_send <= data_input;
		end
	else
		wr_en_s <= 1'b0;
end

//---------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------
//--SPI-TRANSMIT/RECEIVE-8-BIT-----------------------------------------------------------------

spi_tr8 spi1 (.clk(clk),.reset(reset),.dummy(dummy_tr8),.start_out(start_tr8),.rnw(rnw),
				  .div_rate(div_rate),.dummy_clks(dummy_clks),.mode(mode),.din(din),.dout(dout),
				  .done(done),.done_for_wr(done_for_wr),.c(c),.s(s),.dq_o(dq_o),.dq_t(dq_t),
				  .dq_i(dq_i),.dq_t_delayed(dq_t_delayed));
				  
//---------------------------------------------------------------------------------------------
//--BUFFER-SEND--------------------------------------------------------------------------------

spi_fifo_send spi2 (.clk(clk),.reset(reset),.rd_en(rd_en_send),.wr_en(wr_en_send),
						  .data_in(data_in_buffer_send),.data_out(data_out_buffer_send),
						  .empty(send_buffer_empty),.almost_empty(send_buffer_almost_empty),
						  .full(send_buffer_full),.almost_full(send_buffer_almost_full),
						  .count(status_send));
						  
//---------------------------------------------------------------------------------------------
//--BUFFER-RECEIVE-----------------------------------------------------------------------------

spi_fifo_receive spi3 (.clk(clk),.reset(reset),.rd_en(rd_en_read),.wr_en(wr_en_read),
							  .data_in(data_in_buffer_receive),.data_out(data_out_buffer_receive),
							  .empty(receive_buffer_empty),.almost_empty(receive_buffer_almost_empty),
							  .full(receive_buffer_full),.almost_full(receive_buffer_almost_full),
							  .count(status_read));
							  
//---------------------------------------------------------------------------------------------

endmodule
