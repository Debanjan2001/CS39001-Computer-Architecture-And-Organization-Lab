/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 2)b)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

module CLAAdder4(A, B, cin, S, P, G, cout);
    /*
        A,B => 4 bit input lines
        cin => Input carry bit
        S => 4 bit Output lines
        P => 4 bit Output propagate lines 
        G => 4 bit Output generate lines
        cout => Output carry bit
    */
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