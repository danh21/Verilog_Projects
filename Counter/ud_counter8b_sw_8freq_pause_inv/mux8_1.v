`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:47 11/16/2021 
// Design Name: 
// Module Name:    mux8_1 
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
module mux8_1(
	input [7:0] clk_in,
	input [2:0] sw,
	output reg clk_out
    );
always @(clk_in,sw)
	case (sw)
		0: clk_out = clk_in[0];
		1: clk_out = clk_in[1];
		2: clk_out = clk_in[2];
		3: clk_out = clk_in[3];
		4: clk_out = clk_in[4];
		5: clk_out = clk_in[5];
		6: clk_out = clk_in[6];
		7: clk_out = clk_in[7];	
		default: clk_out = 1'bx;	
	endcase

endmodule

