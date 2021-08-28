`timescale 1ns / 1ps

module CLAAdder4(A, B, cin, S, P, G,cout);
    
    input [3:0] A,B;
    output [3:0] S,P,G;
    input cin;
    output cout;

    wire [4:0] fastCarry;

    assign P = (A ^ B);
    assign G = (A & B);

    assign fastCarry[0] = cin;
    // cin = fastCarry[0] .replacing that everywhere in the equations
    assign fastCarry[1] = G[0] | (P[0] & cin );
    assign fastCarry[2] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & cin);
    assign fastCarry[3] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0]) | (P[2] & P[1] & P[0] & cin);
    assign fastCarry[4] = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]) | (P[3] & P[2] & P[1] & P[0] & cin);
    
    assign cout = fastCarry[4];
    assign S = P ^ fastCarry[3:0];
endmodule