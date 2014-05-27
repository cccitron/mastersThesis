`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:56 07/31/2011 
// Design Name: 
// Module Name:    atlys_ddr_test 
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
module atlys_ddr_test(

	output DDR2CLK_P,
	output DDR2CLK_N,
	output DDR2CKE,
	output DDR2RASN,
	output DDR2CASN,
	output DDR2WEN,
	inout DDR2RZQ,
	inout DDR2ZIO,
	output [2:0] DDR2BA,

	output [12:0] DDR2A,
	inout [15:0] DDR2DQ,

	inout DDR2UDQS_P,
	inout DDR2UDQS_N,
	inout DDR2LDQS_P,
	inout DDR2LDQS_N,
	output DDR2LDM,
	output DDR2UDM,
	output DDR2ODT,

	input clk, // 100 MHz oscillator = 10ns period (top level pin)
   output [7:0] leds
    );
	 
	 
	reg [2:0] c3_p0_cmd_instr;
	reg [5:0] c3_p0_cmd_bl;
	reg [29:0] c3_p0_cmd_byte_addr;
	reg [7:0] c3_p0_wr_mask;
	reg [63:0] c3_p0_wr_data;
	reg c3_p0_rd_en;
	reg c3_p0_wr_en;
	reg [2:0] c3_p1_cmd_instr;
	reg [5:0] c3_p1_cmd_bl;
	reg [29:0] c3_p1_cmd_byte_addr;
	reg [7:0] c3_p1_wr_mask;
	reg [63:0] c3_p1_wr_data;
	reg c3_p1_rd_en;
	reg c3_p1_wr_en;
	reg c3_p0_cmd_en;
	reg reset = 0;
   reg [5:0] ld;

	// Outputs
	wire [6:0] c3_p0_wr_count;
	wire [63:0] c3_p0_rd_data;
	wire [6:0] c3_p0_rd_count;
	wire c3_p0_rd_empty;
	wire [6:0] c3_p1_wr_count;
	wire [63:0] c3_p1_rd_data;
	wire [6:0] c3_p1_rd_count;
	wire c3_p1_rd_empty;
	wire c3_calib_done;
	wire c3_clk0;

	// Instantiate the Unit Under Test (UUT)
	ddr_interface ddr_interface (
		.DDR2CLK_P(DDR2CLK_P), 
		.DDR2CLK_N(DDR2CLK_N), 
		.DDR2CKE(DDR2CKE), 
		.DDR2RASN(DDR2RASN), 
		.DDR2CASN(DDR2CASN), 
		.DDR2WEN(DDR2WEN), 
		.DDR2RZQ(DDR2RZQ), 
		.DDR2ZIO(DDR2ZIO), 
		.DDR2BA(DDR2BA), 
		.DDR2A(DDR2A), 
		.DDR2DQ(DDR2DQ), 
		.DDR2UDQS_P(DDR2UDQS_P), 
		.DDR2UDQS_N(DDR2UDQS_N), 
		.DDR2LDQS_P(DDR2LDQS_P), 
		.DDR2LDQS_N(DDR2LDQS_N), 
		.DDR2LDM(DDR2LDM), 
		.DDR2UDM(DDR2UDM), 
		.DDR2ODT(DDR2ODT), 
		.clk(clk), 
		.c3_p0_cmd_instr(c3_p0_cmd_instr), 
		.c3_p0_cmd_bl(c3_p0_cmd_bl), 
		.c3_p0_cmd_byte_addr(c3_p0_cmd_byte_addr), 
		.c3_p0_wr_mask(c3_p0_wr_mask), 
		.c3_p0_wr_data(c3_p0_wr_data), 
		.c3_p0_wr_count(c3_p0_wr_count), 
		.c3_p0_rd_data(c3_p0_rd_data), 
		.c3_p0_rd_count(c3_p0_rd_count), 
		.c3_p0_rd_en(c3_p0_rd_en), 
		.c3_p0_rd_empty(c3_p0_rd_empty), 
		.c3_p0_wr_en(c3_p0_wr_en), 
		.c3_p1_cmd_instr(c3_p1_cmd_instr), 
		.c3_p1_cmd_bl(c3_p1_cmd_bl), 
		.c3_p1_cmd_byte_addr(c3_p1_cmd_byte_addr), 
		.c3_p1_wr_mask(c3_p1_wr_mask), 
		.c3_p1_wr_count(c3_p1_wr_count), 
		.c3_p1_wr_data(c3_p1_wr_data), 
		.c3_p1_rd_data(c3_p1_rd_data), 
		.c3_p1_rd_count(c3_p1_rd_count), 
		.c3_p1_rd_en(c3_p1_rd_en), 
		.c3_p1_rd_empty(c3_p1_rd_empty), 
		.c3_p1_wr_en(c3_p1_wr_en), 
		.c3_p0_cmd_en(c3_p0_cmd_en), 
		.c3_calib_done(c3_calib_done), 
		.reset(reset),
		.c3_clk0(c3_clk0)
	);

	reg [1:0] calib_done;
	
	always @(posedge c3_clk0)
		calib_done <= {calib_done[0], c3_calib_done};
      
   //always @(posedge clk)
   assign leds[7:2] = c3_p0_rd_data[5:0]; //6'b110000;
   assign leds[1:0] = calib_done;

	reg [4:0] state = 0;
	reg [11:0] count;
	
	always @(posedge c3_clk0)
		case(state)
		0: begin
			reset <= 0;
			if (calib_done[1]) state <= 1;
			end
		1: begin
			c3_p0_wr_en <= 1;
			c3_p0_wr_data <= 64'd5;//1;
			state <= 2;
			count <= 12'd0;
			end
		2: begin
			c3_p0_wr_data <= 64'd5;//2;
			state <= 3;
			end
		3: begin
			c3_p0_wr_data <= 64'd5;//3;
			state <= 4;
			end
		4: begin
			c3_p0_wr_data <= 64'd5;//4;
			state <= 5;
			end
		5: begin
			c3_p0_wr_data <= 64'd5;
			state <= 6;
			end
		6: begin
			c3_p0_wr_data <= 64'd5;//6;
			state <= 7;
			end
		7: begin
			c3_p0_wr_en <= 0;
			c3_p0_cmd_instr <= 3'b000; // Write
			c3_p0_cmd_bl <= 6'd6; // 6 bytes
			c3_p0_cmd_byte_addr <= 30'd16; // To address 16
			c3_p0_cmd_en <= 1;
			state <= 8;
			end
		8: begin
			c3_p0_cmd_en <= 0;
			state <= 9;
			end
		9: begin
			count <= count + 1'b1;
			if (count[11])
				state <= 10;
			end
		10: begin
			count <= 12'd0;
			c3_p0_cmd_bl <= 6'd16;
			c3_p0_cmd_byte_addr <= 30'd16;
			c3_p0_cmd_instr <= 3'b001;
			c3_p0_cmd_en <= 1;
			state <= 11;
			end
		11: begin
			c3_p0_cmd_en <= 0;
			count <= count + 1'b1;
         //ld <= c3_p0_rd_data[5:0];
			if (count[11])
				state <= 0;
			end
			
		endcase


endmodule
