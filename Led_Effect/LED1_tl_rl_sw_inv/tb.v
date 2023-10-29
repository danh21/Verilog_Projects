`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:01:59 11/23/2021
// Design Name:   Shift_Register
// Module Name:   D:/cd/TT FPGA/project/tuan 5/LED1_tl_rl_sw_inv/tb.v
// Project Name:  LED1_tl_rl_sw_inv
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
	reg inv;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	Shift_Register uut (
		.clk(clk), 
		.reset(reset), 
		.inv(inv), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		// khong dao trang thai ngo ra
		inv = 1;
		#2780;
		// dao trang thai ngo ra
		inv = 0;
		#2900;
		$stop;
	end
	
	always begin
		#10;
		clk = ~clk;
	end
      
endmodule

