`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Bit Serial Adder main module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module BitSerialAdder(sum, nextcarry, A_shiftdata, B_shiftdata, A, B, clk, load, rst);
	input [7:0] A, B;
	input clk, load, rst;
	output [7:0] sum, A_shiftdata, B_shiftdata;
	wire cout;
	output nextcarry;
	wire a_in, b_in;
	wire bitsum;
	reg c_out;
	wire dffreset;
	or(dffreset, rst, load);
	//always@(negedge load) if(!load) cout <= 1'b0;
	
	always @(*) begin
		if(!load) c_out <= cout;
		else c_out <= 1'b0;
	end
		
	ShiftRegPISO a(a_in, A_shiftdata, A, clk, load, rst);
	ShiftRegPISO b(b_in, B_shiftdata, B, clk, load, rst);
	
	ShiftRegSIPO out(sum, bitsum, clk, rst);
	
	FullAdder fa(bitsum, cout, a_in, b_in, nextcarry);
	
	DFF dflipflop(nextcarry, c_out, clk, dffreset);

	//$display("c_in = %b, cout = %b ,clk = %b", c_in, cout, clk);

endmodule
