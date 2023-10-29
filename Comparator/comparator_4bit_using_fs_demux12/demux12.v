`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:01 11/01/2021 
// Design Name: 
// Module Name:    demux12 
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
module demux12(
	input i,s,
	output reg y1,y2
    );
always @*
	if (~s)
		begin
			y1 = i;
			y2 = 0;
		end
	else
		begin
			y2 = i;
			y1 = 0;
		end

endmodule
