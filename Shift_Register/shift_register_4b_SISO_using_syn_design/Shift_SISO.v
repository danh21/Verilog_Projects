`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:31:33 11/21/2021 
// Design Name: 
// Module Name:    Shift_SISO 
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
module Shift_SISO
	#(parameter N= 4) 
	(input clk, reset, s_in,
	output s_out
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
assign r_next = {s_in, r_reg[N-1:1]};
// output logic
assign s_out = r_reg[0];
endmodule
