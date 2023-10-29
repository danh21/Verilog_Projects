`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:11:51 12/31/2021 
// Design Name: 
// Module Name:    LED2_OnOff_Interleaved_RL 
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
module LED2_OnOff_Interleaved_RL(
	input clk, reset,
	output [7:0] q 
    );
	wire s_in;
	wire [7:0] q_out;
shift_register_8b_SIPO SIPO3 (clk, 1'b1, reset, s_in, q);
assign s_in = ~q[1] ;
endmodule
