`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:55:51 11/09/2021
// Design Name:   Control
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_control.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_control;

	// Inputs
	reg [4:0] opcode;
	reg [4:0] funccode;

	// Outputs
	wire memToReg;
	wire [2:0] branch;
	wire memWrite;
	wire memRead;
	wire ALUFrc;
	wire [1:0] ALUSrc;
	wire [1:0] ALUOp;
	wire brLink;
	wire regWrite;

	// Instantiate the Unit Under Test (UUT)
	Control uut (
		.opcode(opcode), 
		.funccode(funccode), 
		.memToReg(memToReg), 
		.branch(branch), 
		.memWrite(memWrite), 
		.memRead(memRead), 
		.ALUFrc(ALUFrc), 
		.ALUSrc(ALUSrc), 
		.ALUOp(ALUOp), 
		.brLink(brLink), 
		.regWrite(regWrite)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		funccode = 0;

		$monitor("OP=%b, FUNC=%b, memToReg=%b, branch=%b, memWrite=%b, memRead=%b, ALUFrc=%b, ALUSrc=%b, ALUOp=%b, brLink=%b, regWrite=%b", opcode, funccode, memToReg, branch, memWrite, memRead, ALUFrc, ALUSrc, ALUOp, brLink, regWrite);
		#100;
		
		#1 opcode = 5'b0; funccode = 5'b0;
		#1 opcode = 5'b0; funccode = 5'b1;
		#1 opcode = 5'b0; funccode = 5'b10;
		#1 opcode = 5'b0; funccode = 5'b11;
		#1 opcode = 5'b0; funccode = 5'b100;
		#1 opcode = 5'b0; funccode = 5'b101;
		#1 opcode = 5'b0; funccode = 5'b110;
		#1 opcode = 5'b0; funccode = 5'b111;
		#1 opcode = 5'b0; funccode = 5'b1000;
		#1 opcode = 5'b0; funccode = 5'b1001;
		
		#1 opcode = 5'b1; funccode = 5'b0;
		#1 opcode = 5'b1; funccode = 5'b1;
		
		#1 opcode = 5'b10; funccode = 5'b0;
		#1 opcode = 5'b10; funccode = 5'b1;
		
		#1 opcode = 5'b11; funccode = 5'b0;
		
		#1 opcode = 5'b100; funccode = 5'b0;
		#1 opcode = 5'b100; funccode = 5'b1;
		#1 opcode = 5'b100; funccode = 5'b10;
		#1 opcode = 5'b100; funccode = 5'b11;
		
		#1 opcode = 5'b101; funccode = 5'b0;
		#1 opcode = 5'b101; funccode = 5'b1;
		#1 opcode = 5'b101; funccode = 5'b10;
		
		#5 $finish();

        
		// Add stimulus here

	end
      
endmodule

