`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:34:36 07/20/2021
// Design Name:   decoder_2_4
// Module Name:   D:/cd/thiet ke he thong va vi mach/RT-LEVEL COMBINATIONAL CIRCUIT/decoder_2_4/decoder_2_4_tb.v
// Project Name:  decoder_2_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder_2_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder_2_4_tb;

	// Inputs
	reg [1:0] a;
	reg en;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder_2_4 uut (
		.a(a), 
		.en(en), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 2'b00;
		en = 0;
		#100;
		
		a = 2'b01;
		#100;
		
		a = 2'b10;
		#100;
		
		a = 2'b11;
		#100;
		
		a = 2'b00;
		en = 1;
		#100;
		
		a = 2'b01;
		#100;
		
		a = 2'b10;
		#100;
		
		a = 2'b11;
		#100;
		
		$stop;
	end
      
endmodule

