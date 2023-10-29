`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:59:42 11/04/2021
// Design Name:   ic_74151
// Module Name:   D:/cd/ref/ch2/mux/ic_74151/tb.v
// Project Name:  ic_74151
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ic_74151
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
	reg g;
	reg a;
	reg b;
	reg c;
	reg [7:0] d;

	// Outputs
	wire y;
	wire w;

	// Instantiate the Unit Under Test (UUT)
	ic_74151 uut (
		.g(g), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.y(y), 
		.w(w)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		g = 1;
		a = 0;
		b = 0;
		c = 0;
		#500;
		
		g = 0;
		a = 0;
		b = 0;
		c = 0;
		#500;
		
		a = 1;
		b = 0;
		c = 0;
		#500;
		
		a = 0;
		b = 1;
		c = 0;
		#500;
		
		a = 1;
		b = 1;
		c = 0;
		#500;
		
		a = 0;
		b = 0;
		c = 1;
		#500;
		
		a = 1;
		b = 0;
		c = 1;
		#500;
		
		a = 0;
		b = 1;
		c = 1;
		#500;
		
		a = 1;
		b = 1;
		c = 1;
		#500;
		
		$stop;
	end
	
   always begin
		#10;
		d = d+1;
	end
endmodule

