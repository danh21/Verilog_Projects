`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:17:03 06/26/2021
// Design Name:   adder8bit
// Module Name:   D:/cd/thiet ke he thong va vi mach/adder4bit_convert_to_adder8bit - Copy/adder8bit_tb.v
// Project Name:  adder4bit_convert_to_adder8bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder8bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder8bit_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg c_in;

	// Outputs
	wire [7:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	adder8bit uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		a = 8'b01100011;
		b = 8'b00011010;
		c_in = 0;
		#100;
		
		a = 8'b01101001;
		b = 8'b10110000;
		c_in = 0;
		#100;
		
		a = 8'b00001011;
		b = 8'b01111011;
		c_in = 1;
		#100;
		
		a = 8'b00000000;
		b = 8'b11111111;
		c_in = 1;
		#100;
		
		$stop; 
	end
   
endmodule

