`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:56 10/01/2021 
// Design Name: 
// Module Name:    encoder42_high_if 
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
module encoder42_high_if(
	input [3:0] w,
	output reg [1:0] y
    );
always @(w)
	if(w==1)			y=0;
	else if(w==2)	y=1;
	else if(w==4)	y=2;
	else if(w==8)	y=3;
	else				y=2'bx;
endmodule
