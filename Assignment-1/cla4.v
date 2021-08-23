module CLAAdder4(A, B, cin, S, cout);
    
    // We have to add comments,
    input [3:0] A,B;
    output [3:0] S;
    input cin;
    output cout;

    // We have to add comments,
    wire [3:0] P,G;

    wire [4:0] fastCarry;

    assign P = (A ^ B);
    assign G = (A & B);

    assign fastCarry[0] = cin;
    // cin == fastCarry[0] .replacing that everywhere in the equations
    assign fastCarry[1] = G[0] | (P[0] & cin );
    assign fastCarry[2] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & cin);
    assign fastCarry[3] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0]) | (P[2] & P[1] & P[0] & cin);
    assign fastCarry[4] = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]) | (P[3] & P[2] & P[1] & P[0] & cin);
    
    assign cout = fastCarry[4];
    assign S = P ^ fastCarry[3:0];
endmodule


module Test_CLAAdder4();
    reg [3:0] a,b;
    reg cin;
    wire [3:0] sum;
    wire cout;

    CLAAdder4 cla4(a, b, cin, sum, cout);

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