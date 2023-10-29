`timescale 1ns/10ps

module UART_RX_TB();

  // testbench dùng 25MHz
  // Toc do baud=115200
  // 25000000 / 115200 = 217 Clocks/Bit.
  parameter c_CLOCK_PERIOD_NS = 40;
  parameter c_CLKS_PER_BIT    = 217;
  parameter c_BIT_PERIOD      = 8600;
  
  reg r_Clock = 0;
  reg r_RX_Serial = 1;
  wire [7:0] w_RX_Byte;
  
	wire x;
	reg [6:0] z;
  // nhap bit dau vào
  task UART_WRITE_BYTE;
    input [7:0] i_Data;
    integer     ii;
    begin
      
      // truyen vao va gui bit bat dau
      r_RX_Serial <= 1'b0;
      #(c_BIT_PERIOD);
      #1000;
      
      // gui du lieu
      for (ii=0; ii<8; ii=ii+1)
        begin
          r_RX_Serial <= i_Data[ii];
          #(c_BIT_PERIOD);
        end
      
      // gui bit ket thuc
      r_RX_Serial <= 1'b1;
      #(c_BIT_PERIOD);
     end
  endtask 
  
  
  UART_RX #(.CLKS_PER_BIT(c_CLKS_PER_BIT)) UART_RX_INST
    (.i_Clock(r_Clock),
     .i_RX_Serial(r_RX_Serial),
     .o_RX_DV(),
     .o_RX_Byte(w_RX_Byte)
     );
	  
	hexto7segment# 7segment
	(.x(x), .z(z));
  
  always
    #(c_CLOCK_PERIOD_NS/2) r_Clock <= !r_Clock;//tao xung clock

  
  // Main Testing:
  initial
    begin
      //gui lenh den UART
      @(posedge r_Clock);
      UART_WRITE_BYTE(8'h35);
      @(posedge r_Clock);
            
      //kiem tra xem da nhan dung du lieu chua
      if (w_RX_Byte == 8'h35)//35:0011 0101
			begin
				$display("Test Passed - Correct Byte Received");
			end
      else
			begin
				$display("Test Failed - Incorrect Byte Received");
			end
    $finish();
    end
  
  initial 
  begin
    // xuat tin hieu sang EPWave
    $dumpfile("dump.vcd");
    $dumpvars(0);
  end
  
endmodule