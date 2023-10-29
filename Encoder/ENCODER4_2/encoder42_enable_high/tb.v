`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:54:46 10/31/2021
// Design Name:   encoder42_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/encoder42_enable/tb.v
// Project Name:  encoder42_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder42_enable
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
	reg e;
	reg [3:0] w;

	// Outputs
	wire [1:0] y;

	// Instantiate the Unit Under Test (UUT)
	encoder42_enable uut (
		.e(e), 
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs	     
		// cho phep ma hoa
		e = 0;
		w = 1;
		#100;       
		w = 2;
		#100;		
		w = 4;
		#100;		
		w = 8;
		#100;		
		w = 0;
		#100;
		// khong cho phep ma hoa
		e = 1;
		w = 1;
		#100;  
		$stop;

	end
      
endmodule

