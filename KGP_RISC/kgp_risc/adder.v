`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// 
// Create Date:    00:08:36 11/08/2021 
// Design Name: 
// Module Name:    adder  
// Description: 	 32-Bit Binary Adder 
//
//////////////////////////////////////////////////////////////////////////////////
module Adder(A, B, sum, cin, cout);
	input [31:0] A, B;
	input cin;
	output [31:0] sum;
	output cout;
	
	assign {cout, sum} = A + B + cin;

endmodule
