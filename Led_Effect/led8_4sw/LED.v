`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:02 11/24/2021 
// Design Name: 
// Module Name:    LED 
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
module LED(
	input clk, reset, S1, S2, S3, S4,
	output [7:0] q_out
    );
	 wire [3:0] clk_out;
	 wire [7:0] q1, q2, q3, q4; 
clock_div clockdivider (clk, reset, clk_out);
mux4_1 MUX1 (clk_out, {S1,S2}, f);
MODE1 mode1 (f, reset, q1);
MODE2 mode2 (f, reset, q2);
MODE3 mode3 (f, reset, q3);
MODE4 mode4 (f, reset, q4);
MUX MUX2 ({q4,q3,q2,q1}, {S3,S4}, q_out);
endmodule
