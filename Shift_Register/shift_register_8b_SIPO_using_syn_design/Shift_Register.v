`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:21 11/21/2021 
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
   input clk, reset, s_in,
	output [7:0] q
	);
	wire clk_out ;
// module instance
clock_div clockdivider (clk, reset, clk_out) ;
Shift_SIPO SIPO (clk_out, reset, s_in, q);
endmodule
