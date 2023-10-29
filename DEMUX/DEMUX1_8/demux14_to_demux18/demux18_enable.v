`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:01:16 11/01/2021 
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
	output [7:0] y
    );
	 wire e1,e2;
assign e1 = (e|s[2]);
assign e2 = (e|~s[2]);
demux14_enable d1 (e1,i,s[1:0],y[3:0]);
demux14_enable d2 (e2,i,s[1:0],y[7:4]);
endmodule
