`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:23:59 11/04/2021 
// Design Name: 
// Module Name:    syn_counter_4bit 
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
module syn_counter_4bit(
	input clk, reset,
	output [3:0] q
    );
	 // signal declaration
	reg [3:0] r_reg;
	wire [3:0] r_next;
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
