`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:08:13 11/05/2021
// Design Name:   ic7485
// Module Name:   D:/cd/TT FPGA/kiemtra_ic7485/tb.v
// Project Name:  kiemtra_ic7485
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ic7485
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
	reg [3:0] a;
	reg [3:0] b;
	reg [2:0] cas;

	// Outputs
	wire [2:0] y;

	// Instantiate the Unit Under Test (UUT)
	ic7485 uut (
		.a(a), 
		.b(b), 
		.cas(cas), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		cas = 3'bx;
		/*a = 15;
		b = 15;		
		#100;*/
		
		a = 8;
		b = 15;		
		#100;
		
		a = 15;
		b = 10;		
		#100;
		
		a = 15;
		b = 15;
		cas = 4;
		#100;
		//cas = 3;
		//#100;
		cas = 1;
		#100;
		cas = 2;
		#100;
		cas = 6;
		#100;
		cas = 0;
		#100;
		cas = 5;
		#100;
		$stop;
        
		// Add stimulus here

	end
      
endmodule

