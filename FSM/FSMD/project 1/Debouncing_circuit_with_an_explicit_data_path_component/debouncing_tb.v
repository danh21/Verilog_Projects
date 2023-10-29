`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:02:41 08/02/2021
// Design Name:   debouncing
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/FSMD/Debouncing_circuit_with_an_explicit_data_path_component/debouncing_tb.v
// Project Name:  Debouncing_circuit_with_an_explicit_data_path_component
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: debouncing
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module debouncing_tb;

	// Inputs
	reg clk;
	reg reset;
	reg sw;

	// Outputs
	wire db_level;
	wire db_tick;

	// Instantiate the Unit Under Test (UUT)
	debouncing uut (
		.clk(clk), 
		.reset(reset), 
		.sw(sw), 
		.db_level(db_level), 
		.db_tick(db_tick)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		sw = 0;
		#15;
		
		reset = 1;
		sw = 0;
		#5;
		
		reset = 0;
		sw = 0;
		#10;
		
		sw = 1;
		#10;
		
		sw = 0;
		#20;
		
		sw = 1;
		#20;
		
		sw = 0;
		#20;
		
		sw = 1;
		#300;
		
		sw = 0;
		#30;
		
		sw = 1;
		#10;
		
		sw = 0;
		#20;
		
		sw = 1;
		#20;
		
		sw = 0;
		#1000;
		
	end
      always #5 clk = ~clk;
endmodule

