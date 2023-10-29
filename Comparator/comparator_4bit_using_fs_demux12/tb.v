`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:46 11/01/2021
// Design Name:   comparator_4bit_demux12
// Module Name:   D:/cd/TT FPGA/project/tuan 2/comparator_4bit_using_fs_demux12/tb.v
// Project Name:  comparator_4bit_using_fs_demux12
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator_4bit_demux12
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
	comparator_4bit_demux12 uut (
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

