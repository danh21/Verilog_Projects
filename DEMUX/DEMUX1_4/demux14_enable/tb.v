`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:58:46 10/31/2021
// Design Name:   demux14_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/demux14_enable/tb.v
// Project Name:  demux14_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux14_enable
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
	reg i;
	reg [1:0] s;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	demux14_enable uut (
		.e(e), 
		.i(i), 
		.s(s), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		// khong cho phep giai da hop
		e = 1;
		i = 1;
		s = 0;
		#100;
		// cho phep giai da hop
		e = 0;
		s = 0;
		#100;
		s = 1;
		#100;
		s = 2;
		#100;
		s = 3;
		#100;
		s = 2'bx;
		#100;
		$stop;
	end
	
	always begin
		#10;
		i = ~i;		
	end
      
endmodule

