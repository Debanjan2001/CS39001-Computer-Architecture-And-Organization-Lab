`timescale 1ns / 1ps

`include "full_adder.v"

module RippleCarryAdder4(A, B, cin, sum, cout);
    input [3:0] A,B;
    output [3:0] sum;
    input cin;
    output cout;

    wire [2:0] carry;

    FullAdder fa0(A[0],B[0],cin,sum[0],carry[0]);
    FullAdder fa1(A[1],B[1],carry[0],sum[1],carry[1]);
    FullAdder fa2(A[2],B[2],carry[1],sum[2],carry[2]);
    FullAdder fa3(A[3],B[3],carry[2],sum[3],cout);

endmodule
