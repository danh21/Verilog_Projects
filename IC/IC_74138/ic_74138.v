`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:41:34 11/03/2021 
// Design Name: 
// Module Name:    ic_74138 
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
module ic_74138(
	input g1,g2a,g2b,
	input a,b,c,
	output [7:0] y
    );
	wire g11,en,a1,b1,c1,a2,b2,c2;
not (g11,g1);
and (en,~g11,~g2a,~g2b);
not (a1,a);
not (b1,b);
not (c1,c);
not (a2,a1);
not (b2,b1);
not (c2,c1);
nand (y[0],a1,b1,c1,en);
nand (y[1],a2,b1,c1,en);
nand (y[2],a1,b2,c1,en);
nand (y[3],a2,b2,c1,en);
nand (y[4],a1,b1,c2,en);
nand (y[5],a2,b1,c2,en);
nand (y[6],a1,b2,c2,en);
nand (y[7],a2,b2,c2,en);

endmodule
