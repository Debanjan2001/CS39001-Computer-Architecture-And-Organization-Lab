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

// Test Module
module TestRCA64();
    reg [63:0] a,b;
    reg cin;
    wire[63:0] sum;
    wire cout;

    RippleCarryAdder64 rca64(.A(a), .B(b), .cin(cin), .sum(sum), .cout(cout));

    initial begin
        $monitor("a = %b, b = %b, cin = %b, sum = %b, cout = %b", a, b, cin, sum, cout);
        #1 a = 64'b0000000000000000000000000000000011111111111111111111111111111111; b = 64'b0000000000000000000000000000000000000000000000000000000000000001; cin = 1'b0;
        #2 a = 64'b1111111111111111111111111111111111111111111111111111111111111111; b = 64'b0000000000000000000000000000000000000000000000000000000000000001; cin = 1'b0;
        #3 a = 64'b1111111111111111111111111111111111111111111111111111111111111111; b = 64'b0000000000000000000000000000000000000000000000000000000000000000; cin = 1'b1;
        #4 a = 64'b0000000000000001000000000000000100000000000000010000000000000001; b = 64'b0000000000000001000000000000000100000000000000010000000000000001; cin = 1'b0;
        #5 a = 64'b0010010011100001110001111100111101001000111000110101011000100111; b = 64'b0110101000111111100100100100111111111000100111110011111000100000; cin = 1'b0;
    end
endmodule