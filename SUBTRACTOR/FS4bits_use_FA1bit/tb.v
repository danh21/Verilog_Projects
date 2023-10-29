`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:50:04 10/23/2021
// Design Name:   full_subtractor_4bit
// Module Name:   D:/cd/TT FPGA/project/tuan 1/full_subtractor_4bit_using_full_adder_1bit/tb.v
// Project Name:  full_subtractor_4bit_using_full_adder_1bit
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

	// Outputs
	wire [3:0] D;
	wire Bout;

	// Instantiate the Unit Under Test (UUT)
	full_subtractor_4bit uut (
		.A(A), 
		.B(B), 
		.D(D), 
		.Bout(Bout)
	);

	initial begin
		// truong hop hieu A<B
		A = 3;
		B = 5;
		#100;
      // truong hop hieu A>B
		A = 15;
		B = 10;
		#100;
		// truong hop hieu A=B
		A = 15;
		B = 15;
		#100;
		
		$stop;

	end
      
endmodule

