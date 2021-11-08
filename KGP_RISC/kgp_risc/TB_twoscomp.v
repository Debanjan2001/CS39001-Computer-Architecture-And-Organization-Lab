`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:46:40 11/08/2021
// Design Name:   Complementor
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_twoscomp.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Complementor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

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

