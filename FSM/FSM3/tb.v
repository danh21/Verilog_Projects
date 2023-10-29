`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:54:59 12/10/2021
// Design Name:   FSM
// Module Name:   D:/cd/TT FPGA/project/tuan 8/bai3/tb.v
// Project Name:  bai3
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
	reg clk;
	reg rst;
	reg i;

	// Outputs
	wire j;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.rst(rst), 
		.i(i), 
		.j(j)
	);

	initial begin
		// khoi tao
		clk = 0;
		rst = 0;
		i = 0;
		#10;
		rst = 1;
		
		i = 0;
		#50;
		i = 1;
		#40;
		i = 0;
		#30;
		// reset v? q0
		rst = 0;
		#10;
		rst = 1;
		i = 1;
		#30;
		$stop;
	end
   always begin
		#10 clk = ~clk;
	end
      
endmodule

