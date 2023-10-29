`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:24 10/09/2021 
// Design Name: 
// Module Name:    decoder24_high 
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
module decoder24_high(
	input e,
	input [1:0] w,
	output reg [3:0] y
    );
always @(e,w)
	if (~e)
		y = 0;
	else
		case (w)
			0: y = 4'b0001;
			1: y = 4'b0010;
			2: y = 4'b0100;
			3: y = 4'b1000;
			default: y = 4'bx;
		endcase

endmodule
