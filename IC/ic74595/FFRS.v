`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:24 12/02/2021 
// Design Name: 
// Module Name:    FFRS 
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
module FFRS(
	input clk, reset, S, R, 
	output reg Q, 
	output Qbar
    );
always @ (negedge clk, negedge reset)
	if (~reset)
		Q <= 0;
	else if (~clk)
		case ({S,R})
			2'b00: Q <= Q;
			2'b01: Q <= 0;
			2'b10: Q <= 1;
			2'b11: Q <= 1'bz;	
		endcase
assign Qbar = ~Q;
endmodule
