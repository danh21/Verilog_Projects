`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:57:28 07/28/2021
// Design Name:   xilinx_one_port_ram_sync
// Module Name:   D:/cd/thiet ke he thong va vi mach/Pong chu/XlLlNX SPARTAN-3 SPECIFIC MEMORY/single_port_RAM_with_synchronous_read/xilinx_one_port_ram_sync_tb.v
// Project Name:  single_port_RAM_with_synchronous_read
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: xilinx_one_port_ram_sync
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module xilinx_one_port_ram_sync_tb;

	// Inputs
	reg clk;
	reg we;
	reg [11:0] addr;
	reg [7:0] din;

	// Outputs
	wire [7:0] dout;

	// Instantiate the Unit Under Test (UUT)
	xilinx_one_port_ram_sync uut (
		.clk(clk), 
		.we(we), 
		.addr(addr), 
		.din(din), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		we = 0;
		addr = 12'b000000000001;
		din = 8'b00000001;
		#100;
		
		we = 1;
		addr = 12'b000000000001;
		din = 8'b00000011;
		#100;
		
		addr = 12'b111111111111;
		din = 8'b00001111;
		#100;

		$stop;
	end
      always #5 clk = ~clk;
endmodule

