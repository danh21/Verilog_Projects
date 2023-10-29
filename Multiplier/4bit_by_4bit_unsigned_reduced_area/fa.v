`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:48:51 07/08/2021 
// Design Name: 
// Module Name:    fa 
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
module fa(Cout,S,A,B,Cin);
	input A,B,Cin;
	output S, Cout;
	assign S = A^B^Cin;
	assign Cout = (A&B) | (Cin & (A^B));
endmodule

