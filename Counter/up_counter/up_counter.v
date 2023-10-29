`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:48 08/21/2021 
// Design Name: 
// Module Name:    up_counter 
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
module up_counter
	#(parameter N=4)	// dem len N bit
	(
	input clk,
	input reset,
	output [N-1:0] counter
   );
	reg [N-1:0] counter_up;
	
	always @(posedge clk, posedge reset)
		begin
			if (reset)
				counter_up <= 0;
			else 
				counter_up <= counter_up + 1'd1;
		end
	assign counter = counter_up;
endmodule
