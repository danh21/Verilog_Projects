`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:17:41 10/31/2021 
// Design Name: 
// Module Name:    bcd_to_led7seg_decoder 
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
module bcd_to_led7seg_decoder(
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
		6: y = 8'b01111101;
		7: y = 8'b00000111;
		8: y = 8'b01111111;
		9: y = 8'b01101111;
		default: y = 0;
	endcase
endmodule
