`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:50 11/03/2021 
// Design Name: 
// Module Name:    full_subtractor_8bit 
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
module full_subtractor_8bit(
	input [7:0] a,b,
	output [7:0] d,
	output bout	
    );
	 wire c1;
full_subtractor_4bit fs1 (a[3:0],b[3:0],1'b0,d[3:0],c1);
full_subtractor_4bit fs2 (a[7:4],b[7:4],c1,d[7:4],bout);
endmodule
