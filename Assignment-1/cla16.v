/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 2)c)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

`include "cla4_aug.v"

module LookAheadUnit16by4(C, P_block, G_block, cin);
	/*
        C => 4-bit output lookahead carry lines [C4, C8, C12, C16]
		P_block => 4-bit input block propagate lines
		G_block => 4-bit input block generate lines
		cin => Input carry line (C0)
    */
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
	/*
        A,B => 16 bit input lines
        cin => Input carry bit
        sum => 16 bit Output lines
        P_block => 4 bit Output block propagate lines 
        G_block => 4 bit Output block generate lines
        cout => Output carry bit
    */
	input cin;
	input [15:0] A, B;
	output [15:0] sum;
	output [3:0] P_block, G_block;
	output cout;
	//wire [15:0] P, G;
	
	wire [3:0] la4carry; // look ahead carry bits for 4 cla bits
	
	LookAheadUnit16by4 launit(.C(la4carry), .P_block(P_block), .G_block(G_block), .cin(cin));
	CLAAdderAug4 cla0 (.A(A[3:0]), .B(B[3:0]), .cin(cin), .S(sum[3:0]), .P_block(P_block[0]), .G_block(G_block[0]));
	CLAAdderAug4 cla1 (.A(A[7:4]), .B(B[7:4]), .cin(la4carry[0]), .S(sum[7:4]), .P_block(P_block[1]), .G_block(G_block[1]));
	CLAAdderAug4 cla2 (.A(A[11:8]), .B(B[11:8]), .cin(la4carry[1]), .S(sum[11:8]), .P_block(P_block[2]), .G_block(G_block[2]));
	CLAAdderAug4 cla3 (.A(A[15:12]), .B(B[15:12]), .cin(la4carry[2]), .S(sum[15:12]), .P_block(P_block[3]), .G_block(G_block[3]));
	
	assign cout = la4carry[3];
endmodule