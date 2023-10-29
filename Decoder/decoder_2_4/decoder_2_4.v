`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:59 07/20/2021 
// Design Name: 
// Module Name:    decoder_2_4 
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
module decoder_2_4		// trang 53
	(
	 input wire [1:0] a,
	 input wire en,
	 output reg [3:0] y
   );
	
	always @*
		if (en == 1'b0)
			y = 4'b0000;
		else if (a == 2'b00)
			y = 4'b0001;
		else if (a == 2'b01)
			y = 4'b0010;
		else if (a == 2'b10)
			y = 4'b0100;
		else
			y = 4'b1000;
			
endmodule
