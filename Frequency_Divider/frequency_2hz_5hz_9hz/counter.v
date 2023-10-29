`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:33 11/11/2021 
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
module counter	//tan so ngo vao 25MHz, thay doi o tb
	#(parameter M=12500000, N=24, M1=5000000, N1=23, M2=2777778, N2=22) 
	(input clk,reset,
	output [2:0] q
    );
	reg [N-1:0] r_reg2H;
	reg [N1-1:0] r_reg5H;
	reg [N2-1:0] r_reg9H;
	wire [N-1:0] r_next2H;
	wire [N1-1:0] r_next5H;
	wire [N2-1:0] r_next9H;
	
always @ (posedge clk, posedge reset)
	if (reset)
	begin
		r_reg2H <= 0;
		r_reg5H <= 0;
		r_reg9H <= 0;
	end
	else
	begin
		r_reg2H <= r_next2H;
		r_reg5H <= r_next5H;
		r_reg9H <= r_next9H;
	end
	
assign r_next2H = (r_reg2H == M-1) ? 0 : r_reg2H+1 ;	
assign r_next5H = (r_reg5H == M1-1) ? 0 : r_reg5H+1 ;	
assign r_next9H = (r_reg9H == M2-1) ? 0 : r_reg9H+1 ;	

assign q[2] = (r_reg2H < M/2) ? 0 : 1;
assign q[1] = (r_reg5H < M1/2) ? 0 : 1;
assign q[0] = (r_reg9H < M2/2) ? 0 : 1;
 
endmodule
