`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    control unit 
// Description: 	 Global Controller for all control signals
//						 note: some optimization may be possible from the branch, ALUOp, brLink
//////////////////////////////////////////////////////////////////////////////////
module Control(opcode, funccode, memToReg, branch, memWrite, memRead, ALUFrc, ALUSrc, ALUOp, brLink, regWrite);
	input [4:0] opcode, funccode;
	output reg memToReg, memWrite, ALUFrc, brLink, regWrite;
    output reg memRead;
	output reg [1:0] ALUSrc, ALUOp;
	output reg [2:0] branch;
	parameter  R=5'b00000, I=5'b00001, LS=5'b00010, BR1=5'b00011, BR2=5'b00100, BR3=5'b00101;
	always @(*) begin
		case (opcode)
			R: begin
				regWrite = 1'b1;
				memWrite = 1'b0;
				memRead = 1'b0;
				memToReg = 1'b0;
				branch = 3'b000;
				ALUFrc = 1'b0;
				ALUSrc = (funccode == 5'b00100 || funccode == 5'b00110 || funccode == 5'b01000) ? 2'b10 : 2'b00;
				ALUOp = 2'b01;
				brLink = 1'b0;
			end
			
			I: begin
				regWrite = 1'b1;
				memWrite = 1'b0;
				memRead = 1'b0;
				memToReg = 1'b0;
				branch = 3'b000;
				ALUFrc = 1'b0;
				ALUSrc = 2'b01;
				ALUOp = 2'b10;
				brLink = 1'b0;
			end
			
			LS: begin
				regWrite = (funccode[0]) ? 1'b0 : 1'b1;
				memWrite = (funccode[0]) ? 1'b1 : 1'b0;
				memRead = (funccode[0]) ? 1'b0 : 1'b1;
				memToReg = (funccode[0]) ? 1'b0 : 1'b1;
				branch = 3'b000;
				ALUFrc = 1'b1;
				ALUSrc = 2'b01;
				ALUOp = 2'b11;
				brLink = 1'b0;
			end
			
			BR1: begin
				regWrite = 1'b0;
				memWrite = 1'b0;
				memRead = 1'b0;
				memToReg = 1'b0;
				branch = 3'b001;
				ALUFrc = 1'b0;
				ALUSrc = 2'b00;
				ALUOp = 2'b00;
				brLink = 1'b0;
			end
			
			BR2: begin
				regWrite = 1'b0;
				memWrite = 1'b0;
				memRead = 1'b0;
				memToReg = 1'b0;
				branch = 3'b010;
				ALUFrc = 1'b0;
				ALUSrc = 2'b00;
				ALUOp = 2'b00;
				brLink = (funccode[2:0] == 3'b001) ? 1'b1 : 1'b0;
			end
			
			BR3: begin
				regWrite = 1'b0;
				memWrite = 1'b0;
				memRead = 1'b0;
				memToReg = 1'b0;
				branch = 3'b100;
				ALUFrc = 1'b0;
				ALUSrc = 2'b00;
				ALUOp = 2'b00;
				brLink = 1'b0;
			end
			
			default: begin
				regWrite = 1'b0;
				memWrite = 1'b0;
				memRead = 1'b0;
				memToReg = 1'b0;
				branch = 3'b000;
				ALUFrc = 1'b0;
				ALUSrc = 2'b00;
				ALUOp = 2'b00;
				brLink = 1'b0;
			end
		endcase
	end

endmodule
