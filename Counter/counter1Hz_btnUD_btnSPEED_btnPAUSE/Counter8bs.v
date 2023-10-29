`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:23 12/09/2021 
// Design Name: 
// Module Name:    Counter8bs 
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
module Counter8bs
	#(parameter N = 8) 
	( input clk, reset, ud,
	output [7:0] q
	);
// signal declaration
	reg [N-1:0] r_reg, cnt_reg;
	wire [N-1:0] r_next, cnt_next;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
		r_reg <= 0;
	else
		r_reg <= r_next;
	
always @(posedge ud, posedge reset)
	if (reset)
		cnt_reg <= 0;
	else
		cnt_reg <= cnt_next;
// next state logic
assign cnt_next = cnt_reg + 1;
assign r_next = (cnt_reg % 2 == 0) ? r_reg - 1 : r_reg + 1;
// output logic
assign q = r_reg;
endmodule

