`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Barrel Shifter main module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module BarrelShifter(in, shamt, dir, out);
	input [7:0] in;
	input [2:0] shamt;
	input dir;
	output [7:0] out;
	
	// Flip input according to dir
	wire [7:0] inflip;
	MUX2to1 inflip0(inflip[0] ,in[7], in[0], dir);
	MUX2to1 inflip1(inflip[1] ,in[6], in[1], dir);
	MUX2to1 inflip2(inflip[2] ,in[5], in[2], dir);
	MUX2to1 inflip3(inflip[3] ,in[4], in[3], dir);
	MUX2to1 inflip4(inflip[4] ,in[3], in[4], dir);
	MUX2to1 inflip5(inflip[5] ,in[2], in[5], dir);
	MUX2to1 inflip6(inflip[6] ,in[1], in[6], dir);
	MUX2to1 inflip7(inflip[7] ,in[0], in[7], dir);
	
	// 4Bit Shifter
	wire [7:0] shift4;
	MUX2to1 shift4_0(shift4[0], inflip[4], inflip[0] , shamt[2]);
	MUX2to1 shift4_1(shift4[1], inflip[5], inflip[1] , shamt[2]);
	MUX2to1 shift4_2(shift4[2], inflip[6], inflip[2] , shamt[2]);
	MUX2to1 shift4_3(shift4[3], inflip[7], inflip[3] , shamt[2]);
	MUX2to1 shift4_4(shift4[4], 1'b0		 , inflip[4] , shamt[2]);
	MUX2to1 shift4_5(shift4[5], 1'b0		 , inflip[5] , shamt[2]);
	MUX2to1 shift4_6(shift4[6], 1'b0     , inflip[6] , shamt[2]);
	MUX2to1 shift4_7(shift4[7], 1'b0		 , inflip[7] , shamt[2]);
	
	// 2Bit Shifter
	wire [7:0] shift2;
	MUX2to1 shift2_0(shift2[0], shift4[2], shift4[0] , shamt[1]);
	MUX2to1 shift2_1(shift2[1], shift4[3], shift4[1] , shamt[1]);
	MUX2to1 shift2_2(shift2[2], shift4[4], shift4[2] , shamt[1]);
	MUX2to1 shift2_3(shift2[3], shift4[5], shift4[3] , shamt[1]);
	MUX2to1 shift2_4(shift2[4], shift4[6], shift4[4] , shamt[1]);
	MUX2to1 shift2_5(shift2[5], shift4[7], shift4[5] , shamt[1]);
	MUX2to1 shift2_6(shift2[6], 1'b0     , shift4[6] , shamt[1]);
	MUX2to1 shift2_7(shift2[7], 1'b0		 , shift4[7] , shamt[1]);
	
	// 1Bit Shifter
	wire [7:0] shift1;
	MUX2to1 shift1_0(shift1[0], shift2[1], shift2[0] , shamt[0]);
	MUX2to1 shift1_1(shift1[1], shift2[2], shift2[1] , shamt[0]);
	MUX2to1 shift1_2(shift1[2], shift2[3], shift2[2] , shamt[0]);
	MUX2to1 shift1_3(shift1[3], shift2[4], shift2[3] , shamt[0]);
	MUX2to1 shift1_4(shift1[4], shift2[5], shift2[4] , shamt[0]);
	MUX2to1 shift1_5(shift1[5], shift2[6], shift2[5] , shamt[0]);
	MUX2to1 shift1_6(shift1[6], shift2[7], shift2[6] , shamt[0]);
	MUX2to1 shift1_7(shift1[7], 1'b0		 , shift2[7] , shamt[0]);

	// Flip output according to dir
	MUX2to1 outflip0(out[0] ,shift1[7], shift1[0], dir);
	MUX2to1 outflip1(out[1] ,shift1[6], shift1[1], dir);
	MUX2to1 outflip2(out[2] ,shift1[5], shift1[2], dir);
	MUX2to1 outflip3(out[3] ,shift1[4], shift1[3], dir);
	MUX2to1 outflip4(out[4] ,shift1[3], shift1[4], dir);
	MUX2to1 outflip5(out[5] ,shift1[2], shift1[5], dir);
	MUX2to1 outflip6(out[6] ,shift1[1], shift1[6], dir);
	MUX2to1 outflip7(out[7] ,shift1[0], shift1[7], dir);

endmodule
