`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:41 11/04/2021 
// Design Name: 
// Module Name:    counter 
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
module counter
	#(parameter N = 29, M = 500000000) 
	( input clk, reset,
	output [3:0] q
    );
// signal declaration
	reg [N-1:0] r_reg01H, r_reg1H, r_reg10H, r_reg100H;
	wire [N-1:0] r_next01H, r_next1H, r_next10H, r_next100H;
// body, register
always @(posedge clk, posedge reset) 
	begin
		if (reset)
			begin
				r_reg01H <= 0;
				r_reg1H <= 0;
				r_reg10H <= 0;
				r_reg100H <= 0;
			end
		else
			begin
				r_reg01H <= r_next01H;
				r_reg1H <= r_next1H;
				r_reg10H <= r_next10H;
				r_reg100H <= r_next100H;
			end
	end
// next state logic
assign r_next01H = (r_reg01H == M-1)?0: r_reg01H + 1;
assign r_next1H = (r_reg1H == M/10-1)?0: r_reg1H + 1;
assign r_next10H = (r_reg10H == M/100-1)?0: r_reg10H + 1;
assign r_next100H = (r_reg100H == M/1000-1)?0: r_reg100H +1;
// output logic
assign q[0] = (r_reg01H < M/2)?0:1;
assign q[1] = (r_reg1H < M/20)?0:1;
assign q[2] = (r_reg10H < M/200)?0:1;
assign q[3] = (r_reg100H < M/2000)?0:1;
endmodule
