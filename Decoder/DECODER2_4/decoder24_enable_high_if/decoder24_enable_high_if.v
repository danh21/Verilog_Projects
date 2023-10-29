`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:25:52 10/09/2021 
// Design Name: 
// Module Name:    decoder24_enable_high_if 
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
module decoder24_enable_high_if(
	input e,
	input [1:0] w,
	output reg [3:0] y	
   );
always @(e,w)
	if (~e)
		if (w==0)	y = 4'b0001;
		else if (w==1)	y = 4'b0010;
		else if (w==2)	y = 4'b0100;
		else if (w==3)	y = 4'b1000;
		else y = 4'bx;
	else y = 0;
endmodule
 