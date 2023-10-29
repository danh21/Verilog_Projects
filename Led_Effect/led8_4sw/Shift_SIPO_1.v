`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:57 11/24/2021 
// Design Name: 
// Module Name:    Shift_SIPO_1 
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
module Shift_SIPO_1(
	input clk, reset, s_in, lr, 
	output [7:0] q_out
	);
// signal declaration
	reg [7:0] r_reg;
	wire [7:0] r_next;
// body, register
always@(posedge clk, posedge reset)
	if (reset)
		r_reg <= 8'b10000000;	//10000000
	else
		r_reg <= r_next;
// next state logic
assign r_next = (lr==1) ? {s_in,r_reg[7:1]} : {r_reg[6:0],s_in};
// output logic
assign q_out = r_reg;
endmodule
