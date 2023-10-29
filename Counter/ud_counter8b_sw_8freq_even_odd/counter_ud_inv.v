`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:43 11/16/2021 
// Design Name: 
// Module Name:    counter_ud_inv 
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
module counter_ud_inv
	#(parameter N = 8)
	(input clk, reset,ud,inv,oe,
	output [7:0] q
    );
// signal declaration
	reg [N-1:0] r_reg;
	wire [N-1:0] r_next;
// body, register
always @(posedge clk, posedge reset)
	if (reset)
		r_reg <= 0;
	else
		r_reg <= r_next;
// next state logic

// dem len hoac xuong, dem so chan hoac so le
assign r_next = (ud == 1)  ?  
( (oe==1) ? ((r_reg%2==0) ? r_reg+2 : r_reg+1) : ((r_reg%2==0) ? r_reg+1 : r_reg+2) )  :  
( (oe==1) ? ((r_reg%2==0) ? r_reg-2 : r_reg-1) : ((r_reg%2==0) ? r_reg-1 : r_reg-2) ) ; 

// dem len hoac xuong, dem chan hoac dem le
//assign r_next = (ud == 1) ? ((oe==1)? r_reg+2 : r_reg+1) : ((oe==1)? r_reg-2 : r_reg-1) ;
               
assign q = (inv == 1) ? r_reg : ~r_reg;
endmodule
