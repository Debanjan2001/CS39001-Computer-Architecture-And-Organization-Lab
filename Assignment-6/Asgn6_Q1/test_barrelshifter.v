`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:01:17 10/07/2021
// Design Name:   BarrelShifter
// Module Name:   /home/ise/shared_xlnx/Asgn6_Q1/test_barrelshifter.v
// Project Name:  Asgn6_Q1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BarrelShifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_barrelshifter;

	// Inputs
	reg [7:0] in;
	reg [2:0] shamt;
	reg dir;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	BarrelShifter uut (
		.in(in), 
		.shamt(shamt), 
		.dir(dir), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 8'b0;
		shamt = 3'b0;
		dir = 1'b0;

		$monitor("in = %b, shamt = %b, dir = %b, out = %b", in, shamt, dir, out);
		#10 in = 8'b11001110; shamt = 3'b101; dir = 1'b0;
		#10 in = 8'b11001110; shamt = 3'b011; dir = 1'b1;
		#10 in = 8'b11111111; shamt = 3'b111; dir = 1'b0;
		#10 in = 8'b11111111; shamt = 3'b111; dir = 1'b1;

	end
      
endmodule

