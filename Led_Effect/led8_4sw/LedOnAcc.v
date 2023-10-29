`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:13:23 12/02/2021 
// Design Name: 
// Module Name:    LedOnAcc 
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
module LedOnAcc(
   input clk, reset,
	output [7:0] q );
	wire s_in;
Shift_SIPO_2 SIPO2 (clk, reset, s_in, q);
assign s_in = ((q[0] == 1) && (q[7] == 1 || q[6] == 1 || q[5] == 1) || q[4] == 1 || q[3] == 1 || q[2] == 1) ?
		(			
			((q[1] == 1) && (q[7] == 1 || q[6] == 1 || q[5] == 1) || q[4] == 1 || q[3] == 1)?
			(
				((q[2] == 1) && (q[7] == 1 || q[6] == 1 || q[5] == 1) || q[4] == 1)?
				(
					((q[3] == 1) && (q[7] == 1 || q[6] == 1 || q[5] == 1))?
					(
						((q[4] == 1) && (q[7] == 1 || q[6] == 1) ) ?
						(
							(q[5] == 1 && q[7] == 1 ) ?
							q[6]
							:q[5]
						)
						:q[4]
					)
					:q[3]
				)
				:q[2]
			)
			:q[1]
		) 
		:q[0];
		

endmodule
