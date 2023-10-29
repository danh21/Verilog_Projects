`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:44:46 11/21/2021 
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
   output s_out
	);
	wire clk_out;
clock_div clockdivider (clk, reset, clk_out) ;
Shift_SISO SISO (clk_out, reset, s_in, s_out);
endmodule
