`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:22:42 12/09/2021 
// Design Name: 
// Module Name:    FSM 
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
module FSM(
	input reset, clk, btn_ud,
	output [7:0] q
	);
	wire clk_1Hz, tick;
clock_div clock1Hz (clk, reset, clk_1Hz);
button btn1 (reset, clk, btn_ud, tick);
Counter8bs counter (clk_1Hz, reset, tick, q);
endmodule

