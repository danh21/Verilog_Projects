`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:16:05 12/09/2021 
// Design Name: 
// Module Name:    Counter2bs 
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
module Counter2bs
    #(parameter N = 2) 
	( input clk, reset,
	output [N-1:0] q
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
assign r_next = r_reg + 1;
// output logic
assign q = r_reg;
endmodule
