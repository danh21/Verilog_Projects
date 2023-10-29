`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:12:04 05/02/2021 
// Design Name: 
// Module Name:    heartbeat-circuit 
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
module segment7(cnt,seg);
	input[3:0] cnt;
	output[6:0] seg;
	reg[6:0] seg;
	
	always@(cnt)
		begin
			case(cnt)	// file asm 
			0:  seg = 7'b1111111;
			1:  seg = 7'b1111001;
			2:  seg = 7'b1001111;
			3:  seg = 7'b1111111;
			4:  seg = 7'b1111111;
			5:  seg = 7'b1001111;
			6:  seg = 7'b1111001;
			7:  seg = 7'b1111111;
			8:  seg = 7'b1001111;
			9:  seg = 7'b1111111;
			10: seg = 7'b1111111;
			11: seg = 7'b1111001;
			default: seg =7'bxxxxxxx;
			endcase
		end
endmodule
