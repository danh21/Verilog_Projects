`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:33:39 11/11/2021
// Design Name:   syn_counter_4bit
// Module Name:   D:/cd/ref/ch3/counter4b_using_freqdiv_1hz/tb.v
// Project Name:  counter4b_using_freqdiv_1hz
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: syn_counter_4bit
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
	syn_counter_4bit uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		#100;

		reset = 0;
	end
	
	always begin
		#10;
		clk = ~clk;
	end
      
endmodule

