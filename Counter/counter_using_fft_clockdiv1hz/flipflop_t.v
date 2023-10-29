`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:49:33 11/16/2021 
// Design Name: 
// Module Name:    flipflop_t 
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
module flipflop_t(
	input clk, reset, t,
	output reg q, 
	output q_bar
    );
always @(posedge clk, posedge reset)
	if (reset)
		q <= 0;
	else 
		if (t==0)
			q <= q;
		else
			q <= ~q;
assign q_bar = ~q;
endmodule

