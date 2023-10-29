`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:24 08/21/2021 
// Design Name: 
// Module Name:    down_counter 
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
module down_counter
#(parameter N=5)		// dem xuong N bit
	(
	 input clk, reset,
	 output [N-1:0] counter
	);
	reg [N-1:0] counter_down;
	
	always@ (posedge clk, posedge reset)
		begin 
			if (reset)
				counter_down <= 0;
			else
				counter_down <= counter_down - 1'd1;
		end
	assign counter = counter_down;
endmodule
