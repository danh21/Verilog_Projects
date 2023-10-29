`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:00:33 05/19/2021
// Design Name:   priority_encoder_4_2
// Module Name:   D:/cd/thiet ke he thong va vi mach/priority_encoder_4_2/priority_encoder_4_2_tb.v
// Project Name:  priority_encoder_4_2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: priority_encoder_4_2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module priority_encoder_4_2_tb;

	// Inputs
	reg [3:0] a;

	// Outputs
	wire [1:0] y;

	// Instantiate the Unit Under Test (UUT)
	priority_encoder_4_2 uut (
		.a(a), 
		.y(y)
	);

	initial begin
		a=4'd0;
		#50;	
		a=4'd1;
		#50;
		a=4'd2;
		#50;
		a=4'd3;
		#50;
		a=4'd4;
		#50;
		a=4'd5;
		#50;
		a=4'd6;
		#50;
		a=4'd7;
		#50;
		a=4'd8;
		#50;
		a=4'd9;
		#50;
		a=4'd10;
		#50;
		a=4'd11;
		#50;
		a=4'd12;
		#50;
		a=4'd13;
		#50;
		a=4'd14;
		#50;
		a=4'd15;
		#50;
		$stop;

	end
      
endmodule

