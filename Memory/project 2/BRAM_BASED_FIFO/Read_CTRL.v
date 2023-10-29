`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:02:16 08/04/2021 
// Design Name: 
// Module Name:    Read_CTRL 
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
module Read_CTRL	// slide 19
	(
	 input wire Clk, Reset, Read, FIFO_Empty,
	 output [4:0] Read_addr,
	 output [5:0] Read_pointer
   );
	reg [5:0] Read_pointer_reg, Read_pointer_next, Read_pointer_after;
	wire Read_en;
	assign Read_en = Read & (~FIFO_Empty);	// FIFO empty thi khong read duoc
	
	always @(posedge Clk, posedge Reset)
		begin
			if (Reset)
				Read_pointer_reg <= 0;
			else
				Read_pointer_reg <= Read_pointer_next;
		end
	always @*
		begin
			Read_pointer_next <= Read_pointer_reg;
			if (Read_en)
				begin
					Read_pointer_after = Read_pointer_reg + 1'b1;
					Read_pointer_next <= Read_pointer_after;
				end
		end
	assign Read_pointer = Read_pointer_reg;
	assign Read_addr = Read_pointer_reg [4:0];
	
endmodule
