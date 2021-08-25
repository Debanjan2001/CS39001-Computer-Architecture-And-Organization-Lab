module FullAdder(a, b, cin, sum, cout);
    input a,b,cin;
    output sum,cout;
    wire   w1, w2, w3, w4; 

    xor t1  (w1, a, b);
    xor t2  (sum, w1, cin);
    and t3  (w2, a, b);
    and t4  (w3, a, cin);
    and t5  (w4, b, cin);
    or  t6  (cout, w2, w3, w4);
endmodule