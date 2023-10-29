`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:22:26 10/09/2021 
// Design Name: 
// Module Name:    decoder24_low_case 
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
module decoder24_low_case(
	input [1:0] w,
	output reg [3:0] y
   );
always @(w)
	case(w)
		0: y = 4'b1110;
		1: y = 4'b1101;
		2: y = 4'b1011;
		3: y = 4'b0111;
		default: y = 4'bx;
	endcase
endmodule
