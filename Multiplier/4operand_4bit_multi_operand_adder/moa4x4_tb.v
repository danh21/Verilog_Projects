`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:36:09 07/04/2021
// Design Name:   moa4x4
// Module Name:   D:/cd/thiet ke he thong va vi mach/A_4operand_4bit_multi_operand_adder/moa4x4_tb.v
// Project Name:  A_4operand_4bit_multi_operand_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: moa4x4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module moa4x4_tb;	

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg [3:0] D;
	reg [3:0] E;
	reg Cin;

	// Outputs
	wire [4:0] S;
	wire [4:0] C;

	// Instantiate the Unit Under Test (UUT)
	moa4x4 uut (
		.A(A), 
		.B(B), 
		.D(D), 
		.E(E), 
		.Cin(Cin), 
		.S(S), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 4'b1010;	// table 4.1 trang 58
		B = 4'b0110;
		D = 4'b1011;
		E = 4'b1100;
		Cin = 0;	
		#100;
		
		A = 4'b0000;
		B = 4'b0001;
		D = 4'b0010;
		E = 4'b0011;
		Cin = 1;	
		#100;
		
		$finish;
	end
      
endmodule

