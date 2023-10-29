`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:26:33 08/21/2021 
// Design Name: 
// Module Name:    counter_enable 
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
module counter_enable
	#(
		parameter N = 4,	// dem len N bit
					 N1 = 4'd8,	// phat hien xung clk N1 thi ce len 1
					 N2 = 4'd12	// phat hien xung clk N2 thi ce len 1
	)
	(
		input clk, reset,
		output [3:0] counter,
		output reg ce
   );
	reg [3:0] counter_up;
	
	always @(posedge clk, posedge reset)
		begin
			if (reset)
				counter_up <= 0;
			else
				counter_up <= counter_up + 1'd1;
		end
		
	always @*
		begin
			case(counter_up)
				N1: ce = 1;
				N2: ce = 1;
				default: ce = 0;
			endcase
		end
	assign counter = counter_up;
endmodule 
