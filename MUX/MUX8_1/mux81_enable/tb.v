`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:47:40 10/31/2021
// Design Name:   mux81_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/mux81_enable/tb.v
// Project Name:  mux81_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux81_enable
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
	reg [7:0] i;
	reg [2:0] s;
	reg e;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	mux81_enable uut (
		.i(i), 
		.s(s), 
		.e(e), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		// khong cho phep da hop
		e = 1;
		i = 0;
		s = 0;
		#500;
		// cho phep da hop
		e = 0;
		i = 0;
		for (s=0;s<8;s=s+1)
			#500;			
		$stop;
	end
	// dem len
	always begin
		#5;
		i = i + 1;
	end
      
endmodule

