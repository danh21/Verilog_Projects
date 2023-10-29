`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:30:28 08/04/2021
// Design Name:   FIFO_BRAM
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/XlLlNX SPARTAN-3 SPECIFIC MEMORY/project 2/BRAM_BASED_FIFO/FIFO_BRAM_tb.v
// Project Name:  BRAM_BASED_FIFO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FIFO_BRAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FIFO_BRAM_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Read;
	reg Write;
	reg [7:0] Write_data;

	// Outputs
	wire FIFO_Empty;
	wire FIFO_Full;
	wire [7:0] Read_data;

	// Instantiate the Unit Under Test (UUT)
	FIFO_BRAM uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Read(Read), 
		.Write(Write), 
		.Write_data(Write_data), 
		.FIFO_Empty(FIFO_Empty), 
		.FIFO_Full(FIFO_Full), 
		.Read_data(Read_data)
	);

	initial begin
		// Initialize Inputs
		Clk = 1;
		Reset = 1;
		Read = 0;
		Write = 0;
		Write_data = 8'b00000000;
		#10;
	
		Reset = 0;
		Write_data = 8'b00000001;
		#10;
		
		Write = 1;
		Write_data = 8'b00000010;
		#10;
			
		Read = 1;
		Write_data = 8'b00000011;
		#10;
				
		Write_data = 8'b00000100;
		#10;
		
		Write_data = 8'b00000101;
		#10;
		
		Write_data = 8'b00000110;
		#10;
		
		Write_data = 8'b00000111;
		#10;
		
		Write_data = 8'b00001000;
		#10;
		
		Write_data = 8'b00001001;
		#10;
		
		Write_data = 8'b00001010;
		#20;
		
		$stop;
		
	end
      always #5 Clk = ~Clk;
endmodule

