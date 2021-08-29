/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 1)c)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

`include "rca16.v"

module RippleCarryAdder32(A, B, cin, sum, cout);
    /*
        A,B => 32 bit input lines
        cin => Input carry bit
        sum => 32 bit Output lines
        cout => Output carry bit 
    */
    input [31:0] A,B;
    output [31:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder16 rca1(A[15:0], B[15:0], cin, sum[15:0], carry1);
    RippleCarryAdder16 rca2(A[31:16], B[31:16], carry1, sum[31:16], cout);

endmodule