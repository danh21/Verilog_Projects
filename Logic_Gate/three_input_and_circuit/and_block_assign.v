`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:01 07/20/2021 
// Design Name: 
// Module Name:    and_block_assign 
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
module and_block_assign		// trang 50 
	(
	 input wire a, b, c,
	 output reg y
   );
	
	always @*
	begin
		y = a;
		y = y & b;
		y = y & c;
	end

endmodule
