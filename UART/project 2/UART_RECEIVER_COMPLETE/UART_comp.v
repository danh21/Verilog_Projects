`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:25 08/03/2021 
// Design Name: 
// Module Name:    UART_comp 
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
module UART_comp
	#(parameter w = 8, s = 4, 
					N = 3, M = 5
	)
	(
	input wire clk, reset,
	input wire rx_data,
	output wire s_tick,
	output wire [w-1:0] dout,
	output wire rx_ctrl, empty, full
	);

	Baud_rate #(.N(N),.M(M)) B(.clk(clk),.reset(reset),.tick(s_tick));
	UART_receiver R(.clk(clk),.reset(reset),.rx_data(rx_data),.s_tick(s_tick),.rx_ctrl(rx_ctrl),.dout(dout));
	FIFO_rx #(.w(w),.s(s)) F(.wd(dout),.rs(reset),.wr(rx_ctrl),.rd(),.empty(empty),.full(full),.r());

endmodule
