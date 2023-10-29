`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:52:50 07/04/2021
// Design Name:   array4
// Module Name:   D:/cd/thiet ke he thong va vi mach/CSAM_4bit_by_4bit_unsigned/array4_tb.v
// Project Name:  CSAM_4bit_by_4bit_unsigned
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: array4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module array4_tb;

	// Inputs
	reg [3:0] X;
	reg [3:0] Y;

	// Outputs
	wire [7:0] Z;

	// Instantiate the Unit Under Test (UUT)
	array4 uut (
		.X(X), 
		.Y(Y), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		X = 4'b1011;
		Y = 4'b1001;
		#100;
		
		X = 4'b1010;
		Y = 4'b1001;
		#100;
		
		X = 4'b1011;
		Y = 4'b1100;
		#100;
		
		X = 4'b1100;
		Y = 4'b1101;
		#100;
		
		X = 4'b1101;
		Y = 4'b1110;
		#100;
		
		$stop;
	end
      
endmodule

