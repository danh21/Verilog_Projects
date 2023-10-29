`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:47 10/31/2021 
// Design Name: 
// Module Name:    encoder83_enable 
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
module encoder83_enable(
   input e,
	input [7:0] w,
	output reg [2:0] y
    );
always @(e,w)
	if (~e)
		case (w)
			1: y = 0;
			2: y = 1;
			4: y = 2;
			8: y = 3;
			16: y = 4;
			32: y = 5;
			64: y = 6;
			128: y = 7;
			default: y = 3'bx;
		endcase
	else y = 0;
endmodule
