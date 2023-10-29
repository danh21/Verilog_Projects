`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:02 11/22/2021 
// Design Name: 
// Module Name:    clock_div 
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
module clock_div
   #(parameter N = 4, M = 10)	//5MHz
	(input clk, reset,
	output q	
    );
// signal declaration
	reg [N-1:0] r_reg;
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
