`timescale 1ns / 1ps

module SeqCompWithRegister(A, B, out, clk, rst, op, load, regtempA, regtempB);
	input clk, load, rst, op;
	input [31:0] A, B;
	output [31:0] regtempA, regtempB;
	output [2:0] out;
	
	// Serial Output wires from Shift Registers
	wire A_out, B_out;
	
	// Shift Registers for A and B
	ShiftRegLeft a(A_out, regtempA, A, clk, load);
	ShiftRegLeft b(B_out, regtempB, B, clk, load);

	// FSM SequentialComparator 
	SequentialComparator seqcomp (
		.a_bit(A_out), 
		.b_bit(B_out), 
		.op(op),
		.out(out), 
		.clk(clk), 
		.rst(rst)
	);

endmodule
