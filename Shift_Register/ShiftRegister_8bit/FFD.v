`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:07 12/10/2021 
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
	input clk, pre, clr, D,
	output reg Q
    );
always @(negedge clk, negedge pre, negedge clr)
	if (~pre)
		Q <= 1;
	else if (~clr)
		Q <= 0;
	else
		Q <= D;
endmodule
