`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:34:37 11/24/2021 
// Design Name: 
// Module Name:    Shift_SIPO_2 
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
module Shift_SIPO_2(
input clk, reset, s_in,
output [7:0] q_out
);
reg [7:0] r_reg;
wire [7:0] r_next;
integer i;
always @ (posedge clk, posedge reset)
if (reset) r_reg <= 128;
else r_reg <= r_next;
assign r_next = (r_reg == 255) ? 128 :(
	(q_out[0] == 1) ?
	(
		(q_out[1] == 1) ?
		(
			(q_out[2] == 1) ?
			(
				(q_out[3] == 1 ) ?
				(
					(q_out[4] == 1) ?
					(
						(q_out[5] == 1) ?
						(
							(q_out[6] == 1) ?
							{s_in,r_reg[6:0]}
							:{s_in,r_reg[7],r_reg[5:0]}
						)
						:{s_in,r_reg[7:6],r_reg[4:0]}
					)
					:{s_in,r_reg[7:5],r_reg[3:0]}
				)
				:{s_in,r_reg[7:4],r_reg[2:0]}
			)
			:{s_in,r_reg[7:3],r_reg[1:0]}
		)
		:{s_in,r_reg[7:2],r_reg[0]}
	)
	:{s_in,r_reg[7:1]} );
assign q_out = r_reg;
endmodule					
				
