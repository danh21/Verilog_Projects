`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:44:41 11/04/2021
// Design Name:   flash_adc_2bit
// Module Name:   D:/cd/ref/ch2/encoder/flash_adc_2bit/tb.v
// Project Name:  flash_adc_2bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: flash_adc_2bit
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
	reg [2:0] w;

	// Outputs
	wire [1:0] y;

	// Instantiate the Unit Under Test (UUT)
	flash_adc_2bit uut (
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		w = 0;
		#100;
        
		w = 1;
		#100;
		
		w = 3;
		#100;
		
		w = 7;
		#100;
		
		$stop;
	end
      
endmodule

