`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:32 06/26/2021 
// Design Name: 
// Module Name:    adder4bit 
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
module adder4bit(
	input [3:0] a,b,
	input c_in,
	output [3:0] sum,
	output c_out
	);
assign {c_out,sum} = a + b + c_in;
endmodule
