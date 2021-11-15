`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:02:32 11/08/2021
// Design Name:   LogicShifter
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_logicshifter.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LogicShifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

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

