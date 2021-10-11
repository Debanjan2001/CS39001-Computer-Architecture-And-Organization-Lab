`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:39:34 09/26/2021
// Design Name:   mux2to1
// Module Name:   /home/ise/shared_xlnx/Asgn5_Q1/test_mux2to1.v
// Project Name:  Asgn5_Q1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux2to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_mux2to1;

	// Inputs
	reg a, b, sel;
	
	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux2to1 uut (
		sel, a, b, out
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		$monitor("a = %b, b = %b, sel = %b, out = %b", a, b, sel, out);
		#1 a = 1'b1; b = 1'b0; sel = 1'b1;
		#1 a = 1'b1; b = 1'b0; sel = 1'b0;
		#1 a = 1'b0; b = 1'b1; sel = 1'b1;
		#1 a = 1'b0; b = 1'b1; sel = 1'b0;
	 
		// Add stimulus here
	end
      
endmodule

