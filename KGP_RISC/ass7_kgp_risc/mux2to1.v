`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    2:1 multiplexor 
// Description: 	 mulitplexor 2:1 
// 					 
//////////////////////////////////////////////////////////////////////////////////
module Mux2To1(A, B, sel, out);
	input [31:0] A, B;
	input sel;
	output [31:0] out;
	
	assign out = (sel) ? A : B;

endmodule