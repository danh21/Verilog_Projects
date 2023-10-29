`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:12:52 06/30/2021
// Design Name:   mux_2_to_1
// Module Name:   D:/cd/thiet ke he thong va vi mach/mux_2_to_1/mux_2_to_1_tb.v
// Project Name:  mux_2_to_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_2_to_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_2_to_1_tb;

	// Inputs
	reg a;
	reg b;
	reg sel;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux_2_to_1 uut (
		.a(a), 
		.b(b), 
		.sel(sel), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		sel = 0;
		a = 0;
		b = 0;
		#100;
		
		sel = 0;
		a = 0;
		b = 1;
		#100;
		
		sel = 0;
		a = 1;
		b = 0;
		#100;
		
		sel = 0;
		a = 1;
		b = 1;
		#100;
		
		sel = 1;
		a = 0;
		b = 0;
		#100;
		
		sel = 1;
		a = 0;
		b = 1;
		#100;
		
		sel = 1;
		a = 1;
		b = 0;
		#100;
		
		sel = 1;
		a = 1;
		b = 1;
		#100;
		$stop;
	end
      
endmodule

