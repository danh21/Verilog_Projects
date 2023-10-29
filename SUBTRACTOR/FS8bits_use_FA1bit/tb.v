`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:30:51 11/03/2021
// Design Name:   Subtractor8bits
// Module Name:   C:/Users/ngocy/OneDrive/Desktop/TT Verilog/Bai2/Subtractor8bits/tb.v
// Project Name:  Subtractor8bits
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Subtractor8bits
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
	wire [7:0] D;
	wire Bout;

	// Instantiate the Unit Under Test (UUT)
	Subtractor8bits uut (
		.A(A), 
		.B(B), 
		.D(D), 
		.Bout(Bout)
	);

	initial begin
		// Initialize Inputs
		A = 255;
		B = 15;
		#100;
		
		
		
		A = 10;
		B = 50;
		#100;
		
		A = 15;
		B = 15;
		#100;
      
		A = 15;
		B = 20;
		#100;
		
		A = 55;
		B = 39;
		#100;
		
		A = 255;
		B = 14;
		#100;
		
		A = 20;
		B = 14;
		#100;
		
		A = 21;
		B = 15;
		#100;
		
		$stop;
		// Add stimulus here

	end
      
endmodule

