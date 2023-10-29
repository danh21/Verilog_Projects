`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:06 11/23/2021 
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
   input clk, reset, inv, 
	output [7:0] q
	);
	wire clk_out, lr, s_in;
// module instance
clock_div clockdivider (clk, reset, clk_out);
Shift_SIPO SIPO (clk_out, reset, s_in, lr, inv, q);
assign lr = (inv == 1) ? ((q[7] == 1) ? 1 : ((q[0] == 1) ? 0 : lr)) 
							  : ((q[7] == 0) ? 1 : ((q[0] == 0) ? 0 : lr)) ; 
assign s_in = (inv == 1) ? ((lr == 1) ? q[0] : q[7]) : ((lr == 1) ? ~q[0] : ~q[7]) ;
endmodule

