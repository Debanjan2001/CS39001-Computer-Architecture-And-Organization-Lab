`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    logic shifter 
// Description: 	 32-Bit Logic Shift Unit 
// 					 dir is 1 for right and 0 for left shifts
//////////////////////////////////////////////////////////////////////////////////
module LogicShifter(A, shamt, res, dir);
	input [31:0] A;
	input [31:0] shamt;
	output [31:0] res;
	input dir;

	assign res = (dir) ? A>>shamt : A<<shamt; 

endmodule