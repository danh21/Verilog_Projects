`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:26:57 11/16/2021
// Design Name:   led_counter
// Module Name:   D:/cd/TT FPGA/project/tuan 4/ud_counter8b_sw_freq/tb.v
// Project Name:  ud_counter8b_sw_freq
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: led_counter
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
	reg clk;
	reg reset;
	reg [1:0] sw;
	reg ud;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	led_counter uut (
		.clk(clk), 
		.reset(reset), 
		.sw(sw), 
		.ud(ud), 
		.led(led)
	);
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		
		// tan so ngo vao 100Hz
		sw = 3;
		// dem len
		ud = 1;
		#30000000;	
		//dem xuong		
		ud = 0;
		#30000000;
		
		// tan so ngo vao 10Hz
		sw = 2;
		// dem len
		ud = 1;		
		#250000000; 
		//dem xuong		
		ud = 0;
		#250000000;
		
		// tan so ngo vao 1Hz
		sw = 1;
		// dem len
		ud = 1;
		#1250000000;
		#1250000000;		
		//dem xuong		
		ud = 0;
		#1250000000;
		#1250000000;
		
		// tan so ngo vao 0.1Hz
		sw = 0;
		// dem len 3.75*10^10 ns
		ud = 1;
		for (i=0;i<30;i=i+1)
		#1250000000;	
		//dem xuong	3.75*10^10 ns	
		ud = 0;
		for (i=0;i<30;i=i+1)
		#1250000000;		
				
		$stop;
	end
	always begin
		#10;
		clk = ~clk;
	end
      
endmodule

