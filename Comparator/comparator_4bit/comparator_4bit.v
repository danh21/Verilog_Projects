`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:05:56 11/01/2021 
// Design Name: 
// Module Name:    comparator_4bit 
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
module comparator_4bit(
	input [3:0] a,b,
	output reg gt,lt,eq
    );
always @*
	begin
		gt = 0;
		lt = 0;
		eq = 0;
		if (a>b)
			gt = 1;
		else if (a<b)
			lt = 1;
		else eq = 1;		
	end
endmodule
