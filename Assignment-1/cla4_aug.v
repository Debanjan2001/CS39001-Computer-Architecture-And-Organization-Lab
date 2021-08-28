/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 2)a)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

module CLAAdderAug4(A, B, cin, S, P_block, G_block);
    /*
        A,B => 4 bit input lines
        cin => Input carry bit
        S => 4 bit Output lines
        P_block => Output block propagate line 
        G_block => Output block generate line
    */
    input [3:0] A,B;
    output [3:0] S;
    input cin;
    output P_block, G_block;

    wire [3:0] P,G;
    wire [4:0] fastCarry;

    assign P = (A ^ B);
    assign G = (A & B);
	 
	assign fastCarry[0] = cin;
    assign fastCarry[1] = G[0] | (P[0] & cin );
    assign fastCarry[2] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & cin);
    assign fastCarry[3] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0]) | (P[2] & P[1] & P[0] & cin);
    assign fastCarry[4] = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]) | (P[3] & P[2] & P[1] & P[0] & cin);
	 
	assign P_block = (P[3] & P[2] & P[1] & P[0]);
	assign G_block = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]);
    assign S = P ^ fastCarry[3:0];
endmodule