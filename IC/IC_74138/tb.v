`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:42:15 11/04/2021
// Design Name:   ic_74138
// Module Name:   D:/cd/TT FPGA/project/tuan 2/giai ma/IC_74138/tb.v
// Project Name:  IC_74138
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ic_74138
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
	reg g1;
	reg g2a;
	reg g2b;
	reg a;
	reg b;
	reg c;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	ic_74138 uut (
		.g1(g1), 
		.g2a(g2a), 
		.g2b(g2b), 
		.a(a), 
		.b(b), 
		.c(c), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		g1 = 1'bx;
		g2a = 1;
		g2b = 1;
		a = 1'bx;
		b = 1'bx;
		c = 1'bx;
		#50;
        
		g1 = 0;
		g2a = 1'bx;
		g2b = 1'bx;
		a = 1'bx;
		b = 1'bx;
		c = 1'bx;
		#50;
		
		g1 = 1;
		g2a = 0;
		g2b = 0;
		a = 0;
		b = 0;
		c = 0;
		#50;
		
		a = 1;
		b = 0;
		c = 0;
		#50;
		
		a = 0;
		b = 1;
		c = 0;
		#50;
		
		a = 1;
		b = 1;
		c = 0;
		#50;
		
		a = 0;
		b = 0;
		c = 1;
		#50;
		
		a = 1;
		b = 0;
		c = 1;
		#50;
		
		a = 0;
		b = 1;
		c = 1;
		#50;
		
		a = 1;
		b = 1;
		c = 1;
		#50;
		
		$stop;
	end
      
endmodule

