`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:22:39 11/22/2021 
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
   input wire clk, reset, lr,
	output wire [7:0] q
	);
	wire clk_out;
	wire s_in;
// module instance
clock_div clockdivider (clk, reset, clk_out);
Shift_SIPO SIPO (clk_out, reset, s_in, lr, q);
assign s_in = (lr == 1) ? ~q[0] : ~q[7] ;
endmodule
