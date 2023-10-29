`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:04:54 08/03/2021 
// Design Name: 
// Module Name:    Transmitter_subsystem 
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
module Transmitter_subsystem(tx,clk,wd,wr,full,rs,EMPTY,fsh,str,rd);
	input wire clk,wr,rs;
	input wire [7:0] wd;
	output wire full,tx,EMPTY,fsh,str,rd;
	wire [7:0] net;
	wire d;
	FIFO B1(.wd(wd),.wr(wr),.full(full),.empty(EMPTY),.rd(rd),.r(net),.rs(rs));
	Controller B2(.fsh(fsh),.enb(d),.str(str),.rd(rd),.empty(EMPTY),.clk(clk));
	Transmitter B3(.tx(tx),.clk(clk),.str(str),.enable(d),.fsh(fsh),.data(net));
endmodule
