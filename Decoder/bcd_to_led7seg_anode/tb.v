`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:29:16 10/31/2021
// Design Name:   bcd_to_led7seg_anode_decoder
// Module Name:   D:/cd/TT FPGA/project/tuan 2/bcd_to_led7seg_anode/tb.v
// Project Name:  bcd_to_led7seg_anode
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bcd_to_led7seg_anode_decoder
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
	reg [3:0] w;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	bcd_to_led7seg_anode_decoder uut (
		.w(w), 
		.y(y)
	);

	integer i;
	initial begin
		// Initialize Inputs
		for (i=0;i<16;i=i+1)
		begin
			w = i;
			#50;
		end
		$stop;
	end
      
endmodule

