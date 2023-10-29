`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:25 04/29/2021 
// Design Name: 
// Module Name:    fre_div 
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
module fre_div(clk_NAkHz, reset, clk_AkHz);
	parameter N = 10;		// chia tan so N lan
	input clk_NAkHz, reset;
	output clk_AkHz;
	reg clk_AkHz = 1'b0;
	reg [2:0] counter;

	always@(posedge reset or posedge clk_NAkHz)
	begin
		 if (reset == 1'b1)
			  begin
					clk_AkHz <= 0;
					counter <= 0;
			  end
		 else
			  begin
					counter <= counter + 3'b1;
					if (counter == (N/2)-1)
						 begin
							  counter <= 0;
							  clk_AkHz <= ~clk_AkHz;
						 end
			  end
	end
endmodule   


