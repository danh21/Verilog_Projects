`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:19 11/04/2021 
// Design Name: 
// Module Name:    ic_74151 
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
module ic_74151(
	input g,a,b,c,
	input [7:0] d,
	output reg y,w
    );
always @*
	if (~g)
		if (a==0 && b==0 && c==0)
			begin
				y = d[0];
				w = ~d[0];
			end
		else if (a==1 && b==0 && c==0)
			begin
				y = d[1];
				w = ~d[1];
			end
		else if (a==0 && b==1 && c==0)
			begin
				y = d[2];
				w = ~d[2];
			end
		else if (a==1 && b==1 && c==0)
			begin
				y = d[3];
				w = ~d[3];
			end
		else if (a==0 && b==0 && c==1)
			begin
				y = d[4];
				w = ~d[4];
			end
		else if (a==1 && b==0 && c==1)
			begin
				y = d[5];
				w = ~d[5];
			end
		else if (a==0 && b==1 && c==1)
			begin
				y = d[6];
				w = ~d[6];
			end
		else 
			begin
				y = d[7];
				w = ~d[7];
			end
	else 
		begin
			y = 0;
			w = 1;
		end
endmodule
