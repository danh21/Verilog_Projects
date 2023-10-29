`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:35:20 10/22/2021 
// Design Name: 
// Module Name:    full_subtractor 
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
