`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:35:23 12/02/2021 
// Design Name: 
// Module Name:    Shift_Register 
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
module Shift_Register
   #(parameter N=8)
	( input SRCLK,RCLK,reset,s_in,
	output [N-1:0] p_out,
	output reg [N-1:0] q
    );
// signal declaration
	reg [N-1:0] r_reg;
	wire [N-1:0] r_next;
// body, register
always @(posedge SRCLK, posedge reset)
	if (reset)
		r_reg <= 0;
	else
		r_reg <= r_next;
// next state logic
assign r_next = {s_in,r_reg[N-1:1]};
// output logic 
assign p_out = r_reg;
always @(posedge RCLK, posedge reset)
	if (reset)
		q <= 0;
	else
		q <= r_reg;
endmodule
