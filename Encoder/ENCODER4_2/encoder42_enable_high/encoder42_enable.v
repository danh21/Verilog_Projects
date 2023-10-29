`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:51:36 10/31/2021 
// Design Name: 
// Module Name:    encoder42_enable 
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
module encoder42_enable(
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
