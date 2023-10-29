`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:57:16 10/28/2021
// Design Name:   decoder38_enable_high_case
// Module Name:   D:/cd/ch2/DECODER3_8/decoder38_enable_high_case/tb.v
// Project Name:  decoder38_enable_high_case
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder38_enable_high_case
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
	reg e,s;
	reg [2:0] w;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder38_enable_high_case uut (
		.e(e), 
		.s(s),
		.w(w), 
		.y(y)
	);
	integer i;
	initial begin
		// Initialize Inputs
		s = 0;
		e = 1;
		w = 0;
		#50;
		
		e = 0;
		for (i=0;i<8;i=i+1)
		begin
			w=i;
			#50;
		end
		
		s = 1;
		e = 1;
		w = 0;
		#50;
		
		e = 0;
		for (i=0;i<8;i=i+1)
		begin
			w=i;
			#50;
		end
		
		$stop;

	end
      
endmodule

