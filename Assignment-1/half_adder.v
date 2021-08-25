module HalfAdder(a, b, s, c);
    input a,b;
    output s,c;

    xor w1 (s,a,b);
    and w2 (c,a,b);
endmodule