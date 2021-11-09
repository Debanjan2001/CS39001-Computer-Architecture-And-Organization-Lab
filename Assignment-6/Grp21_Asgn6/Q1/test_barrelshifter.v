`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Barrel Shifter testbench (main)
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////

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

