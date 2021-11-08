`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:13:12 11/08/2021
// Design Name:   ArithmeticShifter
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_arithshift.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ArithmeticShifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_arithshift;

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

