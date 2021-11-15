`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Bit Serial Adder testbench
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module test_bitserialadder;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg clk;
	reg load;
	reg rst;

	// Outputs
	wire [7:0] sum;
	wire [7:0] shiftA;
	wire [7:0] shiftB;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	BitSerialAdder uut (
		.sum(sum), 
		.nextcarry(c_out), 
		.A_shiftdata(shiftA),
		.B_shiftdata(shiftB),
		.A(A), 
		.B(B), 
		.clk(clk), 
		.load(load), 
		.rst(rst)
	);
	always #2 clk = ~clk;
	initial begin
		// Initialize Inputs
		A = 8'b0;
		B = 8'b0;
		clk = 1'b0;
		load = 1'b0;
		rst = 1'b1;
		
		// Add stimulus here
		$monitor("clk = %b, ShiftRegisterA = %b, ShiftRegisterB = %b, Carry Out = %b, Sum = %b", clk, shiftA, shiftB, c_out, sum);
		#4 begin
		A = 8'b11001101; B = 8'b11000100; load = 1'b1; rst = 1'b0;
		$display("Loading...");
		end
		#6 begin
		$display("Loading Done");
		load = 1'b0;
		end
		#36 $finish;
	end
      
endmodule

