`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: Testbench for PIPO Shift Register 8 bit
// Project Name: Assignment-6 Question 3
//
//////////////////////////////////////////////////////////////////////////////////

module test_shiftreg8_pipo;

	// Inputs
	reg [7:0] in;
	reg clk;
	reg load;
	reg rst;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	shiftreg8_pipo uut (
		.out(out), 
		.in(in), 
		.clk(clk), 
		.load(load), 
		.rst(rst)
	);
	
   always #1 clk = ~clk;

   always @(negedge clk) 
	$display("in = %b,load = %b, rst = %b, out = %b", in, load, rst, out);

	initial begin
		// Initialize Inputs
		in = 8'd246;
		load = 1'b0;
		clk = 1'b0;
		rst = 1'b0;


		// Wait 5 ns for global reset to finish
		#5;
        
		// Add stimulus here

		#1 load = 1'b1;

		#2 load = 1'b0; 

		#4 $finish;
		
	end
      
endmodule

