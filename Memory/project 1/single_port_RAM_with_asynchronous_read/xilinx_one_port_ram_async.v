`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:21:22 07/03/2021 
// Design Name: 
// Module Name:    xilinx_one_port_ram_async 
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
module xilinx_one_port_ram_async
  #(
   parameter ADDR_WIDTH = 8,
				 DATA_WIDTH = 1
   )
   (
   input wire clk,we,
	input wire [ADDR_WIDTH-1 : 0] addr,
	input wire [DATA_WIDTH-1 : 0] din,
	output wire [DATA_WIDTH-1 : 0] dout
	);
	
	//signal declaration 
	reg [DATA_WIDTH-1 : 0] ram [2**ADDR_WIDTH-1 : 0];
	
	//body
	always @(posedge clk)
		if (we) //write operation
			ram[addr] <= din;
	//read operation
	assign dout = ram[addr];
			
endmodule
