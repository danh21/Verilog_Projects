`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:50:16 10/01/2021
// Design Name:   decoder24_high_if
// Module Name:   D:/cd/TT FPGA/project/ch2/DECODER2_4/decoder24_high_if/tb.v
// Project Name:  decoder24_high_if
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder24_high_if
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
	reg [1:0] w;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder24_high_if uut (
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		w = 0;
		#100;
        
		w = 1;
		#100;
		
		w = 2;
		#100;
		
		w = 3;
		#100;
		
		$stop;
	end
      
endmodule

