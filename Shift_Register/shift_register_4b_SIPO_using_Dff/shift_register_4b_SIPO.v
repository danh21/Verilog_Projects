`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:18 11/21/2021 
// Design Name: 
// Module Name:    shift_register_4b_SIPO 
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
module shift_register_4b_SIPO(
	input clk, reset, s_in,
	output [3:0] p_out
    );
	wire clk_out;
clock_div clockdivider (clk, reset, clk_out);
FFD D3 (clk_out,reset,s_in,p_out[3]);
FFD D2 (clk_out,reset,p_out[3],p_out[2]);
FFD D1 (clk_out,reset,p_out[2],p_out[1]);
FFD D0 (clk_out,reset,p_out[1],p_out[0]);
endmodule
