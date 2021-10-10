`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Pritkumar Godhani [19CS10048], Debanjan Saha [19CS30014] 
//  
// Module Name: LFSR Module [main Sequential Circuit Module 
// Project Name: Assignment-5 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module LFSR4Bit(seed, sel, dff_out, clk, rst);
	input	sel, clk, rst;
	input [3:0] seed;
	output [3:0] dff_out;
	
	wire w, wint[3:0];
	
	mux2to1 mux3(sel, seed[3], w, wint[0]);
	DFF dff3(dff_out[3], wint[0], clk, rst);
	
	mux2to1 mux2(sel, seed[2], dff_out[3], wint[1]);
	DFF dff2(dff_out[2], wint[1], clk, rst);
	
	mux2to1 mux1(sel, seed[1], dff_out[2], wint[2]);
	DFF dff1(dff_out[1], wint[2], clk, rst);
	
	mux2to1 mux0(sel, seed[0], dff_out[1], wint[3]);
	DFF dff0(dff_out[0], wint[3], clk, rst);
	
	xor(w, dff_out[0], dff_out[1]);
	
endmodule
