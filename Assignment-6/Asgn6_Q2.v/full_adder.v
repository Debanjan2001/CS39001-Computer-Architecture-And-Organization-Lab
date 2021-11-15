`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Full Adder module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module FullAdder(sum, cout, a, b, cin);
	input a, b, cin;
	output sum, cout;
	
	wire w1;
	xor x1(w1, a, b);
	xor x2(sum, w1, cin);
	
	wire w2, w3;
	and(w2, a, b);
	and(w3, w1, cin);
	or(cout, w2, w3);

endmodule
