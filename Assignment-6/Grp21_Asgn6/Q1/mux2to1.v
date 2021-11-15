`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: 2 to 1 Multiplexor module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module MUX2to1(out, A, B, sel);
	input A, B, sel;
	output reg out;
	
	always @ (*) begin
		out = sel ? A : B;
	end
endmodule
