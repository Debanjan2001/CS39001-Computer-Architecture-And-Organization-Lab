`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:57 08/28/2021 
// Design Name: 
// Module Name:    cla4_aug 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CLAAdderAug4(A, B, cin, S, P_block, G_block);
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