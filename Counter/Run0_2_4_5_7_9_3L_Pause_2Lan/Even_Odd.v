`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:30:13 11/19/2021 
// Design Name: 
// Module Name:    Even_Odd 
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
module Even_Odd(clk, reset, q);
   parameter N= 3, M = 6; 
	// M  = chu ky dem (1) x chu ky oe ( 6 lan lap lai)
	// N = log2(M) + 1
	input wire clk, reset;
	output wire q;
	 
// signal declaration
reg [N-1:0] r_reg;
wire [N-1:0] r_next;
// body, register
always @(posedge clk, posedge reset)
if (reset)
r_reg <= 0;
else 
r_reg<=r_next;
// next state logic
assign r_next = (r_reg==M-1)?0:r_reg + 1; 
// output logic 
assign q=(r_reg<M/2)?1:0; // 3 chan 3 le
endmodule