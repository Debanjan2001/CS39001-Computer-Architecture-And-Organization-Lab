`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:58:57 09/26/2021 
// Design Name: 
// Module Name:    shiftreg 
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
module ShiftRegRight(out, data_in, clk, rst, load);
	input clk, rst, load;
	input [7:0] data_in;
	output out;
	wire [7:0] w_int, w;
	
	MUX2to1 m0(load, data_in[7], 1'b0    , w[0]);
	DFF d0(w_int[0], w[0], clk, rst);
	MUX2to1 m1(load, data_in[6], w_int[0], w[1]);
	DFF d1(w_int[1], w[1], clk, rst);
	MUX2to1 m2(load, data_in[5], w_int[1], w[2]);
	DFF d2(w_int[2], w[2], clk, rst);
	MUX2to1 m3(load, data_in[4], w_int[2], w[3]);
	DFF d3(w_int[3], w[3], clk, rst);
	MUX2to1 m4(load, data_in[3], w_int[3], w[4]);
	DFF d4(w_int[4], w[4], clk, rst);
	MUX2to1 m5(load, data_in[2], w_int[4], w[5]);
	DFF d5(w_int[5], w[5], clk, rst);
	MUX2to1 m6(load, data_in[1], w_int[5], w[6]);
	DFF d6(w_int[6], w[6], clk, rst);
	MUX2to1 m7(load, data_in[0], w_int[6], w[7]);
	DFF d7(out     , w[7], clk, rst);

endmodule
