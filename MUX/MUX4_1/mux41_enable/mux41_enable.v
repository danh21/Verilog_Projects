`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:48:16 10/31/2021 
// Design Name: 
// Module Name:    mux41_enable 
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
module mux41_enable(
	input e,
	input [3:0] i,
	input [1:0] s,
	output reg y
	);

always @*
	if (~e)
		case (s)
			0: y = i[0];
			1: y = i[1];
			2: y = i[2];
			3: y = i[3];
			default: y = 1'bx;
		endcase
	else y = 0;

endmodule
