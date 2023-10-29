`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:57:17 10/31/2021 
// Design Name: 
// Module Name:    encoder83_enable 
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
module encoder83_enable(
	input e,
	input [7:0] w,
	output [2:0] y
    );
	wire [3:0] c;
	wire e1,e2;
assign y[2] = w[7]|w[6]|w[5]|w[4];
assign e1 = e | y[2];
assign e2 = e | ~y[2];
encoder42_enable E1 (e1,w[3:0],c[1:0]);
encoder42_enable E2 (e2,w[7:4],c[3:2]);
assign y[1] = c[1]|c[3];
assign y[0] = c[0]|c[2];

endmodule
