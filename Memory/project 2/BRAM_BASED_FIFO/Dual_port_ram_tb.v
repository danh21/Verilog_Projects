`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:53:37 08/04/2021
// Design Name:   Dual_port_ram
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/XlLlNX SPARTAN-3 SPECIFIC MEMORY/project 2/BRAM_BASED_FIFO/Dual_port_ram_tb.v
// Project Name:  BRAM_BASED_FIFO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Dual_port_ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Dual_port_ram_tb;

	// Inputs
	reg Clk;
	reg WR_en;
	reg [4:0] Read_addr;
	reg [4:0] Write_addr;
	reg [7:0] Write_data;

	// Outputs
	wire [7:0] Read_data;

	// Instantiate the Unit Under Test (UUT)
	Dual_port_ram uut (
		.Clk(Clk), 
		.WR_en(WR_en), 
		.Read_addr(Read_addr), 
		.Write_addr(Write_addr), 
		.Write_data(Write_data), 
		.Read_data(Read_data)
	);

	initial begin
		// Initialize Inputs
		Clk = 1;
		WR_en = 0;
		Read_addr = 5'b00001;
		Write_addr = 5'b00001;
		Write_data = 8'b00000000;
		#100;		
		
		WR_en = 1;
		Write_data = 8'b00000001;
		#100;
		
		Write_data = 8'b00000010;
		#100;
		
		Write_data = 8'b00000011;
		#100;
		
		Write_data = 8'b00000100;
		#100;
		
		Write_data = 8'b00000101;
		#100;
      $stop;
	end
      always #10 Clk = ~Clk;
endmodule

