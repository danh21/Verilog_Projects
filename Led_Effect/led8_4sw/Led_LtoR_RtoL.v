`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:11:17 12/02/2021 
// Design Name: 
// Module Name:    Led_LtoR_RtoL 
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
module Led_LtoR_RtoL(
   input clk, reset,
	output [7:0] q
	);
	wire lr, s_in;
Shift_SIPO_1 SIPO1 (clk, reset, s_in, lr,q);
assign lr = (q[7] == 1) ? 1 : ((q[0] == 1) ?0 : lr);
assign s_in = (lr == 1) ? q[0] : q[7] ;
endmodule
