`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:35:15 07/08/2021
// Design Name:   dadda4
// Module Name:   D:/cd/thiet ke he thong va vi mach/A_4bit_by_4bit_unsigned_dadda_tree/dadda4_tb.v
// Project Name:  A_4bit_by_4bit_unsigned_dadda_tree
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dadda4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dadda4_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire [6:0] Z;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	dadda4 uut (
		.Z(Z), 
		.Cout(Cout), 
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0000;
		B = 4'b0000;
		#100;
		
		A = 4'b1001;
		B = 4'b1000;
		#100;
		
		A = 4'b1010;
		B = 4'b1011;
		#100;
		
		A = 4'b1100;
		B = 4'b1101;
		#100;
		
		A = 4'b1101;
		B = 4'b1110;
		#100;
		
		A = 4'b1110;
		B = 4'b1111;
		#100;
		
		$stop;
	end
      
endmodule

