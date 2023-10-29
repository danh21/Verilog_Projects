`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:39:11 11/01/2021
// Design Name:   comparator_4bit_ifcase
// Module Name:   D:/cd/TT FPGA/project/tuan 2/comparator_using_fs_ifcase/tb.v
// Project Name:  comparator_using_fs_ifcase
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator_4bit_ifcase
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire gt;
	wire lt;
	wire eq;

	// Instantiate the Unit Under Test (UUT)
	comparator_4bit_ifcase uut (
		.a(a), 
		.b(b), 
		.gt(gt), 
		.lt(lt), 
		.eq(eq)
	);

	initial begin
		// Initialize Inputs
		// a > b
		a = 15;
		b = 11;
		#100;
		// a < b
		a = 5;
		b = 10;
		#100;
		// a = b
		a = 6;
		b = 6;
		#100;
		$stop;
	end
      
endmodule

