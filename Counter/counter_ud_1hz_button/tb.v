`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:33:43 12/09/2021
// Design Name:   FSM
// Module Name:   D:/cd/TT FPGA/project/tuan 7/counter_ud_1hz_button/tb.v
// Project Name:  counter_ud_1hz_button
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
	reg btn_ud;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.reset(reset), 
		.clk(clk), 
		.btn_ud(btn_ud), 
		.q(q)
	);

	integer i, j;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		
		btn_ud = 0;
		#1000000;
		for (i=0;i<3;i=i+1)
		begin
			// khong doi khi nhan
			btn_ud = 1;
			#30000000;
			// khong doi khi tha
			btn_ud = 0;
			for (j=0;j<5;j=j+1)
				#1000000000;
		end
		
		for (i=0;i<3;i=i+1)
		begin
			// co doi khi nhan
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			#9000000;
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			#9000000;
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			#9000000;
			btn_ud = 1;
			#30000000;
			// co doi khi tha
			btn_ud = 0;
			#9000000;
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			#9000000;
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			for (j=0;j<5;j=j+1)
				#1000000000;
		end
		$stop;
	end
   always begin
		#10 clk = ~clk;
	end
      
endmodule

