`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:55:59 08/03/2021
// Design Name:   UART_comp
// Module Name:   D:/cd/thiet ke he thong va vi mach/PONG CHU/UART/UART RECEIVING SUBSYSTEM/project 2/UART_RECEIVER_COMPLETE/UART_comp_tb.v
// Project Name:  UART_RECEIVER_COMPLETE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: UART_comp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module UART_comp_tb;
  parameter clock = 100;
  parameter bit_period = 8000; //1 bit = 80 xung clk
	// Inputs
	reg clk;
	reg reset;
	reg rx_data;

	// Outputs
	wire s_tick;
	wire [7:0] dout;
	wire rx_ctrl;
	wire empty;
	wire full;

	// Instantiate the Unit Under Test (UUT)
	UART_comp uut (
		.clk(clk), 
		.reset(reset), 
		.rx_data(rx_data), 
		.s_tick(s_tick), 
		.dout(dout), 
		.rx_ctrl(rx_ctrl), 
		.empty(empty), 
		.full(full)
	);
	
//Tao task de thuc hien gui du lieu cho bo receiver theo toc do baud
  task UART_SEND_DATA;
    input [7:0] i_Data;
    integer     ii;
    begin
       
			// Send Start Bit
			rx_data <= 1'b0;
			#(bit_period);
			 
			// Send Data Byte
			for (ii=0; ii<8; ii=ii+1)
			  begin
				 rx_data <= i_Data[ii];
				 #(bit_period);
			  end
			 
			// Send Stop Bit
			rx_data <= 1'b1;
			#(bit_period);
     end
  endtask 

always
    #(clock/2) clk = ~clk;
 
  // Main Testing:
  initial
    begin
      clk = 0;
		reset = 1;
		rx_data = 1'b1;
		#1000;
		reset = 0;
      @(posedge clk);
      UART_SEND_DATA(8'hCD);
	
    end
	 
endmodule

