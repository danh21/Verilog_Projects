`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:41:17 08/10/2021
// Design Name:   d_ff_reset
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/REGULAR SEQUENTIAL CIRCUIT/D_FF_with_asynchronous_reset/d_ff_reset_tb.v
// Project Name:  D_FF_with_asynchronous_reset
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: d_ff_reset
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d_ff_reset_tb;

	// Inputs
	reg clk;
	reg reset;
	reg d;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	d_ff_reset uut (
		.clk(clk), 
		.reset(reset), 
		.d(d), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		d = 1;
		#100;
		
		reset = 0;
		d = 1;
		#100;
		
		d = 0;
		#100;
		
		d = 1;
		#100;
		
		reset = 1;
		#100;
		
		$finish;
	end
      always #10 clk = ~clk;
endmodule

