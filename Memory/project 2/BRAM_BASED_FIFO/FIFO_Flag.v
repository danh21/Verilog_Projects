`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:32:21 08/04/2021 
// Design Name: 
// Module Name:    FIFO_Flag 
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
module FIFO_Flag	// slide 21
	(
	 input [5:0] Write_pointer, Read_pointer,
	 output reg FIFO_Full, FIFO_Empty
   );
	wire Flag_bit_comp, Pointer_equal;
	assign Flag_bit_comp = Write_pointer[5] ^ Read_pointer[5];	//xor (full thi khong write, empty thi khong read ) (khac nhau se bang 1)
	assign Pointer_equal = (Write_pointer[4:0] - Read_pointer[4:0]) ? 1'b0 : 1'b1;
	always @*
		begin
			FIFO_Full = Flag_bit_comp & Pointer_equal;
			FIFO_Empty = ~(Flag_bit_comp) & Pointer_equal;
 		end
	
endmodule
