`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:49:27 06/26/2021
// Design Name:   full_adder
// Module Name:   D:/cd/thiet ke he thong va vi mach/halfadder_convert_to_fulladder/full_adder_tb.v
// Project Name:  halfadder_convert_to_fulladder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.S(S), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 0;
		#100;
		
		A = 1;
		B = 0;
		Cin = 0;
		#100;
		
		A = 0;
		B = 1;
		Cin = 0;
		#100;
		
		A = 1;
		B = 1;
		Cin = 0;
		#100;
		
		A = 0;
		B = 0;
		Cin = 1;
		#100;
		
		A = 1;
		B = 0;
		Cin = 1;
		#100;
		
		A = 0;
		B = 1;
		Cin = 1;
		#100;
		
		A = 1;
		B = 1;
		Cin = 1;
		#100;
		
		$stop;
	end
      
endmodule

