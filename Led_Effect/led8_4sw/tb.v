`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:07:21 11/24/2021
// Design Name:   LED
// Module Name:   D:/cd/TT FPGA/project/tuan 5/led8_4sw/tb.v
// Project Name:  led8_4sw
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LED
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
	reg S1;
	reg S2;
	reg S3;
	reg S4;

	// Outputs
	wire [7:0] q_out;

	// Instantiate the Unit Under Test (UUT)
	Shift_Register uut (
		.clk(clk), 
		.reset(reset), 
		.S1(S1), 
		.S2(S2), 
		.S3(S3), 
		.S4(S4), 
		.q_out(q_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		//mode 1, tan so 50kHz
		S1 = 1;
		S2 = 1;
		S3 = 0;
		S4 = 0;
		#69980;
		//mode 2, tan so 200kHz
		reset = 1;
		#10;
		reset = 0;
		S1 = 0;
		S2 = 1;
		S3 = 0;
		S4 = 1;
		#80000;
		//mode 3, tan so 100kHz
		reset = 1;
		#10;
		reset = 0;
		S1 = 1;
		S2 = 0;
		S3 = 1;
		S4 = 0;
		#144980;
		//mode 4, tan so 400kHz
		reset = 1;
		#10;
		reset = 0;
		S1 = 0;
		S2 = 0;
		S3 = 1;
		S4 = 1;
		#177460;
		
		$stop;
	end
   
	always begin
		#10;
		clk = ~clk;
	end   
endmodule

