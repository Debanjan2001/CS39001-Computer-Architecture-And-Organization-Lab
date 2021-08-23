`include "rca8.v"

module RippleCarryAdder16(A, B, cin, sum, cout);
    input [15:0] A,B;
    output [15:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder8 rca1(A[7:0], B[7:0], cin, sum[7:0], carry1);
    RippleCarryAdder8 rca2(A[15:8], B[15:8], carry1, sum[15:8], cout);

endmodule

// Test Module
/*
module TestRCA16();
    reg [15:0] a,b;
    reg cin;
    wire[15:0] sum;
    wire cout;

    RippleCarryAdder16 rca16(.A(a), .B(b), .cin(cin), .sum(sum), .cout(cout));

    initial begin
        $monitor("a = %b, b = %b, cin = %b, sum = %b, cout = %b", a, b, cin, sum, cout);
        #1 a = 16'b0000000111111111; b = 16'b0000000000000001; cin = 1'b0;
        #2 a = 16'b0000000000000001; b = 16'b0000000000000001; cin = 1'b0;
        #3 a = 16'b1111111111111111; b = 16'b0000000000000001; cin = 1'b0;
        #4 a = 16'b1111111111111111; b = 16'b0000000000000000; cin = 1'b1;
        #5 a = 16'b0000000100000001; b = 16'b0000000100000001; cin = 1'b0;
        #6 a = 16'b0101011000100111; b = 16'b0011111000100000; cin = 1'b0;
    end
endmodule
*/