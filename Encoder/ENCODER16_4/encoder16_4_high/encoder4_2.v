`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:29:50 10/18/2021 
// Design Name: 
// Module Name:    encoder4_2 
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
module encoder4_2(
	input e,
	input [3:0] w,
	output reg [1:0] y
    );
always @(e,w)
	if (~e)
		case (w)
			1: y = 0;
			2: y = 1;
			4: y = 2;
			8: y = 3;
			default: y = 2'bx;
		endcase
	else y = 0;
endmodule

