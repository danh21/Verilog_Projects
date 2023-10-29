`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:17 10/31/2021 
// Design Name: 
// Module Name:    bcd_to_led7seg_anode_decoder 
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
module bcd_to_led7seg_anode_decoder(
	input [3:0] w,
	output reg [7:0] y
    );
always @*
	case (w)
		0: y = 8'b11000000;
		1: y = 8'b11111001;
		2: y = 8'b10100100;
		3: y = 8'b10110000;
		4: y = 8'b10011001;
		5: y = 8'b10010010;
		6: y = 8'b10000011;
		7: y = 8'b11111000;
		8: y = 8'b10000000;
		9: y = 8'b10011000;
		10: y = 8'b10100111;
		11: y = 8'b10110011;
		12: y = 8'b10011101;
		13: y = 8'b10010110;
		14: y = 8'b10000111;
		15: y = 8'b11111111;
		default: y = 8'bx;
	endcase

endmodule
