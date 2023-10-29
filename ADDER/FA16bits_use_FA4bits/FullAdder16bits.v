`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:07 10/12/2021 
// Design Name: 
// Module Name:    FullAdder16bits 
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
module FullAdder16bits(
	input [15:0] a,b,
	output [16:0] s
    );
	wire c0,c1,c2;
FullAdder4bits FA1 (a[3:0],b[3:0],1'b0,c0,s[3:0]);
FullAdder4bits FA2 (a[7:4],b[7:4],c0,c1,s[7:4]);
FullAdder4bits FA3 (a[11:8],b[11:8],c1,c2,s[11:8]);
FullAdder4bits FA4 (a[15:12],b[15:12],c2,s[16],s[15:12]);

endmodule
