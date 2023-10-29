`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:58 07/17/2021 
// Design Name: 
// Module Name:    eq1 
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
module eq1		// trang 2, 8
	// I/O ports
	(
	 input wire i0, i1,
	 output wire eq	
   );
	
	// signal declaration
	wire p0, p1;
	
	// body	
	// product terms
	assign p0 = ~i0 & ~i1;
	assign p1 = i0 & i1;
	// sum of two product terms
	assign eq = p0 | p1;
	
endmodule
