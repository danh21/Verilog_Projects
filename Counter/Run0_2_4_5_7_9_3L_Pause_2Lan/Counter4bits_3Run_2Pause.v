`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:31:59 11/19/2021 
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
//0 2 4 5 7 9 lap 3 lan sau do dung 2 lan
module Counter4bits_3Run_2Pause( clk, reset, oe, en, q
    );
	input clk, reset;
	output oe, en;
	output [3:0] q;
	wire C1;
	Even_Odd OE (clk, reset, oe);
	Enable EN (clk, reset, en); 
	assign C1 = en & clk;
	SynCounter4bits SC4 (C1, reset, oe, q);

endmodule