`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:02:36 06/27/2021
// Design Name:   adder_4bit
// Module Name:   D:/cd/thiet ke he thong va vi mach/fulladder_convert_to_adder4bit/adder_4bit_tb.v
// Project Name:  fulladder_convert_to_adder4bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_4bit_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire [3:0] S;
	wire C4;

	// Instantiate the Unit Under Test (UUT)
	adder_4bit uut (
		.A(A), 
		.B(B), 
		.C0(C0), 
		.S(S), 
		.C4(C4)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0011;
		B = 4'b0011;
		C0 = 0;
		#100;
      
		A = 4'b1011;
		B = 4'b0111;
		C0 = 1;
		#100;

		A = 4'b1111;
		B = 4'b1111;
		C0 = 1;
		#100;

		$stop;	
	end
      
endmodule

