`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:27:51 04/28/2021
// Design Name:   FFD
// Module Name:   D:/cd/thiet ke he thong va vi mach/FFlopD/ffd_tb.v
// Project Name:  FFlopD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FFD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ffd_tb;

	// Inputs
	reg d;
	reg clk;
	reg pre;
	reg clr;
	reg ce;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	FFD uut (
		.d(d), 
		.clk(clk), 
		.pre(pre), 
		.clr(clr), 
		.ce(ce), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 1;
		pre = 0;
		clr = 0;
		ce = 0;
		#20;
		
		d = 0;
		pre = 0;
		clr = 0;
		ce = 1;
		#20;
		
		d = 1;
		pre = 0;
		clr = 1;
		ce = 0;
		#20;
		
		d = 1;
		pre = 0;
		clr = 1;
		ce = 1;
		#20;
      
		d = 1;
		pre = 1;
		clr = 0;
		ce = 0;
		#20;
		
		d = 0;
		pre = 1;
		clr = 0;
		ce = 1;
		#20;
		
		d = 1;
		pre = 1;
		clr = 1;
		ce = 0;
		#20;
		
		d = 0;
		pre = 1;
		clr = 1;
		ce = 1;
		#20;
		
		$stop;
	end
	always #10 clk = ~clk;
      
endmodule

