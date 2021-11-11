`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    processor  
// Description:     final top level module with the PC, datapath, and controls connected
//
//////////////////////////////////////////////////////////////////////////////////
module RISC(CLK, MEMCLK, RST, resOut, PC_);
	input CLK, RST, MEMCLK;
	output [31:0] resOut, PC_;
	wire brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUCin, ALUDir;
	wire [2:0] ALUResOp, branch;
	wire [1:0] ALUSrc, ALUOp;
	wire [4:0] opcode, funccode;
	wire [31:0] instrAddr, nextInstrAddr;
	assign PC_ = instrAddr;
	/*always @(CLK) begin
		$display("branch = %b", branch);
	end*/
	PC pc(CLK, RST, nextInstrAddr, instrAddr);
	Datapath dpath(ALUResOp, ALUCin, ALUDir, brLink, memToReg, memRead, memWrite, regWrite, ALUFrc, ALUSrc, branch, opcode, funccode, CLK, RST, instrAddr, nextInstrAddr, resOut, MEMCLK);
	Control control(opcode, funccode, memToReg, branch, memWrite, memRead, ALUFrc, ALUSrc, ALUOp, brLink, regWrite);
	ALUControl alucontrol(ALUOp, funccode, ALUCin, ALUDir, ALUResOp);
endmodule
