`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:46:48 10/24/2021
// Design Name:   full_adder_4bit
// Module Name:   D:/cd/TT FPGA/project/tuan 1/full_adder_4bit/tb.v
// Project Name:  full_adder_4bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder_4bit
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
	reg Cin;
	// Outputs	
	wire Cout;
	wire [3:0] S;

	// Instantiate the Unit Under Test (UUT)
	full_adder_4bit uut (
		.A(A), 
		.B(B), 
		.Cin(Cin),
		.Cout(Cout), 
		.S(S)
	);

	initial begin 
		Cin = 0;
		// truong hop A=B
		A = 15;
		B = 15;
		#100;
		// truong hop A>B
		A = 9;
		B = 3;
		#100;
		// truong hop A<B
		A = 2;
		B = 6;
		#100;
		
		Cin = 1;
		// truong hop A=B
		A = 15;
		B = 15;
		#100;
		// truong hop A>B
		A = 9;
		B = 3;
		#100;
		// truong hop A<B
		A = 2;
		B = 6;
		#100;
		$stop;
	end
      
endmodule

