`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:45 12/02/2021 
// Design Name: 
// Module Name:    LedOnOffGradually 
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
module LedOnOffGradually(
   input clk, reset,
	output [7:0] q
	);
	wire s_in;
Shift_SIPO SIPO (clk, reset, s_in, q);
assign s_in = ~q[0] ;
endmodule
