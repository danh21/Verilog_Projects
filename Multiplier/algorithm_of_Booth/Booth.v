`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:11 07/09/2021 
// Design Name: 
// Module Name:    Booth 
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
module Booth(A,M,Q,A_out,Q_out);				//PP multiplication_s slide 26
	input [3:0] A,M;
	input [4:0] Q;
	output [3:0] A_out;
	output [4:0] Q_out;
	reg [3:0] A_temp,A_sum, A_sub; 
	reg [4:0] Q_temp;
always @*
begin
	assign A_sum = A+M;
	assign A_sub = A-M;
	case (Q[1:0])
		2'b01:
			begin
				A_temp = {A_sum[3], A_sum[3:1]};
				Q_temp = {A_sum[0], Q[4:1]};
			end
		2'b10:
			begin
				A_temp = {A_sub[3], A_sub[3:1]};
				Q_temp = {A_sub[0], Q[4:1]};
			end
		default:
			begin
				A_temp = {A[3], A[3:1]};
				Q_temp = {A[0], Q[4:1]};
			end
	endcase	
end
assign A_out = A_temp;
assign Q_out = Q_temp;
endmodule
