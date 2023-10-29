`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:27:59 11/18/2021 
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
	output [7:0] q
    );
// signal declaration
	reg [N-1:0] r_reg50kH, r_reg100kH, r_reg200kH, r_reg400kH, r_reg500kH, r_reg1MH, r_reg2M5H, r_reg5MH;
	wire [N-1:0] r_next50kH, r_next100kH, r_next200kH, r_next400kH, r_next500kH, r_next1MH, r_next2M5H, r_next5MH;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
	begin
		r_reg50kH <= 0;
		r_reg100kH <= 0; 
		r_reg200kH <= 0;
		r_reg400kH <= 0;
		r_reg500kH <= 0;
		r_reg1MH <= 0;
		r_reg2M5H <= 0;
		r_reg5MH <= 0;
	end
	else
	begin
		r_reg50kH <= r_next50kH;
		r_reg100kH <= r_next100kH; 
		r_reg200kH <= r_next200kH;
		r_reg400kH <= r_next400kH;
		r_reg500kH <= r_next500kH;
		r_reg1MH <= r_next1MH;
		r_reg2M5H <= r_next2M5H;
		r_reg5MH <= r_next5MH;
	end
// next state logic
assign r_next50kH = (r_reg50kH == M-1) ? 0 : r_reg50kH+1;
assign r_next100kH = (r_reg100kH == M/2-1) ? 0 : r_reg100kH+1;
assign r_next200kH = (r_reg200kH == M/4-1) ? 0 : r_reg200kH+1;
assign r_next400kH = (r_reg400kH == M/8-1) ? 0 : r_reg400kH+1;
assign r_next500kH = (r_reg500kH == M/10-1) ? 0 : r_reg500kH+1;
assign r_next1MH = (r_reg1MH == M/20-1) ? 0 : r_reg1MH+1;
assign r_next2M5H = (r_reg2M5H == M/50-1) ? 0 : r_reg2M5H+1;
assign r_next5MH = (r_reg5MH == M/100-1) ? 0 : r_reg5MH+1;
// output logic
assign q[0] = (r_reg5MH < M/200) ? 0 : 1;
assign q[1] = (r_reg2M5H < M/100) ? 0 : 1;
assign q[2] = (r_reg1MH < M/40) ? 0 : 1;
assign q[3] = (r_reg500kH < M/20) ? 0 : 1;
assign q[4] = (r_reg400kH < M/16) ? 0 : 1;
assign q[5] = (r_reg200kH < M/8) ? 0 : 1;
assign q[6] = (r_reg100kH < M/4) ? 0 : 1;
assign q[7] = (r_reg50kH < M/2) ? 0 : 1;
endmodule
