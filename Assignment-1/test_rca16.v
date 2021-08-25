`include "rca16.v"

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