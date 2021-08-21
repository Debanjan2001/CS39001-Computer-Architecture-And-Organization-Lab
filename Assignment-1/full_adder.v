module FullAdder(a, b, c0, s, c);
    input a,b,c0;
    output s,c;

    assign s = a ^ b ^ c0;
    assign c = (a & b) | ((a ^ b) & c0);
endmodule