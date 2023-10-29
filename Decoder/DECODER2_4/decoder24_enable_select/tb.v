`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:09:48 10/29/2021
// Design Name:   decoder24_enable_select
// Module Name:   D:/cd/TT FPGA/project/tuan 2/decoder24_enable_select/tb.v
// Project Name:  decoder24_enable_select
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder24_enable_select
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
	reg [1:0] w;
	reg s;
	reg e;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder24_enable_select uut (
		.w(w), 
		.s(s), 
		.e(e), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		s = 0;	//ngo ra tich cuc muc thap
		e = 0;	//cho phep giai ma 
		w = 0;
		#50
		w = 1;
		#50;
		w = 2;
		#50;
		w = 3;
		#50;
		e = 1;	//khong cho phep giai ma
		w = 0;
		#50
		
		s = 1;	//ngo ra tich cuc muc cao
		e = 0;	//cho phep giai ma
		w = 0;
		#50
		w = 1;
		#50;
		w = 2;
		#50;
		w = 3;
		#50;
		e = 1;	//khong cho phep giai ma
		w = 0;
		#50
		
		$stop;
        
		

	end
      
endmodule

