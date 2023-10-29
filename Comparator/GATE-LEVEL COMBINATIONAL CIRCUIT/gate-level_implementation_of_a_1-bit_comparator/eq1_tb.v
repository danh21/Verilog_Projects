`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:45:41 07/17/2021
// Design Name:   eq1
// Module Name:   D:/cd/thiet ke he thong va vi mach/Pong chu/GATE-LEVEL COMBINATIONAL CIRCUIT/gate-level_implementation_of_a_1-bit_comparator/eq1_tb.v
// Project Name:  gate-level_implementation_of_a_1-bit_comparator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: eq1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module eq1_tb;

	// Inputs
	reg i0;
	reg i1;

	// Outputs
	wire eq;

	// Instantiate the Unit Under Test (UUT)
	eq1 uut (
		.i0(i0), 
		.i1(i1), 
		.eq(eq)
	);

	initial begin
		// Initialize Inputs
		i0 = 0;
		i1 = 0;
		#100;
		
		i0 = 0;
		i1 = 1;
		#100;
		
		i0 = 1;
		i1 = 0;
		#100;
		
		i0 = 1;
		i1 = 1;
		#100;
		
		$stop;
	end
      
endmodule

