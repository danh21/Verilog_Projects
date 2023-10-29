`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:07:12 08/04/2021
// Design Name:   div
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/FSMD/Division_circuit/div_tb.v
// Project Name:  Division_circuit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module div_tb;

	// Inputs
	reg clk;
	reg reset;
	reg start;
	reg [7:0] dvsr;
	reg [7:0] dvnd;

	// Outputs
	wire ready;
	wire done_tick;
	wire [7:0] quo;
	wire [7:0] rmd;

	// Instantiate the Unit Under Test (UUT)
	div uut (
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.dvsr(dvsr), 
		.dvnd(dvnd), 
		.ready(ready), 
		.done_tick(done_tick), 
		.quo(quo), 
		.rmd(rmd)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		//reset = 0;
		start = 1;				
		dvsr = 8'b00000011;
		dvnd = 8'b00001110;
		#260;
		
		dvsr = 8'b00000010;
		dvnd = 8'b00001101;
		#220;
		
		dvsr = 8'b00000011;
		dvnd = 8'b00100000;
		#200;
		
		$stop;
		
	end
      always #10 clk = ~clk;
endmodule

