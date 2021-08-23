`include "rca16.v"

module RippleCarryAdder32(A, B, cin, sum, cout);
    input [31:0] A,B;
    output [31:0] sum;
    input cin;
    output cout;

    wire carry1;

    RippleCarryAdder16 rca1(A[15:0], B[15:0], cin, sum[15:0], carry1);
    RippleCarryAdder16 rca2(A[31:16], B[31:16], carry1, sum[31:16], cout);

endmodule

// Test Module
/*
module TestRCA32();
    reg [31:0] a,b;
    reg cin;
    wire[31:0] sum;
    wire cout;

    RippleCarryAdder32 rca32(.A(a), .B(b), .cin(cin), .sum(sum), .cout(cout));

    initial begin
        $monitor("a = %b, b = %b, cin = %b, sum = %b, cout = %b", a, b, cin, sum, cout);
        #1 a = 32'b00000000000000111111111111111111; b = 32'b00000000000000000000000000000001; cin = 1'b0;
        #2 a = 32'b00000000000000000000000000000001; b = 32'b00000000000000000000000000000001; cin = 1'b0;
        #3 a = 32'b11111111111111111111111111111111; b = 32'b00000000000000000000000000000001; cin = 1'b0;
        #4 a = 32'b11111111111111111111111111111111; b = 32'b00000000000000000000000000000000; cin = 1'b1;
        #5 a = 32'b00000000000000010000000000000001; b = 32'b00000000000000010000000000000001; cin = 1'b0;
        #6 a = 32'b01001000111000110101011000100111; b = 32'b01111000100111110011111000100000; cin = 1'b0;
    end
endmodule
*/