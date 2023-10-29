`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:44:09 10/24/2021 
// Design Name: 
// Module Name:    full_adder_4bit 
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
module full_adder_4bit(
	input [3:0] A,B,
	input Cin,
	output Cout,
	output [3:0] S
	);
	wire C0,C1,C2;
full_adder_1bit F1 (A[0],B[0],Cin,C0,S[0]);
full_adder_1bit F2 (A[1],B[1],C0,C1,S[1]);
full_adder_1bit F3 (A[2],B[2],C1,C2,S[2]);
full_adder_1bit F4 (A[3],B[3],C2,Cout,S[3]); 
endmodule
