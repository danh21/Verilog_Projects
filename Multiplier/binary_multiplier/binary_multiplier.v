`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:02:59 07/02/2021 
// Design Name: 
// Module Name:    binary_multiplier 
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
module binary_multiplier(			//Digital_Design trang 146
 input [2:0] a,
 input [3:0] b,
 output [6:0] c 
 );
 wire [4:0] y1,y4;
 wire [3:0] y2,y3;
 
 assign y1[0] = a[0]&b[0];
 assign y1[1] = a[0]&b[1];
 assign y1[2] = a[0]&b[2];
 assign y1[3] = a[0]&b[3];
 assign y1[4] = 1'b0;
 assign y2[0] = a[1]&b[0];
 assign y2[1] = a[1]&b[1];
 assign y2[2] = a[1]&b[2];
 assign y2[3] = a[1]&b[3];
 adder_4bit a1 (y1[4:1],y2,1'b0,y4[3:0],y4[4]);
 assign y3[0] = a[2]&b[0];
 assign y3[1] = a[2]&b[1];
 assign y3[2] = a[2]&b[2];
 assign y3[3] = a[2]&b[3];
 assign c[0] = y1[0];
 assign c[1] = y4[0];
 adder_4bit a2 (y4[4:1],y3,1'b0,c[5:2],c[6]);
endmodule
