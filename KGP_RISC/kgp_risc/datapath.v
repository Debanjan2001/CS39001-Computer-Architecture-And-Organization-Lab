`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:49:29 11/08/2021 
// Design Name: 
// Module Name:    datapath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Datapath(ALUResOp, brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUSrc, branch, opcode, funccode);
	wire instrCount;
	PC pc();
	
	wire [31:0] instr;
	InstructionMem imem();
	
	wire [31:0] writeData;
	wire [4:0] writeReg;
	wire [31:0] brLinkAddr;
	wire [31:0] memALUData;
	wire [31:0] regReadData1, regReadData2;
	// RS, RT, IMM_I, IMM_LS, SHAMT, LABEL, etc have to be replaced with corresponding instructions
	
	MUX2To1 regToWrite(5'b11111, RS, brLink, writeReg);
	MUX2To1 dataToWrite(brLinkAddr, memALUData, brLink, writeData);
	RegFile rfile(RS, RT, writeReg, writeData, regReadData1, regReadData2, regWrite);
	
	wire [31:0] aluIn1, aluIn2;
	wire [15:0] imm;
	wire [31:0] imm_ex;
	wire [31:0] shamt_ex;
	MUX2To1 immSelect(IMM_LS, IMM_I, ALUFrc, imm);
	SignExt signex(imm, imm_ex);
	Extend ext(SHAMT, shamt_ex);
	
	wire aluRes;
	wire carryFlag, negFlag, zeroFlag;
	wire overflowFlag;
	wire extendOut;
	MUX2to1 firstALUIn(RT, RS, ALUFrc, aluIn1);
	MUX3To1 secondALUIn(RT, imm_ex, shamt_ex, ALUSrc, aluIn2);
	ALU alu(aluIn1, aluIn2, ALUResOp, aluRes, ALUCin, ALUDir, carryFlag, zeroFlag, negFlag, overflowFlag);
	
	wire memReadData;
	DataMem dmem();
	MUX2To1 memDataWrite(memReadData, aluRes, memToReg, memALUData);
	
	NextInstr next();
endmodule
