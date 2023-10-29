`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:16:55 11/21/2021
// Design Name:   shift_register_4b_SIPO
// Module Name:   D:/cd/TT FPGA/project/tuan 5/shift_register_4b_SIPO_using_Dff/tb.v
// Project Name:  shift_register_4b_SIPO_usin_Dff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shift_register_4b_SIPO
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
	wire [3:0] p_out;

	// Instantiate the Unit Under Test (UUT)
	shift_register_4b_SIPO uut (
		.clk(clk), 
		.reset(reset), 
		.s_in(s_in), 
		.p_out(p_out)
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

