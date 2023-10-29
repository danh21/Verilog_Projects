`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:35:56 11/01/2021 
// Design Name: 
// Module Name:    comparator_4bit_ifcase 
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
module comparator_4bit_ifcase(
	input [3:0] a,b,
	output reg gt,lt,eq
    );
	wire [3:0] c1;
	wire c2;
full_subtractor_4bit s1 (a[3:0],b[3:0],c1[3:0],c2);
always @*
	begin
		gt = 0;
		lt = 0;
		eq = 0;
		if (c2)
			lt = 1;
		else
			case (c1)
				0: eq = 1;
				default: gt = 1;
			endcase
	end
endmodule

