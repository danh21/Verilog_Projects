`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:31:57 10/31/2021 
// Design Name: 
// Module Name:    bcd_to_led7seg_cathode_decoder 
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
module bcd_to_led7seg_cathode_decoder(
	input [3:0] w,
	output reg [7:0] y
    );
always @*
	case (w)
		0: y = 8'b00111111;
		1: y = 8'b00000110;
		2: y = 8'b01011011;
		3: y = 8'b01001111;
		4: y = 8'b01100110;
		5: y = 8'b01101101;
		6: y = 8'b01111100;
		7: y = 8'b00000111;
		8: y = 8'b01111111;
		9: y = 8'b01100111;
		10: y = 8'b01011000;
		11: y = 8'b01001100;
		12: y = 8'b01100010;
		13: y = 8'b01101001;
		14: y = 8'b01111000;
		15: y = 8'b00000000;
		default: y = 8'bx;
	endcase
endmodule
