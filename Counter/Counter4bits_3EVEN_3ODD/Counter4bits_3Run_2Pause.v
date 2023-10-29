`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:53 11/18/2021 
// Design Name: 
// Module Name:    Counter4bits_3Run_2Pause 
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
module Counter4bits_3Run_2Pause( clk, reset, oe, q
    );
	input clk, reset;
	output oe;
	output [3:0] q;
	wire C1;
	Enable EN (clk, reset, oe);
//	assign C1 = oe & clk;
	SynCounter4bits SC4 (clk, reset, oe, q);

endmodule
