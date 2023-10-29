`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:49:35 12/02/2021
// Design Name:   simple
// Module Name:   D:/cd/TT FPGA/project/tuan 7/FSM1/tb.v
// Project Name:  FSM1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: simple
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
	reg clock;
	reg resetn;
	reg w;

	// Outputs
	wire z;

	// Instantiate the Unit Under Test (UUT)
	simple uut (
		.clock(clock), 
		.resetn(resetn), 
		.w(w), 
		.z(z)
	);

	initial begin
		// Initialize Inputs		
		clock = 0;
		resetn = 0;
		w = 0;
		#10;
		resetn = 1;
		
		#10;			
		w = 1;
		#20;	
		
		w = 0;
		#20;				
		w = 1;			
		#40;			
		w = 0;
		#20;
		$stop;

	end
	
	always begin
		#10 clock = ~clock;
	end
endmodule

