`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:46:13 10/12/2021 
// Design Name: 
// Module Name:    FullAdder1bit 
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
module FullAdder1bit(
	input A,B,Cin,
	output Cout,S
	);
	
assign S = A^B^Cin;
assign Cout = ((A^B)&Cin) | (A&B); 

endmodule
