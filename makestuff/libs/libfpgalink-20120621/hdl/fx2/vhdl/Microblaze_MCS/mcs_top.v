`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:42:17 03/26/2014 
// Design Name: 
// Module Name:    mcs_top 
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
module mcs_top(
      input clk,
      input reset,
      input UART_Rx,
      output UART_Tx,
      input [7:0] switch,
      output [7:0] leds
   );

microblaze_mcs mcs_0 (
  .Clk(clk), // input Clk
  .Reset(reset), // input Reset
  .UART_Rx(UART_Rx), // input UART_Rx
  .UART_Tx(UART_Tx), // output UART_Tx
  .GPO1(leds), // output [7 : 0] GPO1
  .GPI1(switch), // input [7 : 0] GPI1
  .GPI1_Interrupt() // output GPI1_Interrupt
);

endmodule
