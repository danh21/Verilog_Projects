`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:59:14 11/18/2021
// Design Name:   Counter4bits_3Run_2Pause
// Module Name:   C:/Users/ngocy/OneDrive/Desktop/TT Verilog/Bai3/Counter4bits_3TRun_2TPause/tb.v
// Project Name:  Counter4bits_3TRun_2TPause
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Counter4bits_3Run_2Pause
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

	// Outputs
	wire oe;
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	Counter4bits_3Run_2Pause uut (
		.clk(clk), 
		.reset(reset), 
		.oe(oe), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		
	end
		
	always begin 
	#10;
	clk = ~clk;
	end 
		
		
        

	      
endmodule

