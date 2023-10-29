`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:49:30 07/20/2021
// Design Name:   and_block_assign
// Module Name:   D:/cd/thiet ke he thong va vi mach/RT-LEVEL COMBINATIONAL CIRCUIT/three_input_and_circuit/and_block_assign_tb.v
// Project Name:  three_input_and_circuit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: and_block_assign
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module and_block_assign_tb;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	and_block_assign uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		#100;
		
		a = 0;
		b = 0;
		c = 1;
		#100;
		
		a = 0;
		b = 1;
		c = 0;
		#100;
		
		a = 0;
		b = 1;
		c = 1;
		#100;
		
		a = 1;
		b = 0;
		c = 0;
		#100;
		
		a = 1;
		b = 0;
		c = 1;
		#100;
		
		a = 1;
		b = 1;
		c = 0;
		#100;
		
		a = 1;
		b = 1;
		c = 1;
		#100;
		
		$stop;
	end
      
endmodule

