`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:29:59 12/10/2021 
// Design Name: 
// Module Name:    decoder2to4_low_enable 
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
module decoder2to4_low_enable(
   input e,
	input [1:0] w,
	output reg [3:0] y
   );
always @(e,w)
	if (~e)		
		case (w)
			0: y = 4'b1110;
			1: y = 4'b1101;
			2: y = 4'b1011;
			3: y = 4'b0111;
			default: y = 4'bx;
		endcase
	else
		y = 4'b1111;
endmodule
