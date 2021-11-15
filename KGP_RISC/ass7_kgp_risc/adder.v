`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    adder  
// Description: 	 32-Bit Binary Adder 
//
//////////////////////////////////////////////////////////////////////////////////
module Adder(A, B, sum, cin, cout);
	input [31:0] A, B;
	input cin;
	output reg [31:0] sum;
	output reg cout;
	//reg c31;
	always@(*) begin 
		{cout, sum} = A + B + cin;
		//of = cout ^ c31;
	end
endmodule