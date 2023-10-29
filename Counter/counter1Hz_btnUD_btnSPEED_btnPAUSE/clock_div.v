`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:04:43 12/09/2021 
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
	#(parameter N = 26, M = 50000000) 
	( input clk, reset,
	output [3:0] q
    );
// signal declaration
	reg [N-1:0] r_reg1H, r_reg10H, r_reg100H, r_reg1000H;
	wire [N-1:0] r_next1H, r_next10H, r_next100H, r_next1000H;
// body, register
always @(posedge clk, posedge reset) 
	begin
		if (reset)
			begin
				r_reg1H <= 0;
				r_reg10H <= 0;
				r_reg100H <= 0;
				r_reg1000H <= 0;
			end
		else
			begin
				r_reg1H <= r_next1H;
				r_reg10H <= r_next10H;
				r_reg100H <= r_next100H;
				r_reg1000H <= r_next1000H;
			end
	end
// next state logic
assign r_next1H = (r_reg1H == M-1)? 0 : r_reg1H + 1;
assign r_next10H = (r_reg10H == M/10-1)? 0 : r_reg10H + 1;
assign r_next100H = (r_reg100H == M/100-1)? 0 : r_reg100H +1;
assign r_next1000H = (r_reg1000H == M/1000-1)? 0 : r_reg1000H +1;
// output logic
assign q[0] = (r_reg1H < M/2)?0:1;
assign q[1] = (r_reg10H < M/20)?0:1;
assign q[2] = (r_reg100H < M/200)?0:1;
assign q[3] = (r_reg1000H < M/2000)?0:1;
endmodule

