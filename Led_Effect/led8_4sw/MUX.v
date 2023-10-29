`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:19 11/24/2021 
// Design Name: 
// Module Name:    MUX 
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
module MUX(
	input [31:0] in,
	input [1:0] sw,
	output reg [7:0] out
    );
always @(in,sw)
	case (sw)
		0: out = in[7:0];
		1: out = in[15:8];
		2: out = in[23:16];
		3: out = in[31:24];
		default: out = 8'bx;	
	endcase
endmodule
