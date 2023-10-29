`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:43:48 06/26/2021
// Design Name:   adder4bit
// Module Name:   D:/cd/thiet ke he thong va vi mach/adder4bit_convert_to_adder8bit/adder4bit_tb.v
// Project Name:  adder4bit_convert_to_adder8bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder4bit_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg c_in;

	// Outputs
	wire [3:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	adder4bit uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		a = 4'b0011;
		b = 4'b1010;
		c_in = 0;
		#100;
		
		a = 4'b0100;
		b = 4'b0111;
		c_in = 0;
		#100;
		
		a = 4'b1001;
		b = 4'b1100;
		c_in = 1;
		#100;
		
		a = 4'b1101;
		b = 4'b0000;
		c_in = 1;
		#100;  

		$stop;
	end     
endmodule

