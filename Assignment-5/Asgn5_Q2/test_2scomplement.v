`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:34:54 09/26/2021
// Design Name:   TwosComplementor
// Module Name:   /home/ise/shared_xlnx/Asgn5_Q2/test_2scomplement.v
// Project Name:  Asgn5_Q2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TwosComplementor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_2scomplement;

	// Inputs
	reg clk;
	reg rst1, rst2;
	reg [7:0] data1;
	reg load;

	// Outputs
	wire out_bit;
	wire dout1;
		
	ShiftRegRight sr1(dout1, data1, clk, rst2, load);
	
	// Instantiate the Unit Under Test (UUT)
	TwosComplementor uut (
		.in_bit(dout1), 
		.out_bit(out_bit), 
		.clk(clk), 
		.rst(rst1)
	);
	always #1 clk = ~clk;
	always #2 $display("out-bit = %b", out_bit);
	
	initial begin
		// Initialize Inputs
		data1 = 8'b0;
		clk = 1'b0;
		rst1 = 1'b0;
		rst2 = 1'b0;
		load = 1'b0;

		// Add stimulus here
		
		#1 data1 = 8'b00100100; load = 1; rst1 = 1;
		#5 load = 0; rst1 = 0;
	end
      
endmodule

