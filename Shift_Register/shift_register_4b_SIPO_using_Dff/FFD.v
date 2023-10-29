`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:06:24 11/21/2021 
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
	output reg Q
    );
always @(posedge clk, posedge reset)
	if (reset)
		Q <= 0;
	else
		Q <= D;

endmodule

