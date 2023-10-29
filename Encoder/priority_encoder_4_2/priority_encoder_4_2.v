`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:48:46 05/19/2021 
// Design Name: 
// Module Name:    priority_encoder_4_2 
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
module priority_encoder_4_2(
input [3:0] a,
output reg [1:0] y
    );
always @(*)
casex (a)
4'b0001: y=2'b00;
4'b001x: y=2'b01;
4'b01xx: y=2'b10;
4'b1xxx: y=2'b11;
default: y=2'bxx;
endcase

endmodule
