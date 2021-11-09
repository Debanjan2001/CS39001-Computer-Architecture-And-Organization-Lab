`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:38:20 11/09/2021 
// Design Name: 
// Module Name:    mux2to1 
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
module Mux2To1(A, B, sel, out);
	input [31:0] A, B;
	input sel;
	output [31:0] out;
	
	assign out = (sel) ? A : B;

endmodule
