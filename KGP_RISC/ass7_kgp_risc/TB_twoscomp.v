`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for two's complementor 
// Description:     two's complementor tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_twoscomp;

	// Inputs
	reg [31:0] A;

	// Outputs
	wire [31:0] compA;

	// Instantiate the Unit Under Test (UUT)
	Complementor uut (
		.A(A), 
		.compA(compA)
	);

	initial begin
		// Initialize Inputs
		A = 0;

		$monitor("A = %b,  2'sComp(A) = %b", A, compA);
		#100;
		#1 A = 32'b11001100110010011100110011001001; 
		#3 A = 32'b00110010011100110011100111001001; 
		#5 A = 32'b11110010011100110011100111001001;
		
		#10 $finish();
     

	end
      
endmodule


