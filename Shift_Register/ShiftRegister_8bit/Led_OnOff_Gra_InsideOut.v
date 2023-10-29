`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:05:31 01/01/2022 
// Design Name: 
// Module Name:    Led_OnOff_Gra_InsideOut 
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
module Led_OnOff_Gra_InsideOut(
	input clk, reset,
	output [7:0] q 
    );
	wire s_in;
shift_register_8b_SIPO_2 SIPO4(clk, 1'b1, reset, s_in, q);
assign s_in = ~q[7];
endmodule
