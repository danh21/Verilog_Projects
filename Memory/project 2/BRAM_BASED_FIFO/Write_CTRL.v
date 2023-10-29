`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:23:35 08/04/2021 
// Design Name: 
// Module Name:    Write_CTRL 
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
module Write_CTRL	// slide 20
	(
	 input wire Clk, Reset, Write, FIFO_Full,
	 output [4:0] Write_addr,
	 output [5:0] Write_pointer,
	 output wire WR_en
   );
	reg [5:0] Write_pointer_reg, Write_pointer_next, Write_pointer_after;
	assign WR_en = Write & (~FIFO_Full);	// FIFO full thi khong write duoc
	
	always @(posedge Clk, posedge Reset)
		begin
			if (Reset)
				Write_pointer_reg <= 0;
			else
				Write_pointer_reg <= Write_pointer_next;
		end
	always @*
		begin
			Write_pointer_next <= Write_pointer_reg;
			if (WR_en)
				begin
					Write_pointer_after = Write_pointer_reg + 1'b1;
					Write_pointer_next <= Write_pointer_after;
				end
		end
	assign Write_pointer = Write_pointer_reg;
	assign Write_addr = Write_pointer_reg [4:0];
	
endmodule
