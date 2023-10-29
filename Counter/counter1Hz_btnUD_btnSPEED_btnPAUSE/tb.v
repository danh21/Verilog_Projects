`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:30:20 12/09/2021
// Design Name:   FSM
// Module Name:   D:/cd/TT FPGA/project/tuan 7/counter1Hz_btnUD_btnSPEED_btnPAUSE/tb.v
// Project Name:  counter1Hz_btnUD_btnSPEED_btnPAUSE
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
	reg btn_speed;
	reg btn_pause;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.reset(reset), 
		.clk(clk), 
		.btn_ud(btn_ud), 
		.btn_speed(btn_speed), 
		.btn_pause(btn_pause), 
		.q(q)
	);
	integer i, j;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
		btn_pause = 0;
		btn_speed = 0;	
		btn_ud = 0;
		#1000000;
		
		// toc do 1Hz
		// dem len
		btn_ud = 1;
		#30000000;
		btn_ud = 0;
		for (i=0;i<3;i=i+1)
			#1000000000;
		// tam dung		
		btn_pause = 1;
		for (i=0;i<2;i=i+1)
			#1000000000;
		btn_pause = 0;
		
		// toc do 10Hz
		btn_speed = 1; // co doi nut speed
		#9000000;
		btn_speed = 0;
		#9000000;
		btn_speed = 1;
		#9000000;
		btn_speed = 0;
		#9000000;
		btn_speed = 1;
		#9000000;
		btn_speed = 0;
		#9000000;
		btn_speed = 1;
		#30000000;
		btn_speed = 0; // co doi khi tha nut speed
		#9000000;
		btn_speed = 1;
		#9000000;
		btn_speed = 0;
		#9000000;
		btn_speed = 1;
		#9000000;
		btn_speed = 0;
		// dem xuong
		btn_ud = 1;
		#30000000;
		btn_ud = 0;
		for (i=0;i<5;i=i+1)
			#100000000;
		// tam dung
		btn_pause = 1; // co doi khi nhan nut pause
		#9000000;
		btn_pause = 0;
		#9000000;
		btn_pause = 1; 
		#9000000;
		btn_pause = 0;
		#9000000;
		btn_pause = 1;
		#9000000;
		btn_pause = 0;
		#9000000;
		btn_pause = 1;
		#300000000;
		btn_pause = 0; // co doi khi tha nut pause
		#9000000;
		btn_pause = 1;
		#9000000;
		btn_pause = 0;
		#9000000;
		btn_pause = 1;
		#9000000;
		btn_pause = 0;
		
		// toc do 100Hz
		btn_speed = 1;
		#30000000;
		btn_speed = 0;
		// den len dem xuong
		for (i=0;i<2;i=i+1) begin
			btn_ud = 1; // co doi khi nhan nut ud
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
			btn_ud = 0; // co doi khi tha nut ud
			#9000000;
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			#9000000;
			btn_ud = 1;
			#9000000;
			btn_ud = 0;
			for (j=0;j<5;j=j+1)
				#10000000;
		end
		
		// toc do 1000Hz
		btn_speed = 1;
		#30000000;
		btn_speed = 0;
		// dem len dem xuong
		btn_ud = 1;
		#30000000;
		btn_ud = 0;
		#30000000;
		$stop;	
	end
   always begin
		#10 clk = ~clk;
	end   
endmodule

