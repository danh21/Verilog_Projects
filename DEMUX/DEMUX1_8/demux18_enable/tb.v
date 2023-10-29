`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:32:35 11/01/2021
// Design Name:   demux18_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/demux18_enable/tb.v
// Project Name:  demux18_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux18_enable
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
	reg i;
	reg e;
	reg [2:0] s;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	demux18_enable uut (
		.i(i), 
		.e(e), 
		.s(s), 
		.y(y)
	);

	initial begin
		// initialize inputs
		i = 1;
		// khong cho phep giai da hop
		e = 1;
		s = 0;
		#100;
		// cho phep giai da hop
		e = 0;
		for (s=0;s<8;s=s+1)
			#100;		
		$stop;
   end
	
	always begin
			#10;
			i=~i;		
		end    
endmodule

