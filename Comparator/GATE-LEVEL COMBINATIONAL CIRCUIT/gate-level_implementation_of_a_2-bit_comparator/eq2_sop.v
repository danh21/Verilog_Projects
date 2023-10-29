`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:40 07/18/2021 
// Design Name: 
// Module Name:    eq2_sop 
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
module eq2_sop		// trang 8
	(
	 input wire [1:0] a, b,
	 output wire aeqb
   );
	
	// internal signal declaration
	wire p0, p1, p2, p3;
	
	// sum of product terms
	assign aeqb = p0 | p1 | p2 | p3;
	// product terms
	assign p0 = (~a[1] & ~b[1]) & (~a[0] & ~b[0]);
	assign p1 = (~a[1] & ~b[1]) & (a[0] & b[0]);
	assign p2 = (a[1] & b[1]) & (~a[0] & ~b[0]);
	assign p3 = (a[1] & b[1]) & (a[0] & b[0]);

endmodule
