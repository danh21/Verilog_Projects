`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:00:08 07/09/2021
// Design Name:   two_complement_multiplication
// Module Name:   D:/cd/thiet ke he thong va vi mach/two_complement_multiplication/two_complement_multiplication_tb.v
// Project Name:  two_complement_multiplication
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: two_complement_multiplication
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module two_complement_multiplication_tb;

	// Inputs
	reg [3:0] x;
	reg [3:0] y;

	// Outputs
	wire [7:0] z;

	// Instantiate the Unit Under Test (UUT)
	two_complement_multiplication uut (
		.x(x), 
		.y(y), 
		.z(z)
	);

	initial begin
		// Initialize Inputs
		x = 2;
		y = 4;
		#100;
		
		x = 3;
		y = -4;
		#100;
		
		x = -5;
		y = 4;
		#100;
		
		x = -1;
		y = -7;
		#100;
		
		x = 3;
		y = -5;
		#100;
		
		x = -6;
		y = -8;
		#100;
		
		x = -7;
		y = 7;
		#100;
		
		x = 4;
		y = -7;
		#100;
		
		x = -5;
		y = 6;
		#100;
		
		x = -2;
		y = 7;
		#100;
		
		$stop;
	end
      
endmodule

