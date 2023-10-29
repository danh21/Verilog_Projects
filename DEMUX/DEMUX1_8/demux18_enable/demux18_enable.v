`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:28:44 11/01/2021 
// Design Name: 
// Module Name:    demux18_enable 
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
module demux18_enable(
	input i,e,
	input [2:0] s,
	output reg [7:0] y
    );
always @*
	if (~e)
		case (s)
			0: y[0] = i;
			1: y[1] = i;
			2: y[2] = i;	
			3: y[3] = i;
			4: y[4] = i;
			5: y[5] = i;
			6: y[6] = i;
			7: y[7] = i;
			default: y = 8'bx;
		endcase
	else y = 0;
endmodule
