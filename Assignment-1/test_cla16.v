`include "cla16.v"

module TestCLA16();
    reg [15:0] a,b;
    reg cin;
    wire[15:0] sum;
    wire [3:0] p,g;
    wire cout;

    CLAAdder16 cla16(.A(a), .B(b), .cin(cin), .S(sum), .P(p), .G(g),.cout(cout));

    initial begin
        $monitor("a = %b, b = %b, cin = %b, sum = %b, cout = %b", a, b, cin, sum, cout);
        #1 a = 16'b0000000000000001; b = 16'b0000000000000010; cin = 1'b1;
        #1 a = 16'b0000000000000001; b = 16'b0000000000000001; cin = 1'b0;
        #1 a = 16'b1111111111111111; b = 16'b0000000000000001; cin = 1'b0;
        #1 a = 16'b1111111111111111; b = 16'b0000000000000000; cin = 1'b1;
        #1 a = 16'b0000000100000001; b = 16'b0000000100000001; cin = 1'b0;
        #1 a = 16'b0101011000100111; b = 16'b0011111000100000; cin = 1'b0;
    end
endmodule