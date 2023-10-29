`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:40:50 12/10/2021 
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
   #(parameter M1=500000, N1=19, M2=200000, N2=18) // 4Hz va 10Hz, xung noi 2Mhz
	(input clk,reset,
	output [1:0] q
    );
	reg [N1-1:0] r_reg4H;
	reg [N2-1:0] r_reg10H;
	wire [N1-1:0] r_next4H;
	wire [N2-1:0] r_next10H;
	
always @ (negedge clk, negedge reset)
	if (~reset)
	begin
		r_reg4H <= 0;
		r_reg10H <= 0;
	end
	else
	begin
		r_reg4H <= r_next4H;
		r_reg10H <= r_next10H;
	end
assign r_next4H = (r_reg4H == M1-1) ? 0 : r_reg4H+1 ;	
assign r_next10H = (r_reg10H == M2-1) ? 0 : r_reg10H+1 ;	
assign q[1] = (r_reg4H < M1/2) ? 0 : 1;
assign q[0] = (r_reg10H < M2/2) ? 0 : 1;
endmodule
