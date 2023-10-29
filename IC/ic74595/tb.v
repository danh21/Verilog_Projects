`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:53:46 12/02/2021
// Design Name:   IC74595
// Module Name:   D:/cd/TT FPGA/project/tuan 6/ic74595/tb.v
// Project Name:  ic74595
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IC74595
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
	reg SRCLK;
	reg SER;
	reg RCLK;
	reg SRCLR;
	reg OE_bar;

	// Outputs
	wire Qa;
	wire Qb;
	wire Qc;
	wire Qd;
	wire Qe;
	wire Qf;
	wire Qg;
	wire Qh;
	wire Qh_bar;

	// Instantiate the Unit Under Test (UUT)
	IC74595 uut (
		.SRCLK(SRCLK), 
		.SER(SER), 
		.RCLK(RCLK), 
		.SRCLR(SRCLR), 
		.OE_bar(OE_bar), 
		.Qa(Qa), 
		.Qb(Qb), 
		.Qc(Qc), 
		.Qd(Qd), 
		.Qe(Qe), 
		.Qf(Qf), 
		.Qg(Qg), 
		.Qh(Qh), 
		.Qh_bar(Qh_bar)
	);

	integer i;
	initial begin
		// Initialize Inputs
		SRCLK = 0;
		RCLK = 0;
		
		OE_bar = 0;
		SER = 0;
		SRCLR = 0;
		#20;
		SRCLR = 1;
		SER = 1;
		#20;
		SER = 0;
		#170;
		OE_bar = 1;
		#10;
		SER = 1;
		#20;
		SER = 0;
		#10;
		OE_bar = 0;
		#40;
		
		SRCLR = 0;
		#20;
		SRCLR = 1;
		#20;
		$stop;

	end
	
	always begin
		#30;
		for (i=0;i<18;i=i+1)
			#10 RCLK = ~RCLK;
		
		RCLK = 0; #30;
		RCLK = 1; #10;
		RCLK = 0; #50;
		RCLK = 1; #10;
		RCLK = 0; 
	end
	always begin
		#10 SRCLK = ~SRCLK;
	end
	
endmodule

