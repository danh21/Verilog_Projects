`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:35:03 11/18/2021
// Design Name:   counter
// Module Name:   D:/cd/TT FPGA/project/tuan 4/counter_4bit - theo chu ki/tb.v
// Project Name:  counter_4bit
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
	reg [2:0] sw;

	// Outputs
	wire en;
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.reset(reset), 
		.sw(sw), 
		.en(en), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;   
		reset = 1;
		#10;		
		reset = 0;
		#10;
		
		sw = 0;
		#35000;
		
		/*sw = 1;
		#65000;*/
			
		$stop;
	end
	always begin
		#10; clk = ~clk;
	end
      
endmodule

