`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:13:08 06/26/2021 
// Design Name: 
// Module Name:    adder8bit 
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
module adder8bit(
	input [7:0] a,b,
	input c_in,
	output [7:0] sum,
	output c_out
    );
	wire w1;
adder4bit AD1 (.a(a[3:0]),.b(b[3:0]),.c_in(c_in),.sum(sum[3:0]),.c_out(w1));
adder4bit AD2 (.a(a[7:4]),.b(b[7:4]),.c_in(w1),.sum(sum[7:4]),.c_out(c_out));
endmodule
