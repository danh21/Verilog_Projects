`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:04:02 07/28/2021
// Design Name:   xilinx_one_port_ram_async
// Module Name:   D:/cd/thiet ke he thong va vi mach/Pong chu/XlLlNX SPARTAN-3 SPECIFIC MEMORY/single_port_RAM_with_asynchronous_read/xilinx_one_port_ram_async_tb.v
// Project Name:  single_port_RAM_with_asynchronous_read
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: xilinx_one_port_ram_async
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module xilinx_one_port_ram_async_tb;

	// Inputs
	reg clk;
	reg we;
	reg [7:0] addr;
	reg [0:0] din;

	// Outputs
	wire [0:0] dout;

	// Instantiate the Unit Under Test (UUT)
	xilinx_one_port_ram_async uut (
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
		addr = 8'b00000000;
		din = 0;
		#100;
		
		we = 1;
		addr = 8'b00000000;
		din = 0;
		#100;

		we = 1;
		addr = 8'b11111111;
		din = 1;
		#100;
		
		$stop;
	end
      always #5 clk = ~clk; 
endmodule

