`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:19:58 09/29/2021
// Design Name:   ShiftRegRight
// Module Name:   /home/ise/shared_xlnx/Asgn5_Q2/test_shiftreg.v
// Project Name:  Asgn5_Q2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ShiftRegRight
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_shiftreg;

	// Inputs
	reg [15:0] data_in;
	reg clk;
	reg rst;
	reg load;

	// Outputs
	wire out;
	wire [15:0] temp;

	// Instantiate the Unit Under Test (UUT)
	ShiftRegRight uut (
		.out(out), 
		.temp(temp), 
		.data_in(data_in), 
		.clk(clk), 
		.rst(rst), 
		.load(load)
	);
	always #1 clk = ~clk;
	initial begin
		// Initialize Inputs
		data_in = 16'b10100011;
		clk = 0;
		rst = 0;
		load = 0;

		
		$monitor("out = %b", out);
		#2 load = 1;
		#5 load = 0;
		
		#200 $finish;
	end
endmodule

