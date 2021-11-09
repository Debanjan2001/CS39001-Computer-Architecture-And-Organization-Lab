`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: D-Flip Flop module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module DFF(Q, D, clk, rst);
	input D, clk, rst;
	output reg Q;
	always @ (posedge clk) begin
		if(rst) begin
			Q <= 1'b0;
		end
		else begin
			Q <= D;
		end
	end
endmodule

