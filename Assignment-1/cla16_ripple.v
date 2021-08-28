`timescale 1ns / 1ps

`include "cla4.v"

module CLARippledAdder16(A, B, cin, S, cout, P, G);

    input [15:0] A,B;
    input cin;
    output cout;
    output [15:0] S, P, G;

    wire [3:0] carry;

    assign carry[0] = cin;
    CLAAdder4 cla0(A[3:0],B[3:0],carry[0],S[3:0],P[3:0],G[3:0],carry[1]);
    CLAAdder4 cla1(A[7:4],B[7:4],carry[1],S[7:4],P[7:4],G[7:4],carry[2]);
    CLAAdder4 cla2(A[11:8],B[11:8],carry[2],S[11:8],P[11:8],G[11:8],carry[3]);
    CLAAdder4 cla3(A[15:12],B[15:12],carry[3],S[15:12],P[15:12],G[15:12],cout);

    
endmodule

