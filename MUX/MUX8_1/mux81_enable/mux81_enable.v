`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:46:07 10/31/2021 
// Design Name: 
// Module Name:    mux81_enable 
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
module mux81_enable(
	input [7:0] i,
	input [2:0] s,
	input e,
	output reg y
    );
always @*
	if (~e)
		if (s == 0)		y = i[0];
		else if (s == 1)	y = i[1];
		else if (s == 2)	y = i[2];
		else if (s == 3)	y = i[3];
		else if (s == 4)	y = i[4];
		else if (s == 5)	y = i[5];
		else if (s == 6)	y = i[6];
		else if (s == 7)	y = i[7];
		else y = 1'bx;
	else y = 0;

endmodule
