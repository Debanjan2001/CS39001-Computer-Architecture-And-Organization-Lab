`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Pritkumar Godhani [19CS10048], Debanjan Saha [19CS30014] 
//  
// Module Name: D-Flip Flop [auxiliary module]
// Project Name: Assignment-5 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module DFF(Q, D, CLK, RST);
	input D, CLK, RST;
	output reg Q;
	
	always @ (posedge CLK or posedge RST) begin
	if(RST)
		Q <= 0;
	else
		Q <= D;
	end
endmodule
