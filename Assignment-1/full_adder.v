/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 1)b)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

module FullAdder(a, b, cin, sum, cout);
    /*
        a,b => Input bits to add
        cin => Input carry
        sum => Output sum bit
        cout => Output carry bit 
    */

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