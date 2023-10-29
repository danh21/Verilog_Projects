`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:47:41 10/12/2021 
// Design Name: 
// Module Name:    FullAdder4bits 
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
module FullAdder4bits(
	input [3:0] A,B,
	input Cin,
	output Cout,
	output [3:0] S
	);
	wire C0,C1,C2;
FullAdder1bit F1 (A[0],B[0],Cin,C0,S[0]);
FullAdder1bit F2 (A[1],B[1],C0,C1,S[1]);
FullAdder1bit F3 (A[2],B[2],C1,C2,S[2]);
FullAdder1bit F4 (A[3],B[3],C2,Cout,S[3]);

endmodule
