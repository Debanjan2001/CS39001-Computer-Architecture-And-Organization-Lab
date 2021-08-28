`timescale 1ns / 1ps
`include "cla4_aug.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:07 08/26/2021 
// Design Name: 
// Module Name:    cla16_nonripple 
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
module LookAheadUnit16by4(C, P_block, G_block, cin);
	input cin;
	input [3:0] P_block, G_block;
	output [3:0] C;
	//wire [3:0] P, G;
	assign C[0] = G_block[0] | (P_block[0] & cin);
   assign C[1] = G_block[1] | (P_block[1] & G_block[0]) | (P_block[1] & P_block[0] & cin);
   assign C[2] = G_block[2] | (P_block[2] & G_block[1]) | (P_block[2] & P_block[1] & G_block[0]) | (P_block[2] & P_block[1] & P_block[0] & cin);
   assign C[3] = G_block[3] | (P_block[3] & G_block[2]) | (P_block[3] & P_block[2] & G_block[1]) | (P_block[3] & P_block[2] & P_block[1] & G_block[0]) | (P_block[3] & P_block[2] & P_block[1] & P_block[0] & cin);
    
endmodule

module CLAAdder16(sum, cout, P_block, G_block, A, B, cin);
	input cin;
	input [15:0] A, B;
	output [15:0] sum;
	output [3:0] P_block, G_block;
	output cout;
	wire [15:0] P, G;
	wire [3:0] la4carry;
	
	LookAheadUnit16by4 launit(.C(la4carry), .P_block(P_block), .G_block(G_block), .cin(cin));
	CLAAdderAug4 cla0 (.A(A[3:0]), .B(B[3:0]), .cin(cin), .S(sum[3:0]), .P_block(P_block[0]), .G_block(G_block[0]));
	CLAAdderAug4 cla1 (.A(A[7:4]), .B(B[7:4]), .cin(la4carry[0]), .S(sum[7:4]), .P_block(P_block[1]), .G_block(G_block[1]));
	CLAAdderAug4 cla2 (.A(A[11:8]), .B(B[11:8]), .cin(la4carry[1]), .S(sum[11:8]), .P_block(P_block[2]), .G_block(G_block[2]));
	CLAAdderAug4 cla3 (.A(A[15:12]), .B(B[15:12]), .cin(la4carry[2]), .S(sum[15:12]), .P_block(P_block[3]), .G_block(G_block[3]));
	
	assign cout = la4carry[3];
endmodule