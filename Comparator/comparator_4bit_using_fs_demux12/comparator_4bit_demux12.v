`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:03 11/01/2021 
// Design Name: 
// Module Name:    comparator_4bit_demux12 
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
module comparator_4bit_demux12(
	input [3:0] a,b,
	output gt,lt,eq
    );
	wire [3:0] c1;
	wire c2,c3,c4,c5;
full_subtractor_4bit s1 (a[3:0],b[3:0],c1[3:0],c2);
assign c3 = c1[3]|c1[2]|c1[1]|c1[0];
demux12 d1 (1'b1, c2, c4, lt);
demux12 d3 (1'b1, c3, eq, c5);
assign gt = c4 & c5;

endmodule
