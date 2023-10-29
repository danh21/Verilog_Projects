`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:04 12/09/2021 
// Design Name: 
// Module Name:    mux16to1_enable 
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
module mux16to1_enable(
   input e,
	input [15:0] i,
	input [3:0] s,
	output y
    );
	wire c1,c2,e1,e2;
assign e1 = e | s[3];
assign e2 = e | ~s[3];
mux81_enable m1 (e1,i[7:0],s[2:0],c1);
mux81_enable m2 (e2,i[15:8],s[2:0],c2);
assign y = c1|c2;


endmodule
