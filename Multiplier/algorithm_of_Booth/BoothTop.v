`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:52:17 07/09/2021 
// Design Name: 
// Module Name:    BoothTop 
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
module BoothTop(				////PP multiplication_s slide 27
	input [3:0] M,
	input [4:0] Q,
	output [7:0] Z
   );
	wire [3:0] A_out1, A_out2, A_out3, A_out4;
	wire [4:0] Q_out1, Q_out2, Q_out3, Q_out4;
	
	Booth B1 (4'b0000, M, {Q,1'b0}, A_out1, Q_out1);
	Booth B2 (A_out1, M, Q_out1, A_out2, Q_out2);
	Booth B3 (A_out2, M, Q_out2, A_out3, Q_out3);
	Booth B4 (A_out3, M, Q_out3, A_out4, Q_out4);

	assign Z = {A_out4, Q_out4[4:1]};	
endmodule
