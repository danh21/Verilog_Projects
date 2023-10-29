`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:00:40 10/09/2021 
// Design Name: 
// Module Name:    decoder24_enable_high_case 
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
module decoder24_enable_high_case(
	input e,
	input [1:0] w,
	output reg [3:0] y
   );
always @(e,w)
	case (e)
		0: 
			case (w)
				0: y = 4'b0001;
				1: y = 4'b0010;
				2: y = 4'b0100;
				3: y = 4'b1000;
				deafault: y = 4'bx;
			endcase
		1: y = 0;
	endcase
endmodule
