`timescale 1ns / 1ps

`include "rca8.v"

module RippleCarryAdder16(A, B, cin, sum, cout);
    input [15:0] A,B;
    output [15:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder8 rca1(A[7:0], B[7:0], cin, sum[7:0], carry1);
    RippleCarryAdder8 rca2(A[15:8], B[15:8], carry1, sum[15:8], cout);

endmodule