`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:52:35 11/16/2021 
// Design Name: 
// Module Name:    counter4bit 
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
module counter4bit(
	input clk, reset,
	output [3:0] q
    );
	wire f,w1,w2;
clockdiv c1 (clk, reset, f);
flipflop_t ff0 (f, reset, 1'b1, q[0], );
flipflop_t ff1 (f, reset, q[0], q[1], );
assign w1 = q[1] & q[0];
flipflop_t ff2 (f, reset, w1, q[2], );
assign w2 = q[2] & w1;
flipflop_t ff3 (f, reset, w2, q[3], );
endmodule
