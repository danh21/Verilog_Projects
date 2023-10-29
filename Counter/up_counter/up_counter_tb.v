`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:45:09 08/21/2021
// Design Name:   up_counter
// Module Name:   D:/cd/thiet ke he thong va vi mach/BAI TAP/up_counter/up_counter_tb.v
// Project Name:  up_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: up_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module up_counter_tb;
	parameter N=4;		// dem len N bit
	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [N-1:0] counter;

	// Instantiate the Unit Under Test (UUT)
	up_counter uut (
		.clk(clk), 
		.reset(reset), 
		.counter(counter)
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

