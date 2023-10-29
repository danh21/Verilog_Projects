`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:59 10/10/2021 
// Design Name: 
// Module Name:    encoder42_low_if 
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
module encoder42_low_if(
	input [3:0] w,
	output reg [1:0] y
    );
always @(w)
	if (w==4'b1110)		y = 0;
	else if (w==4'b1101)	y = 1;
	else if (w==4'b1011)	y = 2;
	else if (w==4'b0111)	y = 3;
	else 						y = 2'bx;
endmodule
