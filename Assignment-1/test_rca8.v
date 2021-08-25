`include "rca8.v"

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