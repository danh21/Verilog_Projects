`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:48 10/09/2021 
// Design Name: 
// Module Name:    decoder38_high 
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
module decoder38_high(
	input e,
	input [2:0] w,
	output [7:0] y
    );
	wire en1,en2;
assign en1 = e&(~w[2]);
assign en2 = e&(w[2]);
decoder24_high D1 (en1, w[1:0], y[3:0]);
decoder24_high D2 (en2, w[1:0], y[7:4]);	
endmodule