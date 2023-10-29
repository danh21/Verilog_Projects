`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:34:52 10/31/2021
// Design Name:   decoder38_enable_low
// Module Name:   D:/cd/TT FPGA/project/tuan 2/decoder24_to_decoder38/tb.v
// Project Name:  decoder24_to_decoder38
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder38_enable_low
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
	reg [2:0] w;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder38_enable_low uut (
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
		#50;
	// cho phep giai ma
		e = 0;
		for (i=0;i<8;i=i+1)
		begin
			w=i;
			#50;
		end
		$stop;

	end
      
endmodule


