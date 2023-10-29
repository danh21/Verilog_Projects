`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:20:00 07/04/2021
// Design Name:   unsigned_mult
// Module Name:   D:/cd/thiet ke he thong va vi mach/unsigned_binary_multiplication/unsigned_mult_tb.v
// Project Name:  unsigned_binary_multiplication
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: unsigned_mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module unsigned_mult_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	unsigned_mult uut (
		.a(a), 
		.b(b), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 8'b00001101;
		b = 8'b00001110;
	end
      
endmodule

