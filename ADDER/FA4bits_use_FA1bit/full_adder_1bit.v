`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:43:17 10/24/2021 
// Design Name: 
// Module Name:    full_adder_1bit 
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
module full_adder_1bit(
	input A,B,Cin,
	output Cout,S
    );
assign S = A^B^Cin;
assign Cout = ((A^B)&Cin) | (A&B); 

endmodule
