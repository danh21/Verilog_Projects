`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:32:43 12/10/2021 
// Design Name: 
// Module Name:    decoder4to16_low_enable 
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
module decoder4to16_low_enable(
	input e,
	input [3:0] w,
	output [15:0] y
    );
	 wire e1, e2, e3, e4;
	 wire [15:0] a, b;
assign e1 = e | w[3] | w[2];
assign e2 = e | w[3] | (~w[2]);
assign e3 = e | (~w[3]) | w[2];
assign e4 = e | (~w[3]) | (~w[2]);
decoder2to4_low_enable DEC1 (e1, w[1:0], a[3:0]);
decoder2to4_low_enable DEC2 (e2, w[1:0], a[7:4]);
decoder2to4_low_enable DEC3 (e3, w[1:0], a[11:8]);
decoder2to4_low_enable DEC4 (e4, w[1:0], a[15:12]);
assign b = (e == 0) ? 16'b1111111111111111 : 16'bx;
assign y = a & b;
endmodule
