`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for next instruction module
// Description:     next instructions tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_nextinstr;

	// Inputs
	reg rst;
	reg [2:0] branch;
	reg carry;
	reg negative;
	reg zero;
	reg [2:0] funccode;
	reg [31:0] pc;
	reg [23:0] label;
	reg [31:0] regData;

	// Outputs
	wire [31:0] nextInstrAddr;
	wire [31:0] brLinkAddr;

	// Instantiate the Unit Under Test (UUT)
	NextInstr uut (
		.rst(rst), 
		.branch(branch), 
		.carry(carry), 
		.negative(negative), 
		.zero(zero), 
		.funccode(funccode), 
		.pc(pc), 
		.label(label), 
		.regData(regData), 
		.nextInstrAddr(nextInstrAddr), 
		.brLinkAddr(brLinkAddr)
	);

	initial begin
		// Initialize Inputs
		rst = 0;
		branch = 0;
		carry = 0;
		negative = 0;
		zero = 0;
		funccode = 0;
		pc = 0;
		label = 0;
		regData = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		#1 rst = 1;
		#1 rst = 0;
		branch = 3'b001;
		regData = 32'd45;
		pc = 32'd64;
		
		#50 $finish;

	end
      
endmodule

