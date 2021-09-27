`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:23:44 09/27/2021
// Design Name:   SequentialComparator
// Module Name:   /home/ise/shared_xlnx/Asgn5_Q4/test_seq_comp.v
// Project Name:  Asgn5_Q4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SequentialComparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_seq_comp;

	// Inputs
	reg clk;
	reg rst;
	reg rst2;
	reg [7:0] data1, data2;
	reg load;
	reg on;

	// Outputs
	wire [2:0] out;
	wire dout1, dout2;
	
	ShiftRegLeft a(dout1, data1, clk, rst2, load);
	ShiftRegLeft b(dout2, data2, clk, rst2, load);

	// Instantiate the Unit Under Test (UUT)
	SequentialComparator uut (
		.a_bit(dout1), 
		.b_bit(dout2), 
		.out(out), 
		.clk(clk), 
		.rst(rst)
	);
	always #1 clk = ~clk;
	always @ (negedge clk)
		if(on) $display("LEG = %b", out);
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1'b0;
		rst2 = 1'b0;
		data1 = 8'b0;
		data2 = 8'b0;
		load = 1'b0;
		on = 1'b0;
		

		// Wait 100 ns for global reset to finish
		#1 data1 = 8'b00001001; data2 = 8'b00001011; load = 1'b1; rst = 1'b1;
		#5 load = 1'b0; rst = 1'b0; 
		#0.5 on = 1'b1;
		
		
       
		#20 $finish;

	end
      
endmodule

