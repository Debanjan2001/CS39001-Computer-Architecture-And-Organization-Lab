/*------------------------------------------------------
    Assignment No. - 1
    Problem No. - 1)a)
    Semester No. - 5
    Group No. - 21
    Group Member1 - Pritkumar Godhani, 19CS10048
    Group Member2 - Debanjan Saha, 19CS30014 
-------------------------------------------------------*/
`timescale 1ns / 1ps

module HalfAdder(a, b, s, c);
    /*
        a,b => Input bits to add
        s => Output sum bit
        c => Output carry bit 
    */
    input a,b;
    output s,c;

    xor w1 (s,a,b);
    and w2 (c,a,b);
endmodule