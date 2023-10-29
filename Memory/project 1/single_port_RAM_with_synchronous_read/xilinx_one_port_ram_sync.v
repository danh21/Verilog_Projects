`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:20:31 07/04/2021 
// Design Name: 
// Module Name:    xilinx_one_port_ram_sync 
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
module xilinx_one_port_ram_sync
	#(
		parameter ADDR_WIDTH = 12,
					 DATA_WIDTH = 8
    )
	 (
	 input wire clk, 
	 input wire we,
	 input wire [ADDR_WIDTH-1:0] addr,
	 input wire [DATA_WIDTH-1:0] din,
	 output wire [DATA_WIDTH-1:0] dout
	 );
	 
	 //signal declaration
	 reg [DATA_WIDTH-1:0] ram [2**ADDR_WIDTH-1:0];
	 reg [ADDR_WIDTH-1:0] addr_reg;
	 
	 //body
	 always @(posedge clk)
	 begin
		if (we) // write operation
			ram [addr] <= din;
		addr_reg <= addr;
	 end
	 //read operation	
	 assign dout = ram[addr_reg];

endmodule
