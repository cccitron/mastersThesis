`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:47 09/06/2011 
// Design Name: 
// Module Name:    ac97_controller 
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
module ac97_controller(
    input SYSCLK,				// up to 125MHz
	 input SYSTEM_RESET,		// active on 1
    input BIT_CLK,			// 12,288 MHz
    input SDATA_IN,
	 output SYNC,
    output SDATA_OUT,
    output RESET,
	 output DONE,
	 input [15:0] Slot0_in,
	 input [19:0] Slot1_in,
	 input [19:0] Slot2_in,
	 input [19:0] Slot3_in,
	 input [19:0] Slot4_in,
	 input [19:0] Slot5_in,
	 input [19:0] Slot6_in,
	 input [19:0] Slot7_in,
	 input [19:0] Slot8_in,
	 input [19:0] Slot9_in,
	 input [19:0] Slot10_in,
	 input [19:0] Slot11_in,
	 input [19:0] Slot12_in,
	 output reg [15:0] Slot0_out,
	 output reg [19:0] Slot1_out,
	 output reg [19:0] Slot2_out,
	 output reg [19:0] Slot3_out,
	 output reg [19:0] Slot4_out,
	 output reg [19:0] Slot5_out,
	 output reg [19:0] Slot6_out,
	 output reg [19:0] Slot7_out,
	 output reg [19:0] Slot8_out,
	 output reg [19:0] Slot9_out,
	 output reg [19:0] Slot10_out,
	 output reg [19:0] Slot11_out,
	 output reg [19:0] Slot12_out
    );

parameter START_DELAY 				= 17'd131000;
parameter WAIT_FOR_BITCLK_DELAY	= 2'b11;

// the states of the state machine
parameter 	Idle = 2'b00,					
				Load = 2'b01,					// SlotS_out are loaded from Data_reg_in and Data_reg_out is loaded with SlotS_in
				Send = 2'b10,					// Registers are shifted
				Wait_until_Start = 2'b11;	//	Lines 67-70 & 130


reg [9:0] Increment = 0;	// integer Incremented is used for the bit count of a 256-bit frame, as well as SYNC's frequency
reg [16:0] Var_start = 0;	// incremented varialbe used to set the signal RESET at the start
reg Reset_Ready;
reg [1:0] Wait_for_BITCLK = 0;
reg [2:0] Frame_Done_reg = 0;


reg [255:0] Data_reg_out = 0;
reg [255:0] Data_reg_in = 0;

reg [1:0] StC = Idle;
reg [1:0] StN = Idle;


// If SYSTEM_RESET is 1, Var_start (used to count until RESET is deasserted to 1) is reset to 0
always @ (posedge SYSCLK)
	if (SYSTEM_RESET) 
		Var_start <= 0;
	else if (Var_start == START_DELAY) 
		Var_start <= Var_start;
	else 
		Var_start <= Var_start + 1;
								

always @ (posedge BIT_CLK)
	if (!Reset_Ready)
		Wait_for_BITCLK <= 0;
	else if (Wait_for_BITCLK == WAIT_FOR_BITCLK_DELAY) 
		Wait_for_BITCLK <= Wait_for_BITCLK;
	else 
		Wait_for_BITCLK <= Wait_for_BITCLK + 1;

		
// RESET is 0 until the start delay is over
assign RESET = (Var_start == START_DELAY) ? 1:0;

always @ (posedge BIT_CLK)
	Reset_Ready <= (Var_start == START_DELAY) ? 1:0;


// DONE
always @ (posedge SYSCLK)
	if (StC != Load) 
		Frame_Done_reg <= 0;
	else 
		Frame_Done_reg <= {Frame_Done_reg[1:0], 1'b1};
	
assign DONE = (Frame_Done_reg[0]&Frame_Done_reg[1]&~(Frame_Done_reg[2])) ? 1:0;


// Increment is incremeneted to 256 and then set to 1. Increment is reset to 0 only when a RESET occurs
always @ (posedge BIT_CLK)
	if (StC == Idle) 
		Increment <= 0;
	else if ((StN == Load) || (StN == Send))
		if (Increment == 256) 
			Increment <= 1;
		else 
			Increment <= Increment +1 ;
				
				
// SYNC will have (12,288MHz / 256) = 48KHz frequency & 20.8us period. SYNC is active while Slot0 is being sent only = for 16 BIT_CLKs
assign SYNC = (((Increment < 16)&&(Increment > 0)) || (StN == Load)) ? 1:0;


// Saving the data from SDATA_IN into Data_reg_in & cleaning Data_reg_in if a reset occurs. Data_reg_in must be shifted during the Load stat as well
always @ (posedge BIT_CLK)
	if (Var_start < START_DELAY - 1) 
		Data_reg_in <= 0;
	else 
		Data_reg_in[255:0] <= {Data_reg_in[254:0], SDATA_IN};


// Data_reg_out being loaded with a new frame and shifted each BIT_CLK to be sent on SDATA_OUT
always @ (posedge BIT_CLK)
	if (StN == Load)
		Data_reg_out <= {Slot0_in, Slot1_in, Slot2_in, Slot3_in, Slot4_in, Slot5_in, Slot6_in, Slot7_in, Slot8_in, Slot9_in, Slot10_in, Slot11_in, Slot12_in};
	else 	
		Data_reg_out [255:0] <= {Data_reg_out[254:0], 1'b0};
	

// State machine
always @ (posedge BIT_CLK or posedge SYSTEM_RESET)
	if (SYSTEM_RESET) 
		StC <= Idle;
	else 
		StC <= StN;
		
always @ *
begin
	StN <= StC;
	case (StC)
		Idle: if ((!SYSTEM_RESET) && (Wait_for_BITCLK == WAIT_FOR_BITCLK_DELAY)) StN <= Wait_until_Start;
		
		Wait_until_Start: if (Reset_Ready) StN <= Load;
		
		Load: StN <= Send;
		
		Send: if (Increment == 256) StN <= Load;
		
		default: StN <= Idle;
	endcase
end

assign SDATA_OUT = Data_reg_out[255];
	
always @ (posedge SYSCLK) begin
	if (StC == Load) 
		begin
			Slot0_out <= Data_reg_in[255:240];
			Slot1_out <= Data_reg_in[239:220];
			Slot2_out <= Data_reg_in[219:200];
			Slot3_out <= Data_reg_in[199:180];
			Slot4_out <= Data_reg_in[179:160];
			Slot5_out <= Data_reg_in[159:140];
			Slot6_out <= Data_reg_in[139:120];
			Slot7_out <= Data_reg_in[119:100];
			Slot8_out <= Data_reg_in[99:80];
			Slot9_out <= Data_reg_in[79:60];
			Slot10_out <= Data_reg_in[59:40];
			Slot11_out <= Data_reg_in[39:20];
			Slot12_out <= Data_reg_in[19:0];
		end
end

endmodule
