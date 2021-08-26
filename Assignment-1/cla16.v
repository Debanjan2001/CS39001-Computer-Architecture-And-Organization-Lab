`include "cla4.v"


module LookAheadUnit16by4(C, P_out, G_out, P_in, G_in, cin);
	input cin;
	input [15:0] P_in, G_in;
	output [3:0] C, P_out, G_out;
	wire [3:0] outCarry, P, G;
		
	assign P[0] = P_in[3] & P_in[2] & P_in[1] & P_in[0];
	assign G[0] = G_in[3] | (P_in[3] & G_in[2]) | (P_in[3] & P_in[2] & G_in[1]) | (P_in[3] & P_in[2] & P_in[1] & G_in[0]);
	
	assign P[1] = P_in[7] & P_in[6] & P_in[5] & P_in[4];
	assign G[1] = G_in[7] | (P_in[7] & G_in[6]) | (P_in[7] & P_in[6] & G_in[5]) | (P_in[7] & P_in[6] & P_in[5] & G_in[4]);
	
	assign P[2] = P_in[11] & P_in[10] & P_in[9] & P_in[8];
	assign G[2] = G_in[11] | (P_in[11] & G_in[10]) | (P_in[11] & P_in[10] & G_in[9]) | (P_in[11] & P_in[10] & P_in[9] & G_in[8]);
	
	assign P[3] = P_in[15] & P_in[14] & P_in[13] & P_in[12];
	assign G[3] = G_in[15] | (P_in[15] & G_in[14]) | (P_in[15] & P_in[14] & G_in[13]) | (P_in[15] & P_in[14] & P_in[13] & G_in[12]);
	
	assign outCarry[0] = G[0] | (P[0] & cin);
    assign outCarry[1] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & cin);
    assign outCarry[2] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0]) | (P[2] & P[1] & P[0] & cin);
    assign outCarry[3] = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]) | (P[3] & P[2] & P[1] & P[0] & cin);
    
	assign P_out = P;
	assign G_out = G;
	assign C = outCarry;
endmodule

module CLAAdder16(A, B, cin, sum, cout, P_out, G_out);
	input cin;
	input [15:0] A, B;
	output[15:0] sum, P_out, G_out;
	output cout;
	wire [15:0] P, G;
	wire [3:0] la4carry;
	wire [3:0] outcarry;
	wire [3:0] P_block, G_block;
	
	LookAheadUnit16by4 launit(.C(la4carry), .P_out(P_block), .G_out(G_block), .P_in(P), .G_in(G), .cin(cin));
	CLAAdder4 cla0 (.A(A[3:0]), .B(B[3:0]), .cin(cin), .S(sum[3:0]), .P(P[3:0]), .G(G[3:0]), .cout(outcarry[0]));
	CLAAdder4 cla1 (.A(A[7:4]), .B(B[7:4]), .cin(la4carry[0]), .S(sum[7:4]), .P(P[7:4]), .G(G[7:4]), .cout(outcarry[1]));
	CLAAdder4 cla2 (.A(A[11:8]), .B(B[11:8]), .cin(la4carry[1]), .S(sum[11:8]), .P(P[11:8]), .G(G[11:8]), .cout(outcarry[2]));
	CLAAdder4 cla3 (.A(A[15:12]), .B(B[15:12]), .cin(la4carry[2]), .S(sum[15:12]), .P(P[15:12]), .G(G[15:12]), .cout(outcarry[3]));
	
	assign cout = la4carry[3];
endmodule