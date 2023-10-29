`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:27:33 08/21/2021
// Design Name:   counter_enable
// Module Name:   D:/cd/thiet ke he thong va vi mach/BAI TAP/counter_enable/counter_enable_tb.v
// Project Name:  counter_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter_enable
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_enable_tb;
	parameter N = 4;			// dem len N bit
				
	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [N-1:0] counter;
	wire ce;

	// Instantiate the Unit Under Test (UUT)
	counter_enable uut (
		.clk(clk), 
		.reset(reset), 
		.counter(counter), 
		.ce(ce)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		forever #5 clk = ~clk;
	end
	
	initial begin
		reset = 1;
		#10;
		reset = 0;
	end
      
endmodule

