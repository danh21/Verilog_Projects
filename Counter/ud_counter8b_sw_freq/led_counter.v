`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:20 11/16/2021 
// Design Name: 
// Module Name:    led_counter 
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
module led_counter(
	input clk, reset,
	input [1:0] sw,
	input ud,
	output [7:0] led
    );
	wire [3:0] f;
	wire clk_o;
clock_div clockdivider (clk, reset, f);
mux4_1 mux4to1 (f, sw, clk_o);
counter_ud counter (clk_o, reset, ud, led);

endmodule
