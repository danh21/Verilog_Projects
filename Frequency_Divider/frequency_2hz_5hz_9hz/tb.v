`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:41:03 11/11/2021
// Design Name:   counter
// Module Name:   D:/cd/ref/ch3/frequency_2hz_5hz_9hz/tb.v
// Project Name:  frequency_2hz_5hz_9hz
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
	wire [2:0] q;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#100;
		reset = 0;

	end
	// tan so ngo vao 25MHz
   always begin
		#20 clk = ~clk;
	end
endmodule

