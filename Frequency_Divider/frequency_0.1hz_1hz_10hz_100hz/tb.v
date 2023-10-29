`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:39:40 11/04/2021
// Design Name:   counter
// Module Name:   D:/cd/ref/ch3/frequency_0.1hz_1hz_10hz_100hz/tb.v
// Project Name:  frequency_0.1hz_1hz_10hz_100hz
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
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
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk),
		.reset(reset),
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		#40;

		reset = 0;
	end
	
	always begin
		#10;
		clk = ~clk;
	end
      
endmodule

