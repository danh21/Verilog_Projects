`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:15:42 11/03/2021 
// Design Name: 
// Module Name:    Subtractor8bits 
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
module Subtractor8bits(
	input [7:0] A, B,
	output [7:0] D,
	output Bout
    );
wire [3:0] e;	 
FullSubtractor4bits FS1 (A[3:0], B[3:0], D[3:0], );
FullSubtractor4bits FS2 (A[7:4], B[7:4], D[7:4], Bout);
endmodule
