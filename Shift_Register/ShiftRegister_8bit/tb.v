`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:01:23 12/30/2021
// Design Name:   Shift_Register
// Module Name:   D:/cd/TT FPGA/project/tuan 8/bai2/tb.v
// Project Name:  bai2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Shift_Register
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
	reg SW0;
	reg SW1;
	reg SW2;
	reg SW3;

	// Outputs
	wire [7:0] q_out;

	// Instantiate the Unit Under Test (UUT)
	Shift_Register uut (
		.clk(clk), 
		.reset(reset), 
		.SW0(SW0), 
		.SW1(SW1), 
		.SW2(SW2), 
		.SW3(SW3), 
		.q_out(q_out)
	);
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		#10;
		reset = 1;
		SW3 = 1;
		//tan so 10Hz
		SW0 = 0;
		//mode 1
		SW1 = 0;
		SW2 = 0;
		#800000000;
		//mode 2
		SW1 = 1;
		SW2 = 0;
		reset = 0;
		#10;
		reset = 1;
		#900000000;
		SW3 = 0; //pause
		#300000000;
		SW3 = 1;
		
		//tan so 4Hz
		SW0 = 1;
		//mode 3
		SW1 = 0;
		SW2 = 1;
		reset = 0;
		#10;
		reset = 1;
		for (i=0;i<10;i=i+1) 
			#250000000;
		//mode 4
		SW1 = 1;
		SW2 = 1;
		reset = 0;
		#10;
		reset = 1;
		for (i=0;i<10;i=i+1) 
			#250000000;
		SW3 = 0; //pause
		#500000000;
		$stop;		
	end
	
   always begin
		#250;
		clk = ~clk;	
	end   
endmodule

