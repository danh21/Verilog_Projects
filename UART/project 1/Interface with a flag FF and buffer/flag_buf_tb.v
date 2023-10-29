`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:21:34 05/31/2021
// Design Name:   flag_buf
// Module Name:   D:/cd/thiet ke he thong va vi mach/flag_buf/flag_buf_tb.v
// Project Name:  flag_buf
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: flag_buf
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module flag_buf_tb;

	// Inputs
	reg clk;
	reg reset;
	reg clr_flag;
	reg set_flag;
	reg [7:0] din;

	// Outputs
	wire flag;
	wire [7:0] dout;

	// Instantiate the Unit Under Test (UUT)
	flag_buf uut (
		.clk(clk), 
		.reset(reset), 
		.clr_flag(clr_flag), 
		.set_flag(set_flag), 
		.din(din), 
		.flag(flag), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		clr_flag = 0;
		set_flag = 1;
		din = 8'b00000001;
		#100;
				
		reset = 0;
		clr_flag = 0;
		set_flag = 0;
		din = 8'b00000001;
		#100;
		
		clr_flag = 0;
		set_flag = 1;
		din = 8'b00000010;
		#100;
		
		clr_flag = 1;
		set_flag = 0;
		din = 8'b00000011;
		#100;
		
		clr_flag = 1;
		set_flag = 1;
		din = 8'b00000100;
		#100;
		
		$stop;
	end
   always begin
	#5; clk = ~ clk;
	end   
endmodule

