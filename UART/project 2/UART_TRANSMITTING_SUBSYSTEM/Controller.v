`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:59:32 08/02/2021 
// Design Name: 
// Module Name:    Controller 
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
module Controller (fsh,empty,str,rd,enb,clk);
	input wire clk,fsh,empty;
	output reg str,rd,enb;
	reg c;
	always @*
	begin
		case(empty)
			1'b0:
				begin
					enb = 1;	//enable
					if(c)
						begin
							rd = 1;
							str = 1;
							c = 0;
						end
					else
						begin
							rd = 0;
							str = 0;
						end
					if(fsh)
						begin
							rd = 1;
							str = 1;
						end
				end
			1'b1:
				begin
					c = 1;
					enb = 0;
				end
		endcase
	end
endmodule

