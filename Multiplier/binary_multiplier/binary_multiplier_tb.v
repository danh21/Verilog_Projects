`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:28:03 07/02/2021
// Design Name:   binary_multiplier
// Module Name:   D:/cd/thiet ke he thong va vi mach/binary_multiplier/binary_multiplier_tb.v
// Project Name:  binary_multiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: binary_multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module binary_multiplier_tb;

	// Inputs
	reg [2:0] a;
	reg [3:0] b;

	// Outputs
	wire [6:0] c;

	// Instantiate the Unit Under Test (UUT)
	binary_multiplier uut (
		.a(a), 
		.b(b), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		b = 4'b1010;
		a = 3'b110;
		#100;
		
		b = 4'b1111;
		a = 3'b010;
		#100;
		
		b = 4'b0110;
		a = 3'b111;
		#100;
		
		$stop;
	end
      
endmodule

