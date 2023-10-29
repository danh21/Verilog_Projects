`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:20 11/25/2021 
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
   input clk, reset, S1, S2, S3, S4,
	output [7:0] q_out
    );
	 wire [3:0] clk_out;
	 wire [7:0] q1, q2, q3, q4; 
clock_div clockdivider (clk, reset, clk_out);
mux4_1 MUX1 (clk_out, {S1,S2}, f);
LedOnOff mode1 (f, reset, q1);
LedOnOffGradually mode2 (f, reset, q2);
Led_LtoR_RtoL mode3 (f, reset, q3);
LedOnAcc mode4 (f, reset, q4);
MUX MUX2 ({q4,q3,q2,q1}, {S3,S4}, q_out);
endmodule
