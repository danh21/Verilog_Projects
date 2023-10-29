`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:08:55 08/03/2021
// Design Name:   Transmitter_subsystem
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/UART/UART_TRANSMITTING_SUBSYSTEM/sub_tb.v
// Project Name:  UART_TRANSMITTING_SUBSYSTEM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Transmitter_subsystem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sub_tb;

	// Inputs
	reg clk;
	reg [7:0] wd;
	reg wr;
	reg rs;

	// Outputs
	wire tx;
	wire full;
	wire EMPTY;
	wire fsh;
	wire str;
	wire rd;

	// Instantiate the Unit Under Test (UUT)
	Transmitter_subsystem uut (
		.tx(tx), 
		.clk(clk), 
		.wd(wd), 
		.wr(wr), 
		.full(full), 
		.rs(rs), 
		.EMPTY(EMPTY), 
		.fsh(fsh), 
		.str(str), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		wd = 0;
		wr = 0;
		rs = 0;
		#100;

	end
	initial begin
		forever #5 clk = ~clk;
	end
	initial begin
		#2 rs = 1;	//reset => EMPTY=1, full=0, enable=0
		#5 rs = 0;
		#7 wr = 1;
			wd = 8'b01001110;
		#5
			wr = 0;
		#10
			wr = 1;
			wd = 8'b01110110;
		#5
			wr = 0;
		#10
			wr = 1;
			wd = 8'b10110110;
		#5 wr = 0;
	end
      
endmodule

