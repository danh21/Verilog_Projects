`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:17:32 07/18/2021
// Design Name:   eq1_primitive
// Module Name:   D:/cd/thiet ke he thong va vi mach/Pong chu/GATE-LEVEL COMBINATIONAL CIRCUIT/implementation_with_Verilog_primitive/eq1_primitive_tb.v
// Project Name:  implementation_with_Verilog_primitive
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: eq1_primitive
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module eq1_primitive_tb;

	// Inputs
	reg i0;
	reg i1;

	// Outputs
	wire eq;

	// Instantiate the Unit Under Test (UUT)
	eq1_primitive uut (
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

