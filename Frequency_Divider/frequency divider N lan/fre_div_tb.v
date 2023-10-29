`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:20:07 04/29/2021
// Design Name:   fre_div
// Module Name:   D:/cd/thiet ke he thong va vi mach/fre_div_100khz_10khz/fre_div_tb.v
// Project Name:  fre_div_100khz_10khz
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fre_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fre_div_tb;

	// Inputs
	reg clk_NAkHz;
	reg reset;

	// Outputs
	wire clk_AkHz;

	// Instantiate the Unit Under Test (UUT)
	fre_div uut (
		.clk_NAkHz(clk_NAkHz), 
		.reset(reset), 
		.clk_AkHz(clk_AkHz)
	);

	initial begin
		clk_NAkHz = 1'b1;
		reset = 1'b1;
	end 

	// clock generator
	always begin
		#5 clk_NAkHz = !clk_NAkHz;
	end

	// reset the circuit before it running
	initial begin
		#15 reset = 1'b1;
		#30 reset = 1'b0;
	end
	 
endmodule

