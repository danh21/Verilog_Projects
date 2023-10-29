`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:59:56 08/21/2021
// Design Name:   down_counter
// Module Name:   D:/cd/thiet ke he thong va vi mach/BAI TAP/down_counter/down_counter_tb.v
// Project Name:  down_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: down_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module down_counter_tb;
	parameter N=5;
	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [N-1:0] counter;

	// Instantiate the Unit Under Test (UUT)
	down_counter uut (
		.clk(clk), 
		.reset(reset), 
		.counter(counter)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		forever #5 clk = ~clk;
	end
	
   initial begin
      reset = 1; 
      #20;
      reset = 0;
   end	
      
endmodule

