`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:44:28 07/07/2021 
// Design Name: 
// Module Name:    rca8 
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
module rca8(Sum,Cout,A,B,Cin);		//trang 32 sách DIGITAL COMPUTER ARITHMETIC DATAPATH DESIGN
	input [7:0] A,B;
	input Cin;
	output [7:0] Sum;
	output Cout;
	wire c0,c1,c2,c3,c4,c5,c6;
	fa fa1 (c0, Sum[0], A[0], B[0], Cin);
	fa fa2 (c1, Sum[1], A[1], B[1], c0);
	fa fa3 (c2, Sum[2], A[2], B[2], c1);
	fa fa4 (c3, Sum[3], A[3], B[3], c2);
	fa fa5 (c4, Sum[4], A[4], B[4], c3);
	fa fa6 (c5, Sum[5], A[5], B[5], c4);
	fa fa7 (c6, Sum[6], A[6], B[6], c5);
	fa fa8 (Cout, Sum[7], A[7], B[7], c6);

endmodule //rca8
