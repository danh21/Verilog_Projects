`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:57:51 10/29/2021 
// Design Name: 
// Module Name:    decoder24_enable_select 
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
module decoder24_enable_select(
	input [1:0] w,
	input e,s,
	output reg [3:0] y 
    );
always @*
	if (s==1 && e==0)
		case (w)
			0: y = 4'b0001;
			1: y = 4'b0010;
			2: y = 4'b0100;
			3: y = 4'b1000;
			default: y = 4'bx;
		endcase
	else if (s==1 && e==1) y = 0;
	else if (s==0 && e==0)
		case (w)
			0: y = 4'b1110;
			1: y = 4'b1101;
			2: y = 4'b1011;
			3: y = 4'b0111;
			default: y = 4'bx;
		endcase
	else y = 4'b1111;
endmodule
