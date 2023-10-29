`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:32:42 11/19/2021
// Design Name:   Counter4bits_3Run_2Pause
// Module Name:   C:/Users/ngocy/OneDrive/Desktop/TT Verilog/Bai3/Test_Pause_Run_Odd_Even/Run0_2_4_5_7_9_3L_Pause_2Lan/tb.v
// Project Name:  Run0_2_4_5_7_9_3L_Pause_2Lan
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
	wire en;
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	Counter4bits_3Run_2Pause uut (
		.clk(clk), 
		.reset(reset), 
		.oe(oe), 
		.en(en), 
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

