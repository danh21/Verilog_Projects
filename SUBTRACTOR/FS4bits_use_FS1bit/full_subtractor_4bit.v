`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:01 10/22/2021 
// Design Name: 
// Module Name:    full_subtractor_4bit 
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
module full_subtractor_4bit(	//cach 1
	input [3:0] A,B,
	input Bin,
	output [3:0] D,
	output Bout
    );
	 wire B0,B1,B2;
full_subtractor_1bit D1 (A[0],B[0],Bin,D[0],B0);
full_subtractor_1bit D2 (A[1],B[1],B0,D[1],B1);
full_subtractor_1bit D3 (A[2],B[2],B1,D[2],B2);
full_subtractor_1bit D4 (A[3],B[3],B2,D[3],Bout);
endmodule
