`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:16:20 07/04/2021 
// Design Name: 
// Module Name:    unsigned_mult 
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
module unsigned_mult( 		//trang 56 sách Digital Computer Arithmetic Datapath Design Using Verilog HDL
	input [7:0] a,b,
	output [15:0] out
   );
	assign out = a*b;

endmodule
