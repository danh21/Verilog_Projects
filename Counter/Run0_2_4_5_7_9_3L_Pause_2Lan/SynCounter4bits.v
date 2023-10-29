`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:31:18 11/19/2021 
// Design Name: 
// Module Name:    SynCounter4bits 
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
module SynCounter4bits(clk, reset, oe, q);
   input wire clk, reset, oe;
   output wire [3:0] q;
	
// signal declaration
	reg [3:0] r_reg;
	wire [3:0] r_next;
// body, register
	always @(posedge clk, posedge reset)
	if (reset)
		r_reg <= 0;
	else 
	r_reg<=r_next; // <= is non-blocking statement
// next state logic 
// hien thi 0 2 4 5 7 9
// Dat 9 lam moc xac dinh, neu = 9 quay ve 0 bat dau den chan
assign r_next = (r_reg == 9) ? 0 : 
(
	(oe==1) ? 
	((r_reg == 4) ? 5 :  ( (r_reg%2==0) ? r_reg+2 : r_reg+1)) :
	// khi dem chan den 4 quay ve 5 va dem le
	((r_reg == 9) ? 0 :  ( (r_reg%2==0) ? r_reg+1 : r_reg+2)) 
);
// dem le roi quay tro ve dem chan 
// output logic 
assign q=r_reg;
endmodule