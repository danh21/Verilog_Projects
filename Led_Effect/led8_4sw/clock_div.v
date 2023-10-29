`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:20 11/24/2021 
// Design Name: 
// Module Name:    clock_div 
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
module clock_div
	#(parameter M=1000, N=10)	//50000Hz
	(input clk, reset,
	output [3:0] q
    );
// signal declaration
	reg [N-1:0] r_reg50kH, r_reg100kH, r_reg200kH, r_reg400kH;
	wire [N-1:0] r_next50kH, r_next100kH, r_next200kH, r_next400kH;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
	begin
		r_reg50kH <= 0;
		r_reg100kH <= 0; 
		r_reg200kH <= 0;
		r_reg400kH <= 0;
	end
	else
	begin
		r_reg50kH <= r_next50kH;
		r_reg100kH <= r_next100kH; 
		r_reg200kH <= r_next200kH;
		r_reg400kH <= r_next400kH;
	end
// next state logic
assign r_next50kH = (r_reg50kH == M-1) ? 0 : r_reg50kH+1;
assign r_next100kH = (r_reg100kH == M/2-1) ? 0 : r_reg100kH+1;
assign r_next200kH = (r_reg200kH == M/4-1) ? 0 : r_reg200kH+1;
assign r_next400kH = (r_reg400kH == M/8-1) ? 0 : r_reg400kH+1;
// output logic
assign q[0] = (r_reg400kH < M/16) ? 0 : 1;
assign q[1] = (r_reg200kH < M/8) ? 0 : 1;
assign q[2] = (r_reg100kH < M/4) ? 0 : 1;
assign q[3] = (r_reg50kH < M/2) ? 0 : 1;
endmodule
