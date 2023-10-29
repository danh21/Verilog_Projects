`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:41:21 12/09/2021
// Design Name:   mux16to1_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/da hop/MUX16_1/mux16_1/tb.v
// Project Name:  mux16_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux16to1_enable
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
	reg [15:0] i;
	reg [3:0] s;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	mux16to1_enable uut (
		.e(e), 
		.i(i), 
		.s(s), 
		.y(y)
	);

	initial begin
	// khong cho phep da hop
		e = 1;
		i = 0;
		s = 0;
		#500;
	// cho phep da hop
		e = 0;
		i = 0;
		for (s=0;s<16;s=s+1)
			#500;			
		$stop;
	end
	// dem len
	always begin
		#5;
		i = i + 1;
	end
      
endmodule

