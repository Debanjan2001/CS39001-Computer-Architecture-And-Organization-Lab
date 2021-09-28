`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Pritkumar Godhani [19CS10048], Debanjan Saha [19CS30014] 
//  
// Module Name: 2:1 Multiplexor [auxiliary module] 
// Project Name: Assignment-5 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module mux2to1(sel, A, B, out);
	input sel, A, B;
	output reg out;
	
	always @ (*) begin
	if(sel)
		out = A;
	else 
		out = B;
	end
endmodule
