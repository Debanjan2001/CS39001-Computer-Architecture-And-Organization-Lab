`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:21:07 11/09/2021 
// Design Name: 
// Module Name:    RISC 
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
module RISC(CLK, RST, resOut, PC);
	input CLK, RST;
	output [31:0] resOut, PC;
	wire brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUCin, ALUDir;
	wire [2:0] ALUResOp, branch;
	wire [1:0] ALUSrc, ALUOp;
	wire [4:0] opcode, funccode;
	wire [31:0] instrAddr, nextInstrAddr;
	assign PC = instrAddr;
	always @(CLK) begin
		$display("branch = %b", branch);
	end
	PC pc(CLK, RST, nextInstrAddr, instrAddr);
	Datapath dpath(ALUResOp, ALUCin, ALUDir, brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUSrc, branch, opcode, funccode, CLK, RST, instrAddr, nextInstrAddr, resOut);
	Control control(opcode, funccode, memToReg, branch, memWrite, memRead, ALUFrc, ALUSrc, ALUOp, brLink, regWrite);
	ALUControl alucontrol(ALUOp, funccode, ALUCin, ALUDir, ALUResOp);
endmodule
