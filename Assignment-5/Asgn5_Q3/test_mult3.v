`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Pritkumar Godhani [19CS10048], Debanjan Saha [19CS30014] 
//  
// Module Name: Testbench for Multiple of Three Detector
// Project Name: Assignment-5 Question 3
//
//////////////////////////////////////////////////////////////////////////////////

module test_mult3;

	// Inputs
	reg clk;
	reg rst;
	reg [15:0] data;
	reg load;
	reg on;

	// Outputs
	wire out_bit;
	wire serial_out;
	wire [15:0] reg_temp;
	
	// Instantiate the Left Shift Register to feed bits one by one
	ShiftRegLeft sreg(serial_out, reg_temp, data, clk, load);
	
	// Instantiate the Unit Under Test (UUT)
	MultThreeDetector uut (
		.out_bit(out_bit), 
		.in_bit(serial_out), 
		.clk(clk), 
		.rst(rst)
	);
	
	// Start the Clock
	always #1 clk = ~clk;
	
	// Print the output of the FSM once signal on is active
	always @(negedge clk) 
		if(on) $display("register temp = %b, output = %b", reg_temp, out_bit);
	
	initial begin
		// Initialize Inputs
		on = 1'b0;
		clk = 1'b0;
		rst = 1'b0;
		data = 16'b0;
		load = 1'b0;
		
		// Load the input on the shift register, keep resetting the FSM before Shift Register finishes loading
		#1 data = 16'b1111; load = 1'b1; rst = 1'b1;
		
		// Once loaded, switch rst to 0 and FSM starts
		#5 load = 1'b0; rst = 1'b0; on = 1'b1;

		// finish after 8 bits have been shifted
      #33 $finish;
		// Add stimulus here

	end
      
endmodule

