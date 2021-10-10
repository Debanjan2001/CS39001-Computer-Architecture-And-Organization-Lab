`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:27:42 10/07/2021 
// Design Name: 
// Module Name:    full_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
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
