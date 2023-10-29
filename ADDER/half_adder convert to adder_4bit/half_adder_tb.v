`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:36:04 06/26/2021
// Design Name:   half_adder
// Module Name:   D:/cd/thiet ke he thong va vi mach/halfadder_convert_to_fulladder/half_adder_tb.v
// Project Name:  halfadder_convert_to_fulladder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module half_adder_tb;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	half_adder uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		#100;
		
		A = 0;
		B = 1;
		#100;
		
		A = 1;
		B = 0;
		#100;
		
		A = 1;
		B = 1;
		#100;
		
		$stop; 
	end
      
endmodule

