`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:00:21 11/04/2021 
// Design Name: 
// Module Name:    demux14_enable 
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
module demux14_enable(
	input e,i,
	input [1:0] s,
	output reg [3:0] y
    );
always @*
	if (~e)
		case (s)
			0: y[0] = i;	
			1: y[1] = i;	
			2: y[2] = i;
			3: y[3] = i;
			default: y = 4'bx;		
		endcase
	else y = 0;
endmodule

