`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:45:03 05/02/2021
// Design Name:   segment7
// Module Name:   D:/cd/thiet ke he thong va vi mach/heartbeat_circuit/heartbeat_circuit_tb.v
// Project Name:  heartbeat_circuit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: segment7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module heartbeat_circuit_tb;
	reg [3:0] cnt;
	wire [6:0] seg;
	integer i;

	// Instantiate the Unit Under Test (UUT)
	segment7 uut (
		.cnt(cnt), 
		.seg(seg)
	);

initial begin
	for(i=0; i<12; i=i+1)
		begin
			cnt = i;
			#10;
			if (i==11) 
			i = -1 ;
		end
end

endmodule


