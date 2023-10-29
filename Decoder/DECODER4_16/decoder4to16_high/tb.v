`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:14:03 10/09/2021
// Design Name:   decoder4to16_high
// Module Name:   D:/cd/TT FPGA/project/ch2/DECODER4_16/decoder4to16_high/tb.v
// Project Name:  decoder4to16_high
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder4to16_high
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
	wire [15:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder4to16_high uut (
		.e(e), 
		.w(w), 
		.y(y)
	);
	integer i;
	initial begin
		// Initialize Inputs
		e = 0;
		#100;
		
		e = 1;
		for (i=0;i<16;i=i+1)
		begin
			w = i;
			#100;
      end  

	end
      
endmodule

