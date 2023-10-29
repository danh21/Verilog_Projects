`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:40 10/09/2021 
// Design Name: 
// Module Name:    decoder24_enable_low_case 
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
module decoder24_enable_low_case(
	input e,
	input [1:0] w,
	output reg [3:0] y
   );
always @(e,w)
	case (e)
		1: y = 4'b1111;
		default: 
			case (w)
				0: y = 4'b1110;
				1: y = 4'b1101;
				2: y = 4'b1011;
				3: y = 4'b0111;
				default: y = 4'bx;
			endcase
	endcase
endmodule
