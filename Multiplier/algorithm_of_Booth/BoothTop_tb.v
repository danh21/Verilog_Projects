`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:01:17 07/09/2021
// Design Name:   BoothTop
// Module Name:   D:/cd/thiet ke he thong va vi mach/algorithm_of_Booth/BoothTop_tb.v
// Project Name:  algorithm_of_Booth
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BoothTop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BoothTop_tb;

	// Inputs
	reg [3:0] M;
	reg [4:0] Q;

	// Outputs
	wire [7:0] Z;

	// Instantiate the Unit Under Test (UUT)
	BoothTop uut (
		.M(M), 
		.Q(Q), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		M = 4'b0000;
		Q = 5'b00000;
		#100;
		
		M = 4'b0100;
		Q = 5'b00011;
		#100;
		
		M = 4'b0111;
		Q = 5'b00011;
		#100;
		
		$stop;
	end
      
endmodule

