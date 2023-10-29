`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:35:00 11/04/2021
// Design Name:   syn_counter_4bit
// Module Name:   D:/cd/ref/ch3/counter_4bit/tb.v
// Project Name:  counter_4bit
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
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		#10;       
		reset = 1;
		#10;		
		reset = 0;
		#10;
		for (i=0;i<32;i=i+1)
			#10 clk = ~clk;
		//$stop;
	end

endmodule
