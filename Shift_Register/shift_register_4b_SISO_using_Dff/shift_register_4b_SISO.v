`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:12:47 11/21/2021 
// Design Name: 
// Module Name:    shift_register_4b_SISO 
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
module shift_register_4b_SISO(
	input clk, reset, s_in,
	output s_out
    );
	wire clk_out;
	wire [3:0] Q;
clock_div clockdivider (clk,reset,clk_out);	
FFD D3 (clk_out,reset,s_in,Q[3]);
FFD D2 (clk_out,reset,Q[3],Q[2]);
FFD D1 (clk_out,reset,Q[2],Q[1]);
FFD D0 (clk_out,reset,Q[1],Q[0]);
assign s_out = Q[0];
endmodule
