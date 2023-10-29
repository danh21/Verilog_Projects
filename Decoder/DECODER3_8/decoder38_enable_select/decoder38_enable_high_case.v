`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:39:50 10/28/2021 
// Design Name: 
// Module Name:    decoder38_enable_high_case 
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
module decoder38_enable_high_case(
	input e,s,
	input [2:0] w,
	output reg [7:0] y
    );
always @*
	if(s)
		if (~e)
			case (w)
				0: y = 8'b00000001;
				1: y = 8'b00000010;
				2: y = 8'b00000100;
				3: y = 8'b00001000;
				4: y = 8'b00010000;
				5: y = 8'b00100000;
				6: y = 8'b01000000;
				7: y = 8'b10000000;
				default: y = 8'bx;
			endcase
		else y = 0;
	else	
		if (~e)
			case (w)
				0: y = 8'b11111110;
				1: y = 8'b11111101;
				2: y = 8'b11111011;
				3: y = 8'b11110111;
				4: y = 8'b11101111;
				5: y = 8'b11011111;
				6: y = 8'b10111111;
				7: y = 8'b01111111;
				default: y = 8'bx;
			endcase
		else y = 8'b11111111;
		

endmodule
