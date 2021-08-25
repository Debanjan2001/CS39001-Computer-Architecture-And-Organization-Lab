`include "rca32.v"

module RippleCarryAdder64(A, B, cin, sum, cout);
    input [63:0] A,B;
    output [63:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder32 rca1(A[31:0], B[31:0], cin, sum[31:0], carry1);
    RippleCarryAdder32 rca2(A[63:32], B[63:32], carry1, sum[63:32], cout);

endmodule