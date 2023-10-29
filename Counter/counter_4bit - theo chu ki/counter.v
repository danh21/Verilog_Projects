`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:26:27 11/18/2021 
// Design Name: 
// Module Name:    counter 
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
module counter(
	input clk, reset,
	input [2:0] sw,
	output en,
	output [3:0] q	
    );
	wire [7:0]f;
	wire clk_out;
clock_div cd1 (clk,reset,f);
mux8_1 mux (f,sw, clk_out);
enable enable123 (clk_out,reset,en);
assign w = en & clk_out;
syn_counter_4bit counter (w, reset, q);

endmodule
