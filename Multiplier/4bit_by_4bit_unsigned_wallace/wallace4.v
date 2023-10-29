`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:27 07/07/2021 
// Design Name: 
// Module Name:    wallace4 
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
module wallace4(Z,Cout,A,B);	//trang 67 sách DIGITAL COMPUTER ARITHMETIC DATAPATH DESIGN
	input [3:0] A,B;
	output [7:0] Z;
	output Cout;
	wire N0_0_0, N0_0_1, N0_0_2, N0_0_3, N0_1_4, N0_1_3, N0_1_2, N0_1_1, N2_0_5;
	wire N0_2_5, N0_2_4, N0_2_3, N0_2_2, N0_3_6, N0_3_5, N0_3_4, N0_3_3;
   wire N2_1_2, N2_0_1, N2_1_3, N2_0_2, N2_1_4, N2_0_3, N2_1_5, N2_0_4, N2_1_6; 
	wire N3_1_3, N3_0_2, N3_1_4, N3_0_3, N3_1_5, N3_0_4, N3_1_6, N3_0_5, N3_1_7;
	//Partial Product Generation
	PP pp1 ({N0_3_6, N0_3_5, N0_3_4, N0_3_3},
			  {N0_2_5, N0_2_4, N0_2_3, N0_2_2},
			  {N0_1_4, N0_1_3, N0_1_2, N0_1_1},
			  {N0_0_3, N0_0_2, N0_0_1, N0_0_0},A,B);
	//Partial Product Reduction
	ha HA1 (N2_1_2, N2_0_1, N0_0_1, N0_1_1);
	fa FA1 (N2_1_3, N2_0_2, N0_0_2, N0_1_2, N0_2_2);
	fa FA2 (N2_1_4, N2_0_3, N0_0_3, N0_1_3, N0_2_3);
	fa FA3 (N2_1_5, N2_0_4, N0_1_4, N0_2_4, N0_3_4);
	ha HA2 (N2_1_6, N2_0_5, N0_2_5, N0_3_5);

	ha HA3 (N3_1_3, N3_0_2, N2_0_2, N2_1_2);
	fa FA4 (N3_1_4, N3_0_3, N2_0_3, N2_1_3, N0_3_3);
	ha HA4 (N3_1_5, N3_0_4, N2_0_4, N2_1_4);
	ha HA5 (N3_1_6, N3_0_5, N2_0_5, N2_1_5);
	ha HA6 (N3_1_7, N3_0_6, N0_3_6, N2_1_6);
	
	//Final CPA
	rca8 cpa1 (Z, Cout,
			{N3_1_7, N3_0_6, N3_0_5, N3_0_4, N3_0_3, N3_0_2, N2_0_1, N0_0_0},
			{1'b0, N3_1_6, N3_1_5, N3_1_4, N3_1_3, 1'b0, 1'b0, 1'b0}, 1'b0);
endmodule
