`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:42:12 12/10/2021 
// Design Name: 
// Module Name:    FSM 
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
module FSM(
	input clk, rst,
	input i, 
	output j 
	);
//symbolic state declaration
localparam [1:0] q0 = 2'b00, q1 = 2'b01, q2=2'b10;
// signal declaration
reg [1:0] state_reg, state_next;
// state register
always @ (posedge clk ,negedge rst)
	if (~rst)
		state_reg <= q0;
	else
		state_reg <= state_next;
//next_state logic
always @*
	case (state_reg)
		q0: if(~i)
				state_next = q1;
			else
				state_next = q2;
		q1: if(~i)
				state_next = q1;
			else
				state_next = q2;
		q2: if(~i)
				state_next = q1;
			else
				state_next = q2;
		default: state_next = q0;
	endcase
//Mealy outputlogic
assign j = (state_reg==q1)&i || (state_reg==q2)&~i || (state_reg==q0)&~i&i ;
endmodule
