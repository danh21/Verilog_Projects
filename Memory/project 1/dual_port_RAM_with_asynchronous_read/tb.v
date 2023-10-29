`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:13:36 07/04/2021
// Design Name:   xilinx_dual_port_ram_async
// Module Name:   D:/cd/thiet ke he thong va vi mach/dual_port_RAM_with_asynchronous_read/tb.v
// Project Name:  dual_port_RAM_with_asynchronous_read
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: xilinx_dual_port_ram_async
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg we;
	reg [5:0] addr_a;
	reg [5:0] addr_b;
	reg [7:0] din_a;

	// Outputs
	wire [7:0] dout_a;
	wire [7:0] dout_b;

	// Instantiate the Unit Under Test (UUT)
	xilinx_dual_port_ram_async uut (
		.clk(clk), 
		.we(we), 
		.addr_a(addr_a), 
		.addr_b(addr_b), 
		.din_a(din_a), 
		.dout_a(dout_a), 
		.dout_b(dout_b)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		we = 0;
		addr_a = 6'b000000;
		addr_b = 6'b000000;
		din_a = 8'b00000000;
		#100;
		
		we = 0;
		addr_a = 6'b000001;
		addr_b = 6'b000001;
		din_a = 8'b00000000;
		#100;
		
		we = 1;
		addr_a = 6'b000011;
		addr_b = 6'b000011;
		din_a = 8'b00000001;
		#100;
		
		we = 1;
		addr_a = 6'b000110;
		addr_b = 6'b000010;
		din_a = 8'b00000001;
		#100;
		
		we = 1;
		addr_a = 6'b000111;
		addr_b = 6'b000111;
		din_a = 8'b00001011;
		#100;
		
		we = 1;
		addr_a = 6'b001111;
		addr_b = 6'b001111;
		din_a = 8'b00010011;
		#100;
		
		$stop;
	end
	always #5 clk=~clk;
      
endmodule

