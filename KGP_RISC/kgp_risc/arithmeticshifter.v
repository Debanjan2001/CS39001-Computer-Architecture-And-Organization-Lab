`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    arithmetic right shifter 
// Description: 	 32-Bit Arithmetic Right Shift Unit 
// 					 
//////////////////////////////////////////////////////////////////////////////////
module ArithmeticShifter(A, shamt, res);
	input signed [31:0] A;
	input [31:0] shamt;
	output [31:0] res;
	
	assign res = A>>>shamt;


endmodule
