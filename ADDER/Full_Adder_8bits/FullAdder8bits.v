`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:13:53 10/12/2021 
// Design Name: 
// Module Name:    FullAdder8bits 
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
module FullAdder8bits(
	input [7:0] A,B,
	output [8:0] S
    );
	 wire C;
FullAdder4bits FA1 (A[3:0],B[3:0],1'b0,C,S[3:0]);
FullAdder4bits FA2 (A[7:4],B[7:4],C,S[8],S[7:4]);

endmodule
