`timescale 1ns / 1ps

`include "rca16.v"

module RippleCarryAdder32(A, B, cin, sum, cout);
    input [31:0] A,B;
    output [31:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder16 rca1(A[15:0], B[15:0], cin, sum[15:0], carry1);
    RippleCarryAdder16 rca2(A[31:16], B[31:16], carry1, sum[31:16], cout);

endmodule