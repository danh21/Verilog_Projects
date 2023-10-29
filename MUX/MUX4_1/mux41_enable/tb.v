`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:01:26 10/31/2021
// Design Name:   mux41_enable
// Module Name:   D:/cd/TT FPGA/project/tuan 2/mux41_enable/tb.v
// Project Name:  mux41_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux41_enable
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
	reg [3:0] i;
	reg [1:0] s;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	mux41_enable uut (
		.e(e), 
		.i(i), 
		.s(s), 
		.y(y)
	);

	initial begin
		// initialize inputs
		// cho phep da hop
		e = 0;
		i = 0;
		s = 0;
		#200;       
		s = 1;
		#200;		
		s = 2;
		#200;		
		s = 3;
		#200;
		// khong cho phep da hop
		e = 1;
		s = 0;
		#200;
		$stop;
	end  
	always 
		begin
			#10;
			i = i + 1;
		end
      
endmodule

