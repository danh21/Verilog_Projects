`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:39 11/16/2021 
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
	input clk, reset, ud, pause, inv,
	input [2:0] sw,
	output [7:0] q
    );
	 wire [7:0] f;
	 wire clk_out, w;
assign w = clk & pause;		
clock_div clockdiv (w, reset, f);
mux8_1 mux8to1 (f, sw, clk_out);
counter_ud_inv counter (clk_out, reset, ud, inv, q);

endmodule
