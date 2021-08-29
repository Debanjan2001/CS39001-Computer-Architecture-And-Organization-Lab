`timescale 1ns / 1ps
`include "cla16.v"

module TestCLA16();
    reg [15:0] a,b;
    reg cin;
    wire[15:0] sum;
    wire [15:0] p,g;
    wire cout;

    CLAAdder16 cla16(.A(a),.B(b),.cin(cin),.sum(sum),.cout(cout),.P_out(p),.G_out(g) );

    initial begin
        $monitor("a = %b, b = %b, cin = %b, sum = %b, cout = %b", a, b, cin, sum, cout);
        #3 a = 16'b0000000000000001; b = 16'b0000000000000010; cin = 1'b1;
        #3 a = 16'b0000000000000001; b = 16'b0000000000000001; cin = 1'b0;
        #3 a = 16'b1111111111111111; b = 16'b0000000000000001; cin = 1'b0;
        #3 a = 16'b1111111111111111; b = 16'b0000000000000000; cin = 1'b1;
        #3 a = 16'b0000000100000001; b = 16'b0000000100000001; cin = 1'b0;
        #3 a = 16'b0101011000100111; b = 16'b0011111000100000; cin = 1'b0;
    end
endmodule