`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:40 12/09/2021 
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
	input reset, clk, btn_ud, btn_speed, btn_pause,
	output [7:0] q
	);
	wire [3:0] clk_out; 
	wire [1:0] sw;
	wire tick_sp, tick_pa, tick_ud, f, f_out;
button btn1 (reset, clk, btn_speed, tick_sp);
button btn2 (reset, clk, btn_pause, tick_pa);
button btn3 (reset, clk, btn_ud, tick_ud);
clock_div clock1Hz (clk, reset, clk_out);
Counter2bs counter1 (tick_sp, reset, sw);
mux4_1 MUX (clk_out, sw, f);
assign f_out = f || tick_pa;
Counter8bs counter2 (f_out, reset, tick_ud, q);
endmodule