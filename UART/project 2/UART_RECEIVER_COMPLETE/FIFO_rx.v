`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:38:19 08/03/2021 
// Design Name: 
// Module Name:    FIFO_rx 
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
module FIFO_rx
	#(parameter w=8,s=4)
	(empty,full,rd,wr,rs,wd,r);

	input wire [w-1:0]wd;
	input rd,wr,rs;
	output reg empty,full;
	output reg[w-1:0]r;
	reg [w-1:0] mem [4**s-1:0];
	reg[s-1:0] wpt;
	reg[s-1:0] rpt;

	always @ (posedge rd, posedge rs,posedge wr)
		begin 
			if(rs)
				begin
					empty <= 1;
					full <= 0;
					wpt <= 0;
					rpt <= 0;
				end
			else if (rd)
				begin
					if(rpt == wpt)
						empty <= 1;
					if (~empty)
						begin
							r <= mem[rpt];
							rpt <= rpt + 1'b1;
							full <= 0;
						end
				end
			else if(wr)
				begin
					if (wpt + 1 == rpt)
						full <= 1;
					if (~full)
						begin
							mem[wpt] <= wd;
							wpt <= wpt + 1'b1;
							empty <= 0;
						end
				end
		end

endmodule

