/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 1)c)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

`include "rca32.v"

module RippleCarryAdder64(A, B, cin, sum, cout);
    /*
        A,B => 64 bit input lines
        cin => Input carry bit
        sum => 64 bit Output lines
        cout => Output carry bit 
    */
    input [63:0] A,B;
    output [63:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder32 rca1(A[31:0], B[31:0], cin, sum[31:0], carry1);
    RippleCarryAdder32 rca2(A[63:32], B[63:32], carry1, sum[63:32], cout);

endmodule