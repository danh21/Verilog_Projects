`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:26:03 11/04/2021
// Design Name:   counter
// Module Name:   D:/cd/ref/ch3/frequency_1hz/tb.v
// Project Name:  frequency_1hz
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
	wire q;
	wire [9:0] r_reg;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.reset(reset), 
		.q(q),
		.r_reg(r_reg)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
        
		reset = 0;						
	end
	
	always begin
		#10;
		clk = ~clk;
	end
      
endmodule

