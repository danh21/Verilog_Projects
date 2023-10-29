`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:16:48 10/18/2021
// Design Name:   encoder16_4
// Module Name:   D:/cd/TT FPGA/project/ch2/ENCODER16_4/encoder16_4_high/tb.v
// Project Name:  encoder16_4_high
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder16_4
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
	reg [15:0] w;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	encoder16_4 uut (
		.e(e), 
		.w(w), 
		.y(y)
	);
	integer i;
	initial begin
		// Initialize Inputs
		e = 1;
		w = 8;
		#100;
		
		e = 0;
		w = 1;
		#100;
		for (i=0;i<15;i=i+1)
			begin
				w = w*2;
				#100;
			end
     
		// Add stimulus here
		$stop;
	end
      
endmodule

