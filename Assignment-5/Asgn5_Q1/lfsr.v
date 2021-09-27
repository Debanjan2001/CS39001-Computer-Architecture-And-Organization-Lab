`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:41:01 09/26/2021 
// Design Name: 
// Module Name:    lfsr 
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
