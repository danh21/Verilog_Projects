`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:17:24 11/03/2021 
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
    input A,
    input B,
	 input Cin,
    output S,
    output Cout );
assign S = A^B^Cin;
assign Cout = ((A^B)&Cin)|(A&B)  ;
endmodule
