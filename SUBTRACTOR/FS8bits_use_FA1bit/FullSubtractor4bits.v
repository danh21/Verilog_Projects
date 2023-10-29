`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:16:53 11/03/2021 
// Design Name: 
// Module Name:    FullSubtractor4bits 
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
module FullSubtractor4bits(
	input [3:0] A,B,
	output [3:0] D,
	output Bout
		 );
	wire B0,B1,B2,B3;
FullAdder1bit F0(A[0],~B[0],1'b1,D[0],B0);
FullAdder1bit F1(A[1],~B[1],B0,D[1],B1);
FullAdder1bit F2(A[2],~B[2],B1,D[2],B2);
FullAdder1bit F3(A[3],~B[3],B2,D[3],B3);
assign Bout = ~B3;
endmodule
