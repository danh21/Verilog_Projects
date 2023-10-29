`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:54:51 12/09/2021 
// Design Name: 
// Module Name:    mux4_1 
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
module mux4_1(
	input [3:0] clk,
	input [1:0] sw,
	output reg clk_o
    );
always @(clk, sw)
	case (sw)
		0: clk_o = clk[0];
		1: clk_o = clk[1];
		2: clk_o = clk[2];
		3: clk_o = clk[3];
		default: clk_o = 1'bx;
	endcase
endmodule

