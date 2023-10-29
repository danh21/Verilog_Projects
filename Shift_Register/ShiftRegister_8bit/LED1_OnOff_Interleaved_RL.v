`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:21 12/31/2021 
// Design Name: 
// Module Name:    LED1_OnOff_Interleaved_RL 
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
module LED1_OnOff_Interleaved_RL(
	input clk, reset,
	output [7:0] q 
    );
	wire s_in;
	wire [7:0] q_out;
shift_register_8b_SIPO SIPO2 (clk, 1'b1, reset, s_in, q);
assign s_in = ~q[0] ;
endmodule
