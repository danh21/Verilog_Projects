`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:59:45 07/04/2021 
// Design Name: 
// Module Name:    array4 
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
module array4(		//trang 64 sách Digital Computer Arithmetic Datapath Design Using Verilog HDL
	input [3:0] X,Y,
	output [7:0] Z
   );
	wire [2:0] carry1, carry2, carry3, sum1, sum2, sum3;
	wire [3:0] P0,P1,P2,P3;
	wire [1:0] carry4;
	
	//Partial Product Generation
	PP pp1 (P3,P2,P1,P0,X,Y);
	
	//Partial Product Reduction
	ha HA1 (carry1[2], sum1[2], P1[2], P0[3]);
	ha HA2 (carry1[1], sum1[1], P1[1], P0[2]);
	ha HA3 (carry1[0], sum1[0], P1[0], P0[1]);
	fa FA1 (carry2[2], sum2[2], P2[2], P1[3], carry1[2]);
	fa FA2 (carry2[1], sum2[1], P2[1], sum1[2], carry1[1]);
	fa FA3 (carry2[0], sum2[0], P2[0], sum1[1], carry1[0]);	
	fa FA4 (carry3[2], sum3[2], P3[2], P2[3], carry2[2]);
	fa FA5 (carry3[1], sum3[1], P3[1], sum2[2], carry2[1]);
	fa FA6 (carry3[0], sum3[0], P3[0], sum2[1], carry2[0]);
	
	//Generate lower product bits YBITS
	buf b1 (Z[0], P0[0]);
	buf b2 (Z[1], sum1[0]);
	buf b3 (Z[2], sum2[0]);
	buf b4 (Z[3], sum3[0]);
	
	//Final Carry Propagate Addition (CPA)
	ha CPA1 (carry4[0], Z[4], carry3[0], sum3[1]);
	fa CPA2 (carry4[1], Z[5], carry3[1], carry4[0], sum3[2]);
	fa CPA3 (Z[7], Z[6], carry3[2], carry4[1], P3[3]);

endmodule  //array4
