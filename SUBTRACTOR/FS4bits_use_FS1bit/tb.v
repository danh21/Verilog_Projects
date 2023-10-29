`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:25:36 10/22/2021
// Design Name:   full_subtractor_4bit
// Module Name:   D:/cd/TT FPGA/project/ch1/full_subtractor/tb.v
// Project Name:  full_subtractor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_subtractor_4bit
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
	reg [3:0] A;
	reg [3:0] B;
	reg Bin;
	// Outputs
	wire [3:0] D;
	wire Bout;
	// Instantiate the Unit Under Test (UUT)
	full_subtractor_4bit uut (
		.A(A), 
		.B(B),
		.Bin(Bin),
		.D(D),
		.Bout(Bout)
	);

	initial begin
		Bin = 0;
		// truong hop A>B
		A = 15;	
		B = 9;
		#100;
		// truong hop A<B
		A = 3;	
		B = 5;
		#100;
		// truong hop A=B
		A = 15;	
		B = 15;
		#100;
		
		Bin = 1;
		// truong hop A>B
		A = 15;	
		B = 9;
		#100;
		// truong hop A<B
		A = 3;	
		B = 5;
		#100;
		// truong hop A=B
		A = 15;	
		B = 15;
		#100;	
		$stop;
	end    
endmodule
