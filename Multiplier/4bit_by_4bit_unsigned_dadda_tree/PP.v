`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:15 07/08/2021 
// Design Name: 
// Module Name:    PP 
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
module PP(P3,P2,P1,P0,X,Y);		//trang 63 sách Digital Computer Arithmetic Datapath Design Using Verilog HDL
	input [3:0] X,Y;
	output [3:0] P3,P2,P1,P0;
	
	//Partial Product Generation
	and pp1 (P0[3],X[3],Y[0]);
	and pp2 (P0[2],X[2],Y[0]);
	and pp3 (P0[1],X[1],Y[0]);
	and pp4 (P0[0],X[0],Y[0]);
	and pp5 (P1[3],X[3],Y[1]);
	and pp6 (P1[2],X[2],Y[1]);
	and pp7 (P1[1],X[1],Y[1]);
	and pp8 (P1[0],X[0],Y[1]);
	and pp9 (P2[3],X[3],Y[2]);
	and pp10 (P2[2],X[2],Y[2]);
	and pp11 (P2[1],X[1],Y[2]);
	and pp12 (P2[0],X[0],Y[2]);
	and pp13 (P3[3],X[3],Y[3]);
	and pp14 (P3[2],X[2],Y[3]);
	and pp15 (P3[1],X[1],Y[3]);
	and pp16 (P3[0],X[0],Y[3]);

endmodule //PP
