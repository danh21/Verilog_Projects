`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:28:45 11/18/2021 
// Design Name: 
// Module Name:    enable 
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
module enable	// cho phep chay bao nhieu ck dung bao nhieu chu ki
	#(parameter N= 6, M = 45) // dem tu 0-8 -> 9 * 5 (so ck 0->8)
	( input clk, reset,
	output en
    );
// signal declaration
	reg [N-1:0] r_reg;
	wire [N-1:0] r_next;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
		r_reg <= 0;
	else
		r_reg <= r_next;
// next state logic
assign r_next = (r_reg == M-1)? 0 : r_reg + 1;
// output logic
assign en = (r_reg < 2*M/5-1)? 1 : 0;	// 2 ck chay, 3 ck dung


endmodule
