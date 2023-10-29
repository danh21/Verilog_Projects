`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:29:00 11/22/2021 
// Design Name: 
// Module Name:    Shift_Register 
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
module Shift_Register(
	input clk, reset,
	output [7:0] q 
	);
	wire clk_out;
	wire s_in;
// module instance
clock_div clockdivider (clk, reset, clk_out) ;
Shift_SIPO SIPO (clk_out, reset, s_in, q);
assign s_in = ~q[0] ;
endmodule
