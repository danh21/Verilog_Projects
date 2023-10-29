`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:46 04/28/2021 
// Design Name: 
// Module Name:    FFD 
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
module FFD(d,clk,pre,clr,ce,q);
input d,clk,clr,pre,ce;
output q;
reg q;
always @ (negedge clk , negedge clr, negedge pre)
if (!pre)
q = 1'b1;
else if (!clr)
q = 1'b0;
else if (!ce)
q = d;


endmodule
