`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:40:25 11/16/2021
// Design Name:   led_counter
// Module Name:   D:/cd/TT FPGA/project/tuan 4/ud_counter8b_sw_8freq_pause_inv/tb.v
// Project Name:  ud_counter8b_sw_8freq_pause_inv
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
	reg ud;
	reg pause;
	reg inv;
	reg oe;
	reg [2:0] sw;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	led_counter uut (
		.clk(clk), 
		.reset(reset), 
		.ud(ud), 
		.pause(pause), 
		.inv(inv), 
		.sw(sw),
		.oe(oe),		
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		pause = 1;
		inv = 1;
		
		// tan so 5MHz
		sw = 0;		
		// dem len
		ud = 1;
		oe = 0;
		#1000;
		oe = 1;
		#1000;
		
		
		// dem xuong
		ud = 0;
		oe = 1;
		#1000;
		oe = 0;
		#1000;
		/*// dung
		pause = 0;
		#200;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#200;
		inv = 1;*/
		
		// tan so 2.5MHz
		sw = 1;		
		// dem len
		ud = 1;
		oe = 0;
		#2000;
		oe = 1;
		#2000;
		// dem xuong
		ud = 0;
		oe = 0;
		#2000;
		oe = 1;
		#2000;
		/*// dung
		pause = 0;
		#400;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#400;
		inv = 1;*/
		
		/*// tan so 1MHz
		sw = 2;		
		// dem len
		ud = 1;
		#3900;
		// dem xuong
		ud = 0;
		#2000;
		// dung
		pause = 0;
		#2000;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#1000;
		inv = 1;
		
		// tan so 500kHz
		sw = 3;		
		// dem len
		ud = 1;
		#5500;
		// dem xuong
		ud = 0;
		#6000;
		// dung
		pause = 0;
		#4000;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#2000;
		inv = 1;
		
		// tan so 400kHz
		sw = 4;		
		// dem len
		ud = 1;
		#8740;
		// dem xuong
		ud = 0;
		#5000;
		// dung
		pause = 0;
		#1240;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#3760;
		inv = 1;
		
		// tan so 200kHz
		sw = 5;		
		// dem len
		ud = 1;
		#15000;
		// dem xuong
		ud = 0;
		#15000;
		// dung
		pause = 0;
		#10000;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#5000;
		inv = 1;

		// tan so 100kHz
		sw = 6;		
		// dem len
		ud = 1;
		#37500;
		// dem xuong
		ud = 0;
		#30000;
		// dung
		pause = 0;
		#20000;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#10000;
		inv = 1;
		
		// tan so 50kHz
		sw = 7;		
		// dem len
		ud = 1;
		#75000;
		// dem xuong
		ud = 0;
		#60000;
		// dung
		pause = 0;
		#40000;
		pause = 1;		
		// dao ngo ra
		inv = 0;
		#20000;
		inv = 1;*/
		$stop;
	end
   always begin
		#10;
		clk = ~clk;
	end   
endmodule

