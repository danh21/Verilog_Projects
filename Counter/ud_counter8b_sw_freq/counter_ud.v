`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:32 11/16/2021 
// Design Name: 
// Module Name:    counter_ud 
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
module counter_ud
	#(parameter N = 8)
	(input clk, reset, ud,
	output [7:0] q
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
assign r_next = (ud==1) ? r_reg+1 : r_reg-1;
// output logic
assign q = r_reg;

endmodule
