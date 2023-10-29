`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:22:46 10/12/2021
// Design Name:   FullAdder8bits
// Module Name:   D:/cd/TT FPGA/project/ch1/Full_Adder_8bits/tb.v
// Project Name:  Full_Adder_8bits
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullAdder8bits
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
	reg [7:0] A;
	reg [7:0] B;

	// Outputs
	wire [8:0] S;

	// Instantiate the Unit Under Test (UUT)
	FullAdder8bits uut (
		.A(A), 
		.B(B), 
		.S(S)
	);

	initial begin
		// Initialize Inputs
		A = 35;
		B = 24;
		#100;
        
		A = 100;
		B = 127;
		#100;
		
		A = 255;
		B = 255;
		#100;

	end
      
endmodule

