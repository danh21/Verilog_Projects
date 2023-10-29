`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:26:34 11/04/2021 
// Design Name: 
// Module Name:    flash_adc_2bit 
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
module flash_adc_2bit(
	input [2:0] w,
	output reg [1:0] y
    );
always @*
	case (w)
		3'b000: y = 0;
		3'b001: y = 1;
		3'b011: y = 2;
		3'b111: y = 3;
		default: y = 3'bx;
	endcase
endmodule
