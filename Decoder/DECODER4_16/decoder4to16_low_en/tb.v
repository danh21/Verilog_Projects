`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:39:39 12/10/2021
// Design Name:   decoder4to16_low_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 8/bai1/tb.v
// Project Name:  bai1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder4to16_low_enable
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
	decoder4to16_low_enable uut (
		.e(e), 
		.w(w), 
		.y(y)
	);
	integer i;
	initial begin
		// Initialize Inputs
		// khong cho phep giai ma
		e = 1;
		w = 0;
		#100;
		w = 1;
		#100;
      // cho phep giai ma 
		e = 0;
		for (i=0;i<16;i=i+1)
		begin
			w = i;
			#100;			
		end			
		$stop;		
	end
      
endmodule

