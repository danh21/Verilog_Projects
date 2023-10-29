`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:13:13 12/02/2021 
// Design Name: 
// Module Name:    IC74595 
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
module IC74595(
	input SRCLK, SER, RCLK, SRCLR, OE_bar,
	output Qa, Qb, Qc, Qd, Qe, Qf, Qg, Qh, Qh_bar
	);
	wire [15:0] q, qbar;
	wire OE, SRCLK_in, RCLK_in;
assign OE = ~OE_bar;
assign SRCLK_in = ~SRCLK;
assign RCLK_in = ~RCLK;
FFD D1 (SRCLK_in, SRCLR, SER, q[0], qbar[0]);
FFRS RS1 (SRCLK_in, SRCLR, q[0], qbar[0], q[1], qbar[1]);
FFRS RS2 (SRCLK_in, SRCLR, q[1], qbar[1], q[2], qbar[2]);
FFRS RS3 (SRCLK_in, SRCLR, q[2], qbar[2], q[3], qbar[3]);
FFRS RS4 (SRCLK_in, SRCLR, q[3], qbar[3], q[4], qbar[4]);
FFRS RS5 (SRCLK_in, SRCLR, q[4], qbar[4], q[5], qbar[5]);
FFRS RS6 (SRCLK_in, SRCLR, q[5], qbar[5], q[6], qbar[6]);
FFRS RS7 (SRCLK_in, SRCLR, q[6], qbar[6], q[7], qbar[7]);
FFRS RS8 (RCLK_in, , q[0], qbar[0], q[8], qbar[8]);
FFRS RS9 (RCLK_in, , q[1], qbar[1], q[9], qbar[9]);
FFRS RS10 (RCLK_in, , q[2], qbar[2], q[10], qbar[10]);
FFRS RS11 (RCLK_in, , q[3], qbar[3], q[11], qbar[11]);
FFRS RS12 (RCLK_in, , q[4], qbar[4], q[12], qbar[12]);
FFRS RS13 (RCLK_in, , q[5], qbar[5], q[13], qbar[13]);
FFRS RS14 (RCLK_in, , q[6], qbar[6], q[14], qbar[14]);
FFRS RS15 (RCLK_in, , q[7], qbar[7], q[15], qbar[15]);
bufif1 b1 (Qa, ~qbar[8], OE);
bufif1 b2 (Qb, ~qbar[9], OE);
bufif1 b3 (Qc, ~qbar[10], OE);
bufif1 b4 (Qd, ~qbar[11], OE);
bufif1 b5 (Qe, ~qbar[12], OE);
bufif1 b6 (Qf, ~qbar[13], OE);
bufif1 b7 (Qg, ~qbar[14], OE);
bufif1 b8 (Qh, ~qbar[15], OE);
assign Qh_bar = ~qbar[7];

endmodule
