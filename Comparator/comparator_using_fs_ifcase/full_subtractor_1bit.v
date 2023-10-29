`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:23:38 11/01/2021 
// Design Name: 
// Module Name:    full_subtractor_1bit 
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
module full_subtractor_1bit(
	input A,B,Bin,
	output D, Bout
    );
assign D = A^B^Bin;
assign Bout = (~A&B) | (~A&Bin) | (B&Bin); 
endmodule
