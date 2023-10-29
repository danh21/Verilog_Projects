`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:43:27 12/02/2021
// Design Name:   Shift_Register
// Module Name:   D:/cd/TT FPGA/project/tuan 5/TwoPulse/tb.v
// Project Name:  TwoPulse
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
	reg SRCLK;
	reg RCLK;
	reg reset;
	reg s_in;

	// Outputs
	wire [7:0] p_out;
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	Shift_Register uut (
		.SRCLK(SRCLK), 
		.RCLK(RCLK), 
		.reset(reset), 
		.s_in(s_in), 
		.p_out(p_out),
		.q(q)
	);

	initial begin
		// Initialize Inputs
		SRCLK = 0;
		RCLK = 0;
		reset = 1;
		#10;
		reset = 0;
		
		s_in = 0;
		#20;
		s_in = 0;
		#20;
		s_in = 0;
		#20;
		s_in = 1;
		#20;
		s_in = 1;
		#20;
		s_in = 0;
		#20;
		s_in = 0;
		#20;
		s_in = 1;
		#20;
		
		s_in = 0;
		#1000;
		$stop;

	end
   always begin
		#10 SRCLK=~SRCLK;
	end
	always begin
		#160 RCLK=~RCLK;
	end
endmodule

