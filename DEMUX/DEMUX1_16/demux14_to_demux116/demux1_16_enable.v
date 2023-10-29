`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:16:25 11/04/2021 
// Design Name: 
// Module Name:    demux1_16_enable 
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
module demux1_16_enable(
	input e,i,
	input [3:0] s,
	output [15:0] y
    );
	 wire e1,e2,e3,e4;
assign e1 = e|s[3]|s[2];
assign e2 = e|s[3]|~s[2];
assign e3 = e|~s[3]|s[2];
assign e4 = e|~s[3]|~s[2];
demux14_enable d1 (e1,i,s[1:0],y[3:0]);
demux14_enable d2 (e2,i,s[1:0],y[7:4]);
demux14_enable d3 (e3,i,s[1:0],y[11:8]);
demux14_enable d4 (e4,i,s[1:0],y[15:12]);

endmodule
