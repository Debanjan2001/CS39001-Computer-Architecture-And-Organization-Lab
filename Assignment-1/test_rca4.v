`include "rca4.v"

module test_rca4();
    reg [3:0] a,b;
    reg cin;
    wire [3:0] sum;
    wire cout;

    RippleCarryAdder4 cla4( a, b, cin, sum, cout);

    initial begin
        
        $monitor( "a = %b, b = %b, cin= %b, sum = %b , cout = %b ",a,b,cin,sum,cout);

        #1 a=4'b0001;b=4'b0001;cin=1'b0;

        #1 a=4'b0001;b=4'b0001;cin=1'b1;

        #1 a=4'b0010;b=4'b0011;cin=1'b0;

        #1 a=4'b0001;b=4'b0001;cin=1'b0;

        #1 a=4'b1001;b=4'b0001;cin=1'b0;

        #1 a=4'b0011;b=4'b0011;cin=1'b1;

        #1 a=4'b1111;b=4'b0001;cin=1'b0;

        #1 a=4'b1111;b=4'b0000;cin=1'b1;

        #1 a=4'b1111;b=4'b1111;cin=1'b0;

        $finish;
    end


endmodule