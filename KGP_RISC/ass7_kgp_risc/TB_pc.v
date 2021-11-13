`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for pc 
// Description:     pc tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_pc;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] pc_in;

	// Outputs
	wire [31:0] pc_out;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.rst(rst), 
		.pc_in(pc_in), 
		.pc_out(pc_out)
	);
	always #1 clk = ~clk;
	initial begin
		// Initialize Inputs
		
		clk = 0;
		rst = 0;
		pc_in = 0;
	
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#1 rst = 1;
		#1 rst = 0;
		pc_in = 32'd45;
		
		#50 $finish;
		
	end
      
endmodule

