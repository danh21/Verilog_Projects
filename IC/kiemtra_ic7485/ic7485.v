`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:41:53 11/05/2021 
// Design Name: 
// Module Name:    ic7485 
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
module ic7485(
	input [3:0] a,b,
	input [2:0] cas,
	output reg [2:0] y
    );
always @(a,b,cas)
	begin
		if(a[3]>b[3])
			y=3'b100;
		else if (a[3]<b[3])
			y=3'b010;
		else 
			if(a[2]>b[2])
				y=3'b100;
			else if (a[2]<b[2])
				y=3'b010;
			else
				if (a[1]>b[1])
					y=3'b100;
				else if (a[1]<b[1])
					y=3'b010;
				else 
					if(a[0]>b[0])
						y=3'b100;
					else if(a[0]<b[0])
						y=3'b010;
					else 
					  case(cas)
						  4: y=3'b100;
						  2: y=3'b010;
						  1: y=3'b001;
						  //3: y=3'b001;
						  6: y=3'b000;
						  0: y=3'b110;										  
						  default: y=3'b001;
					  endcase
	 end
endmodule

