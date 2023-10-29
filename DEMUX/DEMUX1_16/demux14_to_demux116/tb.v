`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:39:27 11/04/2021
// Design Name:   demux1_16_enable
// Module Name:   D:/cd/ref/ch2/DEMUX1_16/demux14_to_demux116/tb.v
// Project Name:  demux14_to_demux116
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux1_16_enable
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
	reg [3:0] s;

	// Outputs
	wire [15:0] y;

	// Instantiate the Unit Under Test (UUT)
	demux1_16_enable uut (
		.e(e), 
		.i(i), 
		.s(s), 
		.y(y)
	);
	
	initial begin
		// Initialize Inputs
		i = 1;
		e = 1;		
		s = 0;
		#100;
		
		e = 0;
      for (s=0;s<16;s=s+1)
			#100;
		$stop;
	end
	
   always begin
		#10;
		i = ~i;
	end
endmodule

