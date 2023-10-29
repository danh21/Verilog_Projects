`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:54:44 11/03/2021
// Design Name:   full_subtractor_8bit
// Module Name:   D:/cd/TT FPGA/project/tuan 1/full_subtractor_8bit/tb.v
// Project Name:  full_subtractor_8bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_subtractor_8bit
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
	reg [7:0] a;
	reg [7:0] b;

	// Outputs
	wire [7:0] d;
	wire bout;

	// Instantiate the Unit Under Test (UUT)
	full_subtractor_8bit uut (
		.a(a), 
		.b(b), 
		.d(d), 
		.bout(bout)
	);

	initial begin
		// Initialize Inputs
		a = 20;
		b = 15;
		#100;
		
		a = 66;
		b = 66;
		#100;
				a = 10;
		b = 51;
		#100;
		
		$stop;
        
		// Add stimulus here

	end
      
endmodule

