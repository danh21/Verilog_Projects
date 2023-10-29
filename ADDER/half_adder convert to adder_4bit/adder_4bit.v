`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:17:09 08/11/2021 
// Design Name: 
// Module Name:    adder_4bit 
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
module adder_4bit		//SLIDE Digital Design_with Verilog HDL_pub trang 66
	(		
	input [3:0] A,B,
	input C0,
	output [3:0] S,
	output C4
   );
	wire C1,C2,C3;
	
	full_adder fa0 (A[0],B[0],C0,S[0],C1);
	full_adder fa1 (A[1],B[1],C1,S[1],C2);
	full_adder fa2 (A[2],B[2],C2,S[2],C3);
	full_adder fa3 (A[3],B[3],C3,S[3],C4);
	
endmodule
