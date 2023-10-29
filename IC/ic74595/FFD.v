`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:10 12/02/2021 
// Design Name: 
// Module Name:    FFD 
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
module FFD(
	input clk, reset, D,
	output reg Q, 
	output Qbar
    );
always @(negedge clk, negedge reset)
	if (~reset)
		Q <= 0;
	else if (~clk)
		Q <= D;
assign Qbar = ~Q;
endmodule
