`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:38:08 12/09/2021 
// Design Name: 
// Module Name:    mux81_enable 
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
module mux81_enable(
	input e,
	input [7:0] i,
	input [2:0] s,
	output y
    );
	wire c1,c2,e1,e2;
assign e1 = e | s[2];
assign e2 = e | ~s[2];
mux41_enable m1 (e1,i[3:0],s[1:0],c1);
mux41_enable m2 (e2,i[7:4],s[1:0],c2);
assign y = c1|c2;
endmodule
