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
module Datapath(ALUResOp, ALUCin, ALUDir, brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUSrc, branch, opcode, funccode, clk, rst, instrAddr, nextInstrAddr, resOut);
	// Define Inputs and Outputs
	input [2:0] ALUResOp, branch;
	input ALUCin, ALUDir;
	input brLink, memToReg, memRead, memWrite, regWrite, ALUFrc;
	input [1:0] ALUSrc;
	input clk, rst;
	input [31:0] instrAddr;
	output [31:0] nextInstrAddr, resOut;
	output [4:0] opcode, funccode;
	
	wire [31:0] instr;
	instrmem imem(
		.clka(clk), 
		.addra(instrAddr[9:0]), 
		.douta(instr)
	);
	
	assign opcode = instr[31:27];
	assign funccode = instr[4:0];
	
	wire [31:0] writeData;
	wire [4:0] writeReg;
	wire [31:0] brLinkAddr;
	wire [31:0] memALUData;
	wire [31:0] regReadData1, regReadData2;
	// RS, RT, IMM_I, IMM_LS, SHAMT, LABEL, etc have to be replaced with corresponding instructions
	wire [4:0] RS, RT, SHAMT;
	wire [15:0] IMM_I, IMM_LS;
	wire [23:0] LABEL;
	assign RS = instr[26:22];
	assign RT = instr[21:17];
	assign SHAMT = instr[16:12];
	assign IMM_I = instr[21:6];
	assign IMM_LS = instr[16:1];
	assign LABEL = instr[26:3];
	
	Mux2To1 regToWrite(5'b11111, RS, brLink, writeReg);
	Mux2To1 dataToWrite(brLinkAddr, memALUData, brLink, writeData);
	RegFile rfile(rst, clk, RS, RT, writeReg, writeData, regWrite, regReadData1, regReadData2, resOut);
	
	wire [31:0] aluIn1, aluIn2;
	wire [15:0] imm;
	wire [31:0] imm_ex;
	wire [31:0] shamt_ex;
	Mux2To1 immSelect(IMM_LS, IMM_I, ALUFrc, imm);
	SignExt signex(imm, imm_ex);
	assign shamt_ex = {27'b0, SHAMT};
	
	wire [31:0] aluRes;
	wire carryFlag, negFlag, zeroFlag;
	wire overflowFlag;
	wire extendOut;
	Mux2To1 firstALUIn(RT, RS, ALUFrc, aluIn1);
	Mux3To1 secondALUIn(RT, imm_ex, shamt_ex, ALUSrc, aluIn2);
	ALU alu(aluIn1, aluIn2, ALUResOp, aluRes, ALUCin, ALUDir, carryFlag, zeroFlag, negFlag, overflowFlag);
	
	wire memReadData;
	DataMem dmem(
		.clka(clk), 
		.rsta(rst), 
		.wea(memWrite), 
		.addra(aluRes[9:0]), 
		.dina(readRegData1), 
		.douta(memReadData)
	);
	Mux2To1 memDataWrite(memReadData, aluRes, memToReg, memALUData);
	
	NextInstr nextinstr(rst, branch, carryFlag, negFlag, zeroFlag, funccode[2:0], instrAddr, LABEL, RS, nextInstrAddr, brLinkAddr);
endmodule
