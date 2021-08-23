`include "full_adder.v"

module RippleCarryAdder8(A, B, cin, sum, cout);
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

// Not Required I guess.
/*
module Test_RippleCarryAdder8();

reg [7:0] a;

reg [7:0] b;

reg cin;

wire [7:0] sum;

wire cout;

RippleCarryAdder8 rca8 (.A(a),.B(b),.cin(cin),.sum(sum),.cout(cout) );

initial begin

    $monitor( "a = %b, b = %b, cin= %b, sum = %b , cout = %b ",a,b,cin,sum,cout);

    #1 a=8'b00000001;b=8'b00000001;cin=1'b0;

    #1 a=8'b00000001;b=8'b00000001;cin=1'b1;

    #1 a=8'b00000010;b=8'b00000011;cin=1'b0;

    #1 a=8'b10000001;b=8'b10000001;cin=1'b0;

    #1 a=8'b00011001;b=8'b00110001;cin=1'b0;

    #1 a=8'b00000011;b=8'b00000011;cin=1'b1;

    #1 a=8'b11111111;b=8'b00000001;cin=1'b0;

    #1 a=8'b11111111;b=8'b00000000;cin=1'b1;

    #1 a=8'b11111111;b=8'b11111111;cin=1'b0;

    $finish;

end

endmodule
*/