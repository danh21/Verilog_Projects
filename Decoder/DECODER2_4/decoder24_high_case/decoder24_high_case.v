`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:44 10/01/2021 
// Design Name: 
// Module Name:    decoder24_high_case 
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
module decoder24_high_case(
   input [1:0] w,
	output reg [3:0] y
    );
always @(w)
	case(w)
		0: y = 4'b0001;
		1: y = 4'b0010;
		2: y = 4'b0100;
		3: y = 4'b1000;
		default: y = 4'bx;
	endcase
endmodule
