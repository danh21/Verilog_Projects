`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:18:52 08/03/2021 
// Design Name: 
// Module Name:    UART_receiver 
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
module UART_receiver(
	input wire clk, reset,
	input wire rx_data, s_tick,
	output wire rx_ctrl,
	output wire [7:0] dout
	);

	localparam [1:0]
		S_IDLE   = 2'b00,
		S_START 	= 2'b01,
		S_DATA   = 2'b11,
		S_STOP   = 2'b10;

	reg [1:0] current_state, next_state;
	reg [7:0] r_dout;
	reg [3:0] r_count;
	reg       r_rx_ctrl;
	reg 	    r_rx_data;
	reg [2:0] r_check_8bit;

	//GHI DATA NHAN VAO THANH GHI
	always @(posedge clk)
		begin
			r_rx_data <= rx_data;
		end
				
	//THANH GHI TRANG THAI current_state
	always @(posedge clk, posedge reset)
		begin
			if (reset)
				current_state <= S_IDLE;
			else 
				current_state <= next_state;
		end
		
	//TIEN TRINH TRONG MOI TRANG THAI current_state
	always @(posedge clk)
		case(current_state [1:0])
			S_IDLE: 
				begin
					r_rx_ctrl <= 0;
					r_count <= 0;
					r_check_8bit <= 0;
					if (r_rx_data == 1'b0)  ///start bit = 0 xac nhan
						next_state <= S_START;
					else 
						next_state <= S_IDLE;
				end
			
			S_START:
				begin
					if (s_tick)	//baud rate (tick)
						if (r_count == 7) //check giua bit bat dau de dam bao no van la 0
							begin	
								if (r_rx_data == 1'b0)
									begin
										next_state <= S_DATA;
										r_count <= 0;      //xac dinh duoc bit bat dau thi reset r_count
									end
								else next_state <= S_IDLE;
							end
						else 
							begin
								r_count <= r_count + 1'b1;
								next_state <= S_START;
							end		
				end
			
			S_DATA:
				begin
					if (s_tick)
						if (r_count == 15)
							begin
								r_count <= 0;
								r_dout [r_check_8bit] <= r_rx_data;
								if (r_check_8bit == 3'b111)       //ktr xem truyen du 8 bit chua
									begin
										next_state <= S_STOP;
										r_check_8bit <= 0;
									end
								else
									begin
										r_check_8bit <= r_check_8bit + 1'b1;
										next_state <= S_DATA;
									end
							end
						else
							begin
								r_count <= r_count + 1'b1;
								next_state <= S_DATA;
							end	
				end
			
			S_STOP:
				begin
					if (s_tick)
						if (r_count == 15)
							begin
								r_rx_ctrl <= 1;
								r_count <= 0;
								next_state <= S_IDLE;
							end
						else
							begin
								r_count <= r_count + 1'b1;
								next_state <= S_STOP;
							end
				end
			
			default: next_state <= S_IDLE;
		endcase
	assign rx_ctrl = r_rx_ctrl;
	assign dout = r_dout;

endmodule

