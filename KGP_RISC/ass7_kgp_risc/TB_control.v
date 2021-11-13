`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for control unit  
// Description:     control unit test
//
//////////////////////////////////////////////////////////////////////////////////
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
