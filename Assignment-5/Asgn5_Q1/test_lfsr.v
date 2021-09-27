`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:27:09 09/26/2021
// Design Name:   LFSR4Bit
// Module Name:   /home/ise/shared_xlnx/Asgn5_Q1/test_lfsr.v
// Project Name:  Asgn5_Q1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LFSR4Bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_lfsr;

	// Inputs
	reg [3:0] seed;
	reg sel;
	reg clk;
	reg rst;

	// Outputs
	wire [3:0] dff_out;

	// Instantiate the Unit Under Test (UUT)
	LFSR4Bit uut (
		.seed(seed), 
		.sel(sel), 
		.dff_out(dff_out), 
		.clk(clk), 
		.rst(rst)
	);
	
	// Start the clock
	always #1 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		seed = 4'b0; // initial value of seed
		sel = 1'b0;
		clk = 1'b0;
		rst = 1'b0;
		
		// Monitor Statement to print the dff outputs
		$monitor("dff_out = %b", dff_out);
		
		// Load the Seed
		#6 sel = 1'b1; seed = 4'b1111; // initialize seed = 1111 and sel = 1 so seed will be loaded
		// Let the LFSR run
		#10 sel = 1'b0; // sel is set to 0 so LFSR will start to run from now instead of filling seed value.
		
		#400 $finish;
		end
      
endmodule

