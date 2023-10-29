`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:23 07/08/2021 
// Design Name: 
// Module Name:    ra4 
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
module ra4 (Z, Cout, A, B);
	input [3:0] B;
	input [3:0] A;
	output [6:0] Z;
	output Cout;
	wire N0_3_6, N0_3_5, N0_3_4, N0_3_3, N0_2_5, N0_2_4, N0_2_3, N0_2_2, N0_1_4, N0_1_3, N0_1_2; 
	wire N2_1_2, N2_0_1, N2_1_3, N2_0_2, N2_1_4, N2_0_3, N2_1_5, N2_0_4, N0_1_1, N0_0_3, N0_0_2; 
	wire N3_1_3, N3_0_2, N3_1_4, N3_0_3, N3_1_5, N3_0_4, N3_1_6, N3_0_5, N0_0_1, N0_0_0;
	
	// Partial Product Generation
	PP pp1 ({N0_3_6, N0_3_5, N0_3_4, N0_3_3}, 
			  {N0_2_5, N0_2_4, N0_2_3, N0_2_2},
			  {N0_1_4, N0_1_3, N0_1_2, N0_1_1},
			  {N0_0_3, N0_0_2, N0_0_1, N0_0_0}, A, B);
			  
	// Partial Product Reduction
	ha HA1(N2_1_2, N2_0_1, N0_0_1, N0_1_1);
	fa FA1(N2_1_3, N2_0_2, N0_0_2, N0_1_2, N0_2_2);
	fa FA2(N2_1_4, N2_0_3, N0_0_3, N0_1_3, N0_2_3);
	fa FA3(N2_1_5, N2_0_4, N0_1_4, N0_2_4, N0_3_4);
	
	ha HA2(N3_1_3, N3_0_2, N2_0_2, N2_1_2);
	fa FA4(N3_1_4, N3_0_3, N0_3_3, N2_0_3, N2_1_3);
	ha HA3(N3_1_5, N3_0_4, N2_0_4, N2_1_4);
	fa FA5(N3_1_6, N3_0_5, N0_2_5, N0_3_5, N2_1_5);
	
	// Final Carry Propagate Adder
	rca7 cpa1(Z, Cout,
				 {N0_3_6, N3_0_5, N3_0_4, N3_0_3, N3_0_2, N2_0_1, N0_0_0},
				 {N3_1_6, N3_1_5, N3_1_4, N3_1_3, 1'b0, 1'b0, 1'b0}, 1'b0);
endmodule // ra4
