`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:24:27 12/08/2021
// Design Name:   FSM
// Module Name:   D:/cd/TT FPGA/project/tuan 7/pulse_8LED_CLKfromButton/tb.v
// Project Name:  pulse_8LED_CLKfromButton
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM
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
	reg reset;
	reg clk;
	reg btn;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.reset(reset), 
		.clk(clk), 
		.btn(btn), 
		.q(q)
	);
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		
		btn = 0;
		#1000000;
		for (i=0;i<10;i=i+1)
		begin
		// khong doi khi nhan
		btn = 1;
		#30000000;
		// khong doi khi tha
		btn = 0;
		#30000000;
		end
		
		for (i=0;i<7;i=i+1)
		begin
		// co doi khi nhan
		btn = 1;
		#2000000;
		btn = 0;
		#2000000;
		btn = 1;
		#2000000;
		btn = 0;
		#2000000;
		btn = 1;
		#2000000;
		btn = 0;
		#2000000;
		btn = 1;
		#30000000;
		// co doi khi tha
		btn = 0;
		#2000000;
		btn = 1;
		#2000000;
		btn = 0;
		#2000000;
		btn = 1;
		#2000000;
		btn = 0;
		#30000000;
		end
		$stop;
	end
   always begin
		#10 clk = ~clk;
	end
endmodule

