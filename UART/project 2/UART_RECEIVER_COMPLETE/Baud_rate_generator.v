`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:02:00 08/03/2021 
// Design Name: 
// Module Name:    Baud_rate_generator 
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
module Baud_rate
	#(parameter N = 3, 	 //Internal clock 10MHz, Baud 115200, lay mau 16x
					M = 5  	 //tick = 1 khi dem den (10.10^6)/(115200 x 16) = 5
	)                              //dem N bit, mod M
	(
	input wire clk, reset,
	output wire tick
	);
	reg [N-1:0] q;

	always @(posedge clk, posedge reset)
		if (reset)
			q <= 0;
		else
			begin
				if (tick == 1)                    //tick len 1 roi thi reset q dem lai ve 0
					q <= 0;
				else
					q <= q + 1'b1;
			end
	assign tick = (q == (M - 1)) ? 1'b1 : 1'b0; //tick = 1 neu q = 4'b100 => dem mod 5

endmodule
