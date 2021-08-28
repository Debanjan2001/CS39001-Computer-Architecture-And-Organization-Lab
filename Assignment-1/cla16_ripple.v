/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 2)c)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

`include "cla4.v"

module CLARippledAdder16(A, B, cin, S, cout, P, G);
    /*
        A,B => 16 bit input lines
        cin => Input carry bit
        S => 16 bit Output lines
        P => 16 bit Output propagate lines 
        G => 16 bit Output generate lines
        cout => Output carry bit
    */
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

