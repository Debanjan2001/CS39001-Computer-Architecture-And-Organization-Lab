`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    adder  
// Description: 	 32-Bit Binary Adder 
//
//////////////////////////////////////////////////////////////////////////////////
module Adder(A, B, sum, cin, cout, of);
	input [31:0] A, B;
	input cin;
	output reg [31:0] sum;
	output reg cout, of;
	reg c31;
	always@(*) begin 
		{c31, sum[30:0]} = A[30:0] + B[30:0] + cin;
		{cout, sum[31]} = A[31] + B[31] + c31;
		of = cout ^ c31;
	end
endmodule
