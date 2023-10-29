`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:30:45 11/19/2021 
// Design Name: 
// Module Name:    Enable 
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
module Enable (clk, reset, q);
    parameter N= 5, M = 30; 
	// M  = chu ky dem ( 0 2 4 5 7 9 => 6 chu ky) X chu ky ( 3 dem + 2 dung = 5)
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
assign q=(r_reg<3*M/5 - 1)?1:0; //3 chu ky dem / 2 chu ky dung 
endmodule