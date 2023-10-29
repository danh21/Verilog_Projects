`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:16 06/26/2021 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder		//slide Digitsl System Design_with Verilog HDL_pub trang 80
	(		
	input A,B,Cin,
	output S,Cout
   );
	wire w1,w2,w3;
	
	half_adder HA1 (A,B,w1,w2);
	half_adder HA2 (Cin,w1,S,w3);
	or carry (Cout,w2,w3);
	
endmodule
