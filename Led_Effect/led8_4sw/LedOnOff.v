`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:04:03 12/02/2021 
// Design Name: 
// Module Name:    LedOnOff 
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
module LedOnOff(
	input clk, reset, 
	output [7:0] q_out
	);
// signal declaration
	reg [7:0] r_reg;
	wire [7:0] r_next;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
		r_reg <= 0;
	else
		r_reg <= r_next;
// next state logic
assign r_next = ~r_reg;
// output logic
assign q_out = r_reg;
endmodule
