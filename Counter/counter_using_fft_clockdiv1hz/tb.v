`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:56:27 11/16/2021
// Design Name:   counter4bit
// Module Name:   D:/cd/ref/ch3/counter_using_fft_clockdiv1hz/tb.v
// Project Name:  counter_using_fft_clockdiv1hz
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter4bit
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
	counter4bit uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		#10;
       
		reset = 0;
		
	end
	
	always begin
		#10;
		clk = ~clk;
	end
      
endmodule

