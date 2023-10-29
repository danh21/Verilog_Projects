`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:06 11/24/2021 
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
	input [3:0] in,
	input [1:0] sw,
	output reg out
    );
always @(in,sw)
	case (sw)
		0: out = in[0];
		1: out = in[1];
		2: out = in[2];
		3: out = in[3];
		default: out = 1'bx;	
	endcase
endmodule
