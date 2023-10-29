`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:00:07 08/03/2021 
// Design Name: 
// Module Name:    Transmitter 
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
module Transmitter 
#(parameter dbit = 8, stop = 1) //so bit data & bit stop
(tx,data,str,fsh,clk,enable);
	input [dbit-1:0] data;
	input clk,enable,str;
	output reg tx,fsh;
	reg [8:0] c;
	reg [dbit-1:0] d;
	always @(posedge clk)
		if(enable)
		case (str) 	//enable: tin hieu cho phep cap tu FIFO
			1'b1:		//start: khoi tao va truyen bit start
				begin
					d <= data;
					c <= 9'b111111110;     //bien dem databit & stop bit
					tx <= 0;
					fsh <= 0;	//finish: tin hieu bao hoan thanh phat 1 frame data
				end
			1'b0:		//truyen data
				begin
					if (c[8])  //data tu fifo duoc truyen noi tiep qua ngo ra tx
						begin
							tx <= d[0]; 
							d <= d >> 1;
							c <= c << 1;
						end
					else 	//chen them bit stop
						begin
							tx <= 1;
							if(tx)
								fsh <= 1;//tin hieu fsh len 1 thong bao hoan thanh viec truyen toi fifo, fifo tao tin hieu enable va xuat frame du lieu tiep theo
						end
				end
		endcase
endmodule