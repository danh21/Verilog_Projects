`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:13 10/09/2021 
// Design Name: 
// Module Name:    decoder4to16_high 
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
module decoder4to16_high(
	input e,
	input [3:0] w,
	output [15:0] y
    );
	 wire e1,e2;
assign e1 = e&(~w[3]);
assign e2 = e&(w[3]);
decoder38_high D31 (e1, w[2:0], y[7:0]);
decoder38_high D32 (e2, w[2:0], y[15:8]);

endmodule
