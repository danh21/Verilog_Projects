`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:15 10/01/2021
// Design Name:   encoder42_high_if
// Module Name:   D:/cd/TT FPGA/project/ch2/ENCODER4_2/encoder42_high_if/tb.v
// Project Name:  encoder42_high_if
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder42_high_if
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
	reg [3:0] w;

	// Outputs
	wire [1:0] y;

	// Instantiate the Unit Under Test (UUT)
	encoder42_high_if uut (
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
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
		
		$stop;

	end
      
endmodule

