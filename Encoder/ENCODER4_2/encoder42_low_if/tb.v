`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:47:14 10/10/2021
// Design Name:   encoder42_low_if
// Module Name:   D:/cd/TT FPGA/project/ch2/ENCODER4_2/encoder42_low_if/tb.v
// Project Name:  encoder42_low_if
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder42_low_if
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
	encoder42_low_if uut (
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		w = 4'b1110;
		#100;
        
		w = 4'b1101;
		#100;
		
		w = 4'b1011;
		#100;
		
		w = 4'b0111;
		#100;
		
		w = 4'b1111;
		#100;
		
		$stop;
		
		

	end
      
endmodule

