`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for arithmetic shifter  
// Description:     arithmetic shifter test
//
//////////////////////////////////////////////////////////////////////////////////
module TB_arithshifter;

	// Inputs
	reg [31:0] A;
	reg [31:0] shamt;

	// Outputs
	wire [31:0] res;

	// Instantiate the Unit Under Test (UUT)
	ArithmeticShifter uut (
		.A(A), 
		.shamt(shamt), 
		.res(res)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		shamt = 0;

		$monitor("A = %b, shamt = %d, res = %b", A, shamt, res);
		#100;
        
		#1 A = 32'b11001100110010011100110011001001; shamt = 32'b101;
		#3 A = 32'b00110010011100110011100111001001; shamt = 32'b101;
		#5 A = 32'b11110010011100110011100111001001; shamt = 32'b11; 
		#7 A = 32'b01110010011100110011100111001001; shamt = 32'b10;
		
		#10 $finish();
	end
      
endmodule