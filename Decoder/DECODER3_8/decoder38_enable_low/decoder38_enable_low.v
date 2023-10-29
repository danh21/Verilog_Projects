`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:05 10/31/2021 
// Design Name: 
// Module Name:    decoder38_enable_low 
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
module decoder38_enable_low(
	input e,
	input [2:0] w,
	output reg [7:0] y
    );
always @*
	if (~e)
		case (w)
			0: y = 8'b11111110;
			1: y = 8'b11111101;
			2: y = 8'b11111011;
			3: y = 8'b11110111;
			4: y = 8'b11101111;
			5: y = 8'b11011111;
			6: y = 8'b10111111;
			7: y = 8'b01111111;
			default: y = 8'bx;
		endcase
	else y = 8'b11111111;

endmodule
