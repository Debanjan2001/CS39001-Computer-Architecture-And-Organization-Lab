`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for logic shifter 
// Description:     logic shifter tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_logicshifter;

	// Inputs
	reg [31:0] A;
	reg [31:0] shamt;
	reg dir;

	// Outputs
	wire [31:0] res;

	// Instantiate the Unit Under Test (UUT)
	LogicShifter uut (
		.A(A), 
		.shamt(shamt), 
		.res(res), 
		.dir(dir)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		shamt = 0;
		dir = 0;

		$monitor("A = %b, shamt = %d, dir = %b, ShiftedA = %b", A, shamt, dir, res);
		#100;
		
		#1 A = 32'b11001100110010011100110011001001; shamt = 32'b101; dir = 1'b0;
		#3 A = 32'b00110010011100110011100111001001; shamt = 32'b101; dir = 1'b1;
		#5 A = 32'b11110010011100110011100111001001; shamt = 32'b000; dir = 1'b1;
		#7 A = 32'b11110010011100110011100111001001; shamt = 32'b10; dir = 1'b0;
		
		#10 $finish();
        
	end
      
endmodule