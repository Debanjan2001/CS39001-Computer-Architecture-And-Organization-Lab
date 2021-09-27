`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:14:41 09/27/2021 
// Design Name: 
// Module Name:    seqcomp 
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
module SequentialComparator(a_bit, b_bit, out, clk, rst);
	input a_bit, b_bit, rst, clk;
	output reg[2:0] out; // LEG signal in order
	reg[1:0] next_state;
	wire[1:0] present_state;
	
	// DFF States : {00[EQUAL], 01[A<B], 10[B<A]
	DFF d0(present_state[0], next_state[0], clk, rst);
	DFF d1(present_state[1], next_state[1], clk, rst);
	
	// Next State Logic
	always @ (*) begin
		if(rst)
			next_state = 2'b00;
		else if(present_state == 2'b00) begin
			if(a_bit == 1 && b_bit == 0)
				next_state = 2'b10;
			else if(a_bit == 0 && b_bit == 1)
				next_state = 2'b01;
			end
	end
	
	// Output Logic
	always @ (*) begin
		if(present_state == 2'b00)
			out = 3'b010; // equal
		else if(present_state == 2'b01)
			out = 3'b100; // lesser
		else if(present_state == 2'b10)
			out = 3'b001; // greater
	end
		
	
endmodule
