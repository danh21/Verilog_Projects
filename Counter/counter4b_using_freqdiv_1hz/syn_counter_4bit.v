`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:56 11/11/2021 
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
	wire clk_o;
clock_div clockdiv1Hz (clk, reset, clk_o);
counter_4bit counter4b (clk_o, reset, q);

endmodule
