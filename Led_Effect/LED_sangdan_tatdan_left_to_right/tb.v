`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:36:20 11/22/2021
// Design Name:   Shift_Register
// Module Name:   D:/cd/TT FPGA/project/tuan 5/LED_sangdan_tatdan_left_to_right/tb.v
// Project Name:  LED_sangdan_tatdan_left_to_right
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

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	Shift_Register uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;	
		reset = 0;
		#4500;
		$stop;

	end
   always begin
		#10;
		clk = ~clk;
	end
endmodule

