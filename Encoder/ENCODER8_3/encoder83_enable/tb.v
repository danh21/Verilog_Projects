`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:30:51 10/31/2021
// Design Name:   encoder83_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/encoder83_enable/tb.v
// Project Name:  encoder83_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder83_enable
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
	reg [7:0] w;

	// Outputs
	wire [2:0] y;

	// Instantiate the Unit Under Test (UUT)
	encoder83_enable uut (
		.e(e), 
		.w(w), 
		.y(y)
	);

	integer i;
	initial begin
		// Initialize Inputs		
		// cho phep ma hoa
		e = 0;
		for (i=1;i<129;i=i*2)
			begin
				w = i;
				#50;
			end
		w = 0;
		#50;
		// khong cho phep ma hoa
		e = 1;
		w = 1;
		#50;
		$stop;

	end
      
endmodule

