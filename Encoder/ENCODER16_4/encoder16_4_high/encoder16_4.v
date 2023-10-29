`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:31:47 10/18/2021 
// Design Name: 
// Module Name:    encoder16_4 
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
module encoder16_4(
	input e,
	input [15:0] w,
	output [3:0] y
    );
	wire [5:0] c;
	wire en1,en2;
assign y[3] = w[15]|w[14]|w[13]|w[12]|w[11]|w[10]|w[9]|w[8];
assign en1 = e | y[3];
assign en2 = e | ~y[3];
encoder8_3 EN1 (en1,w[7:0],c[2:0]);
encoder8_3 EN2 (en2,w[15:8],c[5:3]);
assign y[2] = c[2]|c[5];
assign y[1] = c[1]|c[4];
assign y[0] = c[0]|c[3];
endmodule
