`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:23 07/04/2021 
// Design Name: 
// Module Name:    moa4x4 
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
module moa4x4(			//TRANG 59 
	input [3:0] A,B,D,E,
	input Cin,
	output [4:0] S,C
   );
	wire c_0_0, c_0_1, c_0_2;
	wire s_0_0, s_0_1, s_0_2, s_0_3;
	fa csa1 (c_0_0, s_0_0, A[0], B[0], D[0]);
	fa csa2 (c_0_1, s_0_1, A[1], B[1], D[1]);
	fa csa3 (c_0_2, s_0_2, A[2], B[2], D[2]);
	fa csa4 (S[4], s_0_3, A[3], B[3], D[3]);
	assign C[0] = 0;
	fa csa5 (C[1], S[0], E[0], s_0_0, Cin);
	fa csa6 (C[2], S[1], E[1], s_0_1, c_0_0);
	fa csa7 (C[3], S[2], E[2], s_0_2, c_0_1);
	fa csa8 (C[4], S[3], E[3], s_0_3, c_0_2);

endmodule
