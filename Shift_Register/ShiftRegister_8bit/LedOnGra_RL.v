`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:05:53 12/10/2021 
// Design Name: 
// Module Name:    LedOnGra_RL 
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
module LedOnGra_RL(
	input clk, reset,
	output [7:0] q 
	);
	wire s_in;
	wire [7:0] q_out;
shift_register_8b_SIPO SIPO1 (clk, 1'b1, reset, s_in, q_out);
assign s_in = ~q_out[7] ;
assign q = (q_out[0]==0) ? ~q_out : q_out ;
endmodule
