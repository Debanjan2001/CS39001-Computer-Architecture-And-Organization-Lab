`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:00:04 09/26/2021
// Design Name:   MultThreeDetector
// Module Name:   /home/ise/shared_xlnx/Asgn5_Q3/test_mult3.v
// Project Name:  Asgn5_Q3
// Target Device:  
// Tool versions:  
// Description: Test Fixture Left for Q3.
//
// Verilog Test Fixture created by ISE for module: MultThreeDetector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_mult3;

	// Inputs
	reg in_bit;
	reg clk;
	reg rst1, rst2;
	reg [7:0] data;
	reg load;
	reg on;

	// Outputs
	wire out_bit;
	wire serial_out;
	
	ShiftRegLeft sreg(serial_out, data, clk, rst2, load);
	
	// Instantiate the Unit Under Test (UUT)
	MultThreeDetector uut (
		.out_bit(out_bit), 
		.in_bit(serial_out), 
		.clk(clk), 
		.rst(rst1)
	);
	always #1 clk = ~clk;
	always @(negedge clk) 
		if(on) $display("output = %b", out_bit);
	
	initial begin
		// Initialize Inputs
		on = 1'b0;
		clk = 1'b0;
		rst1 = 1'b0;
		rst2 = 1'b0;
		data = 8'b0;
		load = 1'b0;
		
		#1 data = 8'b00000011; load = 1'b1; rst1 = 1'b1;
		#5 load = 1'b0; rst1 = 1'b0; 
		
		// started shifting, signal on is active so printing starts
		#0.5 on = 1'b1;


		// finish after 8 bits have been shifted
      #18 $finish;
		// Add stimulus here

	end
      
endmodule

