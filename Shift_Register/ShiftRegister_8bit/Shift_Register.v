`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:52 12/10/2021 
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
module Shift_Register(
   input clk, reset, SW0, SW1, SW2, SW3,
	output [7:0] q_out
    );
	 wire [1:0] clk_out;
	 wire [7:0] q1, q2, q3, q4; 
	 wire f, w;
clock_div clockdivider (clk, reset, clk_out);
mux2to1 MUX1 (clk_out, SW0, f);
assign w = SW3 & f;
LedOnGra_RL MODE1 (w, reset, q1);
LED1_OnOff_Interleaved_RL MODE2 (w, reset, q2);
LED2_OnOff_Interleaved_RL MODE3 (w, reset, q3);
Led_OnOff_Gra_InsideOut MODE4 (w, reset, q4);
mux4to1 MUX2 ({q4,q3,q2,q1}, {SW2,SW1}, q_out);
endmodule
