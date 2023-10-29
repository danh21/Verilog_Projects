`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:26:49 12/02/2021 
// Design Name: 
// Module Name:    simple 
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
module simple
	#(parameter [2:1] A = 2'b00, B = 2'b01, C = 2'b10)
	(
	input clock, resetn, w,
	output z
    );
	reg [2:1] y, Y;
// Define the next state combinational circuit
always @ (w, y)
	case (y)
		A: if (w) Y = B; else Y = A;
		B: if (w) Y = C; else Y = A;
		C: if (w) Y = C; else Y = A;
		default: Y = 2'bx;
	endcase
// Define the sequential block
always @ (negedge resetn, posedge clock)
	if (~resetn)
		y <= A;
	else
		y <= Y;
// Define output
assign z = (y == C);
endmodule
