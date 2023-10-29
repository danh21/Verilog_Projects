`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:53 11/04/2021 
// Design Name: 
// Module Name:    counter 
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
module counter
	#(parameter N= 4, M = 10)
	( input clk, reset,
	output q,
	output reg [N-1:0] r_reg
    );
// signal declaration
	
	wire [N-1:0] r_next;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
		r_reg <= 0;
	else
		r_reg <= r_next;
// next state logic
assign r_next = (r_reg == M-1)? 0 : r_reg + 1;
// output logic
assign q = (r_reg < M/2)? 0 : 1;

endmodule
