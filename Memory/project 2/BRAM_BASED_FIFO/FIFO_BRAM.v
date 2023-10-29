`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:44 08/04/2021 
// Design Name: 
// Module Name:    FIFO_BRAM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FIFO_BRAM	// slide 18
	(
		input wire Clk, Reset, Read, Write,
		input wire [7:0] Write_data,
		output wire FIFO_Empty, FIFO_Full,
		output wire [7:0] Read_data
   );
	// khoi tao tin hieu ben trong
	wire [4:0] Write_addr, Read_addr;
	wire [5:0] Write_pointer, Read_pointer;
	wire WR_en;
	// Tin hieu cho phep ghi khi Ram chua full
	// Khoi tao BRAM
	Dual_port_ram RAM (.Clk(Clk), .WR_en(WR_en), .Write_addr(Write_addr), .Read_addr(Read_addr), .Write_data(Write_data), .Read_data(Read_data));
	// khoi tao Read_CTRL
	Read_CTRL RC (.Clk(Clk), .Reset(Reset), .Read(Read), .FIFO_Empty(FIFO_Empty), .Read_pointer(Read_pointer), .Read_addr(Read_addr));
	// khoi tao Write_CTRL
	Write_CTRL WC (.Clk(Clk), .Reset(Reset), .Write(Write), .WR_en(WR_en), .FIFO_Full(FIFO_Full), .Write_pointer(Write_pointer), .Write_addr(Write_addr));
	// khoi tao FF_Flag
	FIFO_Flag FFL (.Read_pointer(Read_pointer), .Write_pointer(Write_pointer), .FIFO_Full(FIFO_Full), .FIFO_Empty(FIFO_Empty));

endmodule
