`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:01:07 10/12/2021
// Design Name:   FullAdder16bits
// Module Name:   D:/cd/TT FPGA/project/ch1/Full_Adder_16bits/tb.v
// Project Name:  Full_Adder_16bits
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullAdder16bits
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
	reg [15:0] a;
	reg [15:0] b;

	// Outputs
	wire [16:0] s;

	// Instantiate the Unit Under Test (UUT)
	FullAdder16bits uut (
		.a(a), 
		.b(b), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 4;
		b = 3;
		#100;
        
		a = 36;
		b = 56;
		#100;
		
		a = 125;
		b = 500;
		#100;
		
		a = 9000;
		b = 500;
		#100;
		
		a = 5000;
		b = 5000;
		#100;
		
		a = 65535;
		b = 65535;
		#100;
	end
      
endmodule

