`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:50:33 11/21/2021
// Design Name:   Shift_Register
// Module Name:   D:/cd/TT FPGA/project/tuan 5/shift_register_4b_SISO_using_syn_design/tb.v
// Project Name:  shift_register_4b_SISO_using_syn_design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Shift_Register
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
	reg s_in;

	// Outputs
	wire s_out;

	// Instantiate the Unit Under Test (UUT)
	Shift_Register uut (
		.clk(clk), 
		.reset(reset), 
		.s_in(s_in), 
		.s_out(s_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		
		s_in = 1;
		#200;
		s_in = 0;
		#200;
		s_in = 1;
		#200;
		s_in = 0;
		#200;
		#1400;
		$stop;
		
	end
	
   always begin
		#10;
		clk = ~clk;
	end
      
endmodule

