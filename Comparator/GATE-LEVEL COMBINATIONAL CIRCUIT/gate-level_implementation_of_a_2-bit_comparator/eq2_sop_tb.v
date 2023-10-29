`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:54:57 07/18/2021
// Design Name:   eq2_sop
// Module Name:   D:/cd/thiet ke he thong va vi mach/Pong chu/GATE-LEVEL COMBINATIONAL CIRCUIT/gate-level_implementation_of_a_2-bit_comparator/eq2_sop_tb.v
// Project Name:  gate-level_implementation_of_a_2-bit_comparator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: eq2_sop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module eq2_sop_tb;

	// Inputs
	reg [1:0] a;
	reg [1:0] b;

	// Outputs
	wire aeqb;

	// Instantiate the Unit Under Test (UUT)
	eq2_sop uut (
		.a(a), 
		.b(b), 
		.aeqb(aeqb)
	);

	initial begin
		// Initialize Inputs
		a = 2'b00;
		b = 2'b00;
		#100;

		a = 2'b00;
		b = 2'b00;
		#100;
		
		a = 2'b00;
		b = 2'b10;
		#100;
		
		a = 2'b00;
		b = 2'b11;
		#100;
		
		a = 2'b01;
		b = 2'b01;
		#100;
		
		a = 2'b01;
		b = 2'b10;
		#100;
		
		a = 2'b01;
		b = 2'b11;
		#100;
		
		a = 2'b10;
		b = 2'b10;
		#100;
		
		a = 2'b10;
		b = 2'b11;
		#100;
		
		a = 2'b11;
		b = 2'b11;
		#100;
		
		$stop;
	end
      
endmodule

