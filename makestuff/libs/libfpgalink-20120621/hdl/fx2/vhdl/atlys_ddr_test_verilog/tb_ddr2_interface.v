`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:28:54 07/31/2011
// Design Name:   atlys_ddr_test
// Module Name:   C:/Users/Administrator/Desktop/Xilinx/atlys_ddr_test/tb_ddr2_interface.v
// Project Name:  atlys_ddr_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: atlys_ddr_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_ddr2_interface;

	// Inputs
	reg clk;
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
	reg reset;

	// Outputs
	wire DDR2CLK_P;
	wire DDR2CLK_N;
	wire DDR2CKE;
	wire DDR2RASN;
	wire DDR2CASN;
	wire DDR2WEN;
	wire [2:0] DDR2BA;
	wire [12:0] DDR2A;
	wire DDR2LDM;
	wire DDR2UDM;
	wire DDR2ODT;
	wire [6:0] c3_p0_wr_count;
	wire [63:0] c3_p0_rd_data;
	wire [6:0] c3_p0_rd_count;
	wire c3_p0_rd_empty;
	wire [6:0] c3_p1_wr_count;
	wire [63:0] c3_p1_rd_data;
	wire [6:0] c3_p1_rd_count;
	wire c3_p1_rd_empty;
	wire c3_calib_done;

	// Bidirs
	wire DDR2RZQ;
	wire DDR2ZIO;
	wire [15:0] DDR2DQ;
	wire DDR2UDQS_P;
	wire DDR2UDQS_N;
	wire DDR2LDQS_P;
	wire DDR2LDQS_N;

	// Instantiate the Unit Under Test (UUT)
	ddr_interface uut (
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
		.reset(reset)
	);

	PULLDOWN zio_pulldown3 (.O(DDR2ZIO));
	PULLDOWN rzq_pulldown3 (.O(DDR2RZQ));

	// The Micron DDR2 SDRAM simulation model
	ddr2_model_c3 u_mem_c3(
		.ck         (DDR2CLK_P),
		.ck_n       (DDR2CLK_N),
		.cke        (DDR2CKE),
		.cs_n       (1'b0),
		.ras_n      (DDR2RASN),
		.cas_n      (DDR2CASN),
		.we_n       (DDR2WEN),
		.dm_rdqs    ({DDR2UDM,DDR2LDM}),
		.ba         (DDR2BA),
		.addr       (DDR2A),
		.dq         (DDR2DQ),
		.dqs        ({DDR2UDQS_P,DDR2LDQS_P}),
		.dqs_n      ({DDR2UDQS_N,DDR2LDQS_N}),
		.rdqs_n     (),
		.odt        (DDR2ODT)
	);

	localparam DATA_CLOCK = 1/(312.5/4)*1000; // 12.8 ns at 78 MHz

	initial begin
		// Initialize Inputs
		clk = 0;
		c3_p0_cmd_instr = 0;
		c3_p0_cmd_bl = 0;
		c3_p0_cmd_byte_addr = 0;
		c3_p0_wr_mask = 0;
		c3_p0_wr_data = 0;
		c3_p0_rd_en = 0;
		c3_p0_wr_en = 0;
		c3_p1_cmd_instr = 0;
		c3_p1_cmd_bl = 0;
		c3_p1_cmd_byte_addr = 0;
		c3_p1_wr_mask = 0;
		c3_p1_wr_data = 0;
		c3_p1_rd_en = 0;
		c3_p1_wr_en = 0;
		c3_p0_cmd_en = 0;
		reset = 1;

#200;
		reset = 0;

		// Calibration
		wait (c3_calib_done);
		$display("Calibration done");

		#100;

		// Put some data into FIFO in preparation for writing it.
		c3_p0_wr_en = 1; // Start writing to the FIFO
		c3_p0_wr_data = 20; // .. a 20

		#DATA_CLOCK; c3_p0_wr_data = 21; // .. a 21
		#DATA_CLOCK; c3_p0_wr_data = 22;
		#DATA_CLOCK; c3_p0_wr_data = 23;
		#DATA_CLOCK; c3_p0_wr_data = 24;
		#DATA_CLOCK; c3_p0_wr_data = 25;
		#DATA_CLOCK; c3_p0_wr_data = 26;
		#DATA_CLOCK;
		c3_p0_wr_en = 0; // Stop writing to the FIFO.

		$display("WR count: %d", c3_p0_wr_count);

		// Write to memory
		#DATA_CLOCK;
		c3_p0_cmd_instr = 3'b000; // Prepare to write
		c3_p0_cmd_bl = 7; // a total of seven words
		c3_p0_cmd_byte_addr = 16; // to address 16

		#DATA_CLOCK;
		c3_p0_cmd_en = 1; // Write to command FIFO

		#DATA_CLOCK;
		c3_p0_cmd_en = 0; // Stop writing to command FIFO

		// Perform a read, some time later
		#32.5;
		c3_p0_cmd_bl = 16; // Read 16 words
		c3_p0_cmd_byte_addr = 16; // From address 16

		#DATA_CLOCK;
		c3_p0_cmd_instr = 3'b001; // Issue a read command

		#DATA_CLOCK;
		c3_p0_cmd_en = 1; // Write to command FIFO

		#DATA_CLOCK;
		c3_p0_cmd_en = 0; // Stop writing to command FIFO

		#DATA_CLOCK;

		wait(~c3_p0_rd_empty); // Wait until the RAM has retrieved the data
		c3_p0_rd_en = 1; // Start reading data
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		#DATA_CLOCK; $display("Read: %d, empty %d", c3_p0_rd_data, c3_p0_rd_empty);
		c3_p0_rd_en = 0; // Stop reading data

		#10000; 
		$stop;
	end

	always begin
		#5; clk = ~clk; // 100 MHz system clock
	end
      
endmodule

