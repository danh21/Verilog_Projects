`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:45:50 12/10/2021 
// Design Name: 
// Module Name:    mux2to1 
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
module mux2to1(
	input [1:0] i,
	input s,
	output reg y
	);

always @ (i, s)
	case (s)
		0: y = i[0];
		1: y = i[1];
		default: y = 1'bx;
	endcase
endmodule
