`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:54:53 12/03/2021
// Design Name:   fsm_eg_mult_seg
// Module Name:   D:/cd/TT FPGA/project/tuan 7/FSM2/tb.v
// Project Name:  FSM2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm_eg_mult_seg
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
	reg a;
	reg b;

	// Outputs
	wire y0;
	wire yl;

	// Instantiate the Unit Under Test (UUT)
	fsm_eg_mult_seg uut (
		.clk(clk), 
		.reset(reset), 
		.a(a), 
		.b(b), 
		.y0(y0), 
		.yl(yl)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		a = 0;
		b = 0;
		#30;
		a = 1;
		#20;
		a = 0;
		#20;
		a = 1;
		#20;
		b = 1;
		#20;
		$stop;


	end
   always begin
		#10 clk = ~clk;
	end
endmodule

