`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:09:54 01/01/2022 
// Design Name: 
// Module Name:    shift_register_8b_SIPO_2 
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
module shift_register_8b_SIPO_2(
	input clk, pre, reset, s_in,
	output [7:0] out
    );
FFD D3 (clk, pre, reset, s_in, out[3]);
FFD D2 (clk, pre, reset, out[3], out[2]);
FFD D1 (clk, pre, reset, out[2], out[1]);
FFD D0 (clk, pre, reset, out[1], out[0]);

FFD D4 (clk, pre, reset, s_in, out[4]);
FFD D5 (clk, pre, reset, out[4], out[5]);
FFD D6 (clk, pre, reset, out[5], out[6]);
FFD D7 (clk, pre, reset, out[6], out[7]);
endmodule
