`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:14 10/09/2021 
// Design Name: 
// Module Name:    decoder24_low_if 
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
module decoder24_low_if(
	input [1:0] w,
	output reg [3:0] y
   );
always @(w)
	if (w==0)	y = 4'b1110;
	else if (w==1)	y = 4'b1101;
	else if (w==2)	y = 4'b1011;
	else if (w==3)	y = 4'b0111;
	else y = 4'bx;
endmodule
