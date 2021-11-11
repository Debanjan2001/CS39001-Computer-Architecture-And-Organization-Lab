`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    arithmetic logic unit 
// Description: 	 32-Bit ALU supporting Addition, Two's Complement, Bitwise AND & XOR, Logic and Airhtmetic Shifts
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(reg1, reg2, op, res, cin, dir, carryFlag, zeroFlag, negFlag, updateCarry);
	input [2:0] op;
	input cin, dir;
	input [31:0] reg1, reg2;
	output reg [31:0] res;
	output reg carryFlag, zeroFlag, negFlag, updateCarry;
	wire [31:0] sum, shiftL, shiftA, compA;
	wire cout;
    //wire of;
	Adder adder(reg1, reg2, sum, cin, cout);
	Complementor comp(reg2, compA);
	LogicShifter logicshift(reg1, reg2, shiftL, dir);
	ArithmeticShifter arithshift(reg1, reg2, shiftA);
	parameter ADD=3'b000, COMP=3'b001, AND=3'b010, XOR=3'b011, SHIFT_L=3'b100, SHIFT_A=3'b101;
	always @(*) begin
		case(op)
			ADD: begin
				res = sum;
				carryFlag = cout;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				//overflowFlag = of;
				updateCarry = 1'b1;
				end
				
			COMP: begin
				res = compA;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				carryFlag = 1'b0;
				//overflowFlag = 1'b0;
				updateCarry = 1'b0;
				end
			
			AND: begin
				res = reg1 & reg2;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				carryFlag = 1'b0;
				//overflowFlag = 1'b0;
				updateCarry = 1'b0;
				end
			
			XOR: begin
				res = reg1 ^ reg2;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				carryFlag = 1'b0;
				//overflowFlag = 1'b0;
				updateCarry = 1'b0;
				end
				
			SHIFT_L: begin
				res = shiftL;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				carryFlag = 1'b0;
				//overflowFlag = 1'b0;
				updateCarry = 1'b0;
				end
			
			SHIFT_A: begin
				res = shiftA;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				carryFlag = 1'b0;
				//overflowFlag = 1'b0;
				updateCarry = 1'b0;
				end
				
			default: begin
				res = reg1;
				carryFlag = 1'b0;
				//overflowFlag = 1'b0;
				zeroFlag = (reg1 == 32'b0) ? 1'b1 : 1'b0;
				negFlag = (reg1[31] == 1'b1) ? 1'b1 : 1'b0;
				updateCarry = 1'b0;
				end
		endcase
	end
	
	


endmodule