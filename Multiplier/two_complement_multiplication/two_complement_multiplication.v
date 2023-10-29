`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:29:32 07/09/2021 
// Design Name: 
// Module Name:    two_complement_multiplication 
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
module two_complement_multiplication(	//PP multiplication_s slide 21
	input [3:0] x,y,
	output [7:0] z
   );
	wire [3:1] sum1,sum2,g0;
	wire [3:0] carry1,carry2,carry3,g1,g2,g3;
	
	//row 1
	nand pp1 (g0[3], x[3], y[0]);
	and pp2 (g0[2], x[2], y[0]);
	and pp3 (g0[1], x[1], y[0]);
	and pp4 (z[0], x[0], y[0]);
	//row 2
	nand pp5 (g1[3], x[3], y[1]);
	and pp6 (g1[2], x[2], y[1]);
	and pp7 (g1[1], x[1], y[1]);
	and pp8 (g1[0], x[0], y[1]);
	//row 3
	nand pp9 (g2[3], x[3], y[2]);
	and pp10 (g2[2], x[2], y[2]);
	and pp11 (g2[1], x[1], y[2]);
	and pp12 (g2[0], x[0], y[2]);
	//row 4
	and pp13 (g3[3], x[3], y[3]);
	nand pp14 (g3[2], x[2], y[3]);
	nand pp15 (g3[1], x[1], y[3]);
	nand pp16 (g3[0], x[0], y[3]);
	
	//adder row 1
	ha HA10 (carry1[0], z[1], g1[0], g0[1]);
	fa FA11 (carry1[1], sum1[1], g0[2], g1[1], carry1[0]);
	fa FA12 (carry1[2], sum1[2], g0[3], g1[2], carry1[1]);
	fa FA13 (carry1[3], sum1[3], 1'b1, g1[3], carry1[2]);
	//adder row 2
	ha HA20 (carry2[0], z[2], g2[0], sum1[1]);
	fa FA21 (carry2[1], sum2[1], sum1[2], g2[1], carry2[0]);
	fa FA22 (carry2[2], sum2[2], sum1[3], g2[2], carry2[1]);
	fa FA23 (carry2[3], sum2[3], carry1[3], g2[3], carry2[2]);
	//adder row 3
	ha HA30 (carry3[0], z[3], g3[0], sum2[1]);
	fa FA31 (carry3[1], z[4], sum2[2], g3[1], carry3[0]);
	fa FA32 (carry3[2], z[5], sum2[3], g3[2], carry3[1]);
	fa FA33 (carry3[3], z[6], carry2[3], g3[3], carry3[2]);
	not No (z[7], carry3[3]);

endmodule
