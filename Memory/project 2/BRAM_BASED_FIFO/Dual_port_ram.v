`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:14 08/04/2021 
// Design Name: 
// Module Name:    Dual_port_ram 
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
module Dual_port_ram	// slide 14
	// I/O ports
	(
	 input wire Clk, WR_en,
	 input wire [4:0] Read_addr, Write_addr,
	 input wire [7:0] Write_data,
	 output wire [7:0] Read_data
   );
	// khai bao mang nho cua RAM 
	reg [7:0] SRAM [31:0];	// 32 ngan nho
	reg [4:0] Read_addr_reg, Write_addr_reg;	// thanh ghi dia chi
	
	// synchronous write and address update
	always @(posedge Clk)
		begin
			if (WR_en)	// cho phep ghi
				SRAM [Write_addr] <= Write_data;	// ghi du lieu vao RAM tai Write_address	
				Read_addr_reg <= Read_addr;	// luu du lieu dia chi vao thanh ghi
		end

	// gan du lieu dau ra
	assign Read_data = SRAM [Read_addr_reg];

endmodule
