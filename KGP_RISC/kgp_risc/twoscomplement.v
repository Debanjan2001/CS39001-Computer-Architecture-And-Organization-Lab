`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    complementor 
// Description: 	 32-Bit 2's Complementing Unit 
//
//////////////////////////////////////////////////////////////////////////////////
module Complementor(A, compA);
	input [31:0] A;
	output [31:0] compA;
	
	assign compA = ~A + 32'b1;

endmodule
