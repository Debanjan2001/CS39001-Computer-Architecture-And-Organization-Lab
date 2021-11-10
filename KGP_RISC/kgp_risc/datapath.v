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
module Datapath(ALUResOp, ALUCin, ALUDir, brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUSrc, branch, opcode, funccode, clk, rst, instrAddr, nextInstrAddr, resOut, memclk);
	// Define Inputs and Outputs
	input [2:0] ALUResOp, branch;
	input ALUCin, ALUDir;
	input brLink, memToReg, memRead, memWrite, regWrite, ALUFrc;
	input [1:0] ALUSrc;
	input clk, rst, memclk;
	input [31:0] instrAddr;
	output [31:0] nextInstrAddr, resOut;
	output [4:0] opcode, funccode;
	
	wire [31:0] instr;
	instrmem imem(
		.clka(memclk), 
		.addra(instrAddr[9:0]), 
		.douta(instr)
	);
	
	assign opcode = instr[31:27];
	assign funccode = instr[4:0];
	
	wire [31:0] writeData;
	wire [31:0] writeReg;
	wire [31:0] brLinkAddr;
	wire [31:0] memALUData;
	wire [31:0] regReadData1, regReadData2;
	// RS, RT, IMM_I, IMM_LS, SHAMT, LABEL, etc have to be replaced with corresponding instructions
	wire [31:0] RS, RT, SHAMT;
	wire [31:0] IMM_I, IMM_LS;
	wire [31:0] LABEL;
	assign RS = {27'b0, instr[26:22]};
	assign RT = {27'b0, instr[21:17]};
	assign SHAMT = {27'b0, instr[16:12]};
	assign IMM_I = {16'b0, instr[21:6]};
	assign IMM_LS = {16'b0, instr[16:1]};
	assign LABEL = {9'b0, instr[26:3]};
	
	Mux2To1 regToWrite(32'b11111, RS, brLink, writeReg);
	Mux2To1 dataToWrite(brLinkAddr, memALUData, brLink, writeData);
	RegFile rfile(rst, clk, RS[4:0], RT[4:0], writeReg[4:0], writeData, regWrite, regReadData1, regReadData2, resOut);
	
	wire [31:0] aluIn1, aluIn2;
	wire [31:0] imm;
	wire [31:0] imm_ex;
	Mux2To1 immSelect(IMM_LS, IMM_I, ALUFrc, imm);
	SignExt signex(imm[15:0], imm_ex);
	
	wire [31:0] aluRes;
	wire carryFlag, negFlag, zeroFlag, updateCarry;
	wire overflowFlag;
	wire extendOut;
	Mux2To1 firstALUIn(regReadData2, regReadData1, ALUFrc, aluIn1);
	Mux3To1 secondALUIn(regReadData2, imm_ex, SHAMT, ALUSrc, aluIn2);
	ALU alu(aluIn1, aluIn2, ALUResOp, aluRes, ALUCin, ALUDir, carryFlag, zeroFlag, negFlag, overflowFlag, updateCarry);
	wire [31:0] memReadData;
	DataMem dmem(
		.clka(memclk), 
		.rsta(rst), 
		.wea(memWrite), 
		.addra(aluRes[9:0]), 
		.dina(regReadData1), 
		.douta(memReadData)
	);
	Mux2To1 memDataWrite(memReadData, aluRes, memToReg, memALUData);
	/*always @(clk) begin
		$display("instr=%b, resOut=%b", instr, resOut);
	end*/
	reg carryLatchOut;
	always @(posedge clk) begin
		if(rst) carryLatchOut <= 1'b0;
		else if(updateCarry) carryLatchOut <= carryFlag;
	end
	
	NextInstr nextinstr(rst, branch, carryLatchOut, negFlag, zeroFlag, funccode[2:0], instrAddr, LABEL[23:0], regReadData1, nextInstrAddr, brLinkAddr);
endmodule
