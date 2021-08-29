/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 1)c)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

`include "full_adder.v"

module RippleCarryAdder8(A, B, cin, sum, cout);
    /*
        A,B => 8 bit input lines
        cin => Input carry bit
        sum => 8 bit Output lines
        cout => Output carry bit 
    */
    input [7:0] A,B;
    output [7:0] sum;
    input cin;
    output cout;

    wire [6:0] carry;

    FullAdder fa0(A[0],B[0],cin,sum[0],carry[0]);
    FullAdder fa1(A[1],B[1],carry[0],sum[1],carry[1]);
    FullAdder fa2(A[2],B[2],carry[1],sum[2],carry[2]);
    FullAdder fa3(A[3],B[3],carry[2],sum[3],carry[3]);
    FullAdder fa4(A[4],B[4],carry[3],sum[4],carry[4]);
    FullAdder fa5(A[5],B[5],carry[4],sum[5],carry[5]);
    FullAdder fa6(A[6],B[6],carry[5],sum[6],carry[6]);
    FullAdder fa7(A[7],B[7],carry[6],sum[7],cout);

endmodule