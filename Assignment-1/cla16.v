`include "cla4.v"

module CLAAdder16(A, B, cin, S, P, G, cout);

    input [15:0] A,B;
    input cin;
    output cout;
    output [15:0] S;
    output [3:0] P,G;

    wire [15:0] p_in,g_in;
    wire [4:0] carry;

    assign carry[0] = cin;

    CLAAdder4 cla0(A[3:0],B[3:0],carry[0],S[3:0],p_in[3:0],g_in[3:0],carry[1]);
    CLAAdder4 cla1(A[7:4],B[7:4],carry[1],S[7:4],p_in[7:4],g_in[7:4],carry[2]);
    CLAAdder4 cla2(A[11:8],B[11:8],carry[2],S[11:8],p_in[11:8],g_in[11:8],carry[3]);
    CLAAdder4 cla3(A[15:12],B[15:12],carry[3],S[15:12],p_in[15:12],g_in[15:12],carry[4]);

    assign cout = carry[4];
    
    assign P = p_in[15:12] & p_in[11:8] & p_in[7:4] & p_in[3:0];
    assign G = g_in[15:12] | (p_in[15:12] & g_in[11:8]) | (p_in[15:12] & p_in[11:8] & g_in[7:4]) | (p_in[15:12] & p_in[11:8] & p_in[7:4] & g_in[3:0]);
endmodule