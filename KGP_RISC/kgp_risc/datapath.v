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
module Datapath(ALUResOp, brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUSrc, branch);
	PC pc();
	InstructionMem imem();
	wire [31:0] instr;
	wire [31:0] writeData;
	wire [4:0] writeReg;
	MUX2To1();
	MUX2To1();
	RegFile rfile();
	wire [31:0] aluIn1, aluIn2;
	SignExt signex();
	Extend ext();
	wire aluRes;
	wire [31:0] readRegData1, readRegData2;
	wire carryFlag, negFlag, zeroFlag;
	wire extendOut;
	MUX2to1();
	MUX3To1();
	ALU alu();
	DataMem dmem();
	MUX2To1();
	NextInstr next();
endmodule
