`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:36 10/12/2021 
// Design Name: 
// Module Name:    encoder42_low_case 
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
module encoder42_low_case(
	input [3:0] w,
	output reg [1:0] y
    );
always @(w)
	case (w)
		4'b1110: y = 0;
		4'b1101: y = 1;
		4'b1011: y = 2;
		4'b0111: y = 3;
		default: y = 2'bx;
	endcase

endmodule
