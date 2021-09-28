`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048]
//  
// Module Name: SequentialComparator [main FSM module]
// Project Name: Assignment-5 Question 4
//
//////////////////////////////////////////////////////////////////////////////////
module SequentialComparator(a_bit, b_bit, out, clk, rst);
	input a_bit, b_bit, rst, clk;
	output reg[2:0] out; // L-E-G signal in order
	reg[1:0] next_state, present_state;
	
	/** Machine Description:
		- Input : a_bit, b_bit, next bits of A and B respectively from MSB to LSB.
		- Type : Moore
		- States : S0, S1, S2 representating A==B, A<B, A>B respectively.
	*/
	parameter S0 = 2'b00, S1 = 2'b01, S2 = 2'b10;
	
	// Sequential Logic (Async Reset)
	always @ (posedge clk or posedge rst) begin 
		if(rst)
			present_state <= S0;
		else
			present_state <= next_state;
	end 
	
	// Next State Logic
	always @ (*) begin
		if(rst)
			next_state = S0;
		else if(present_state == S1) // if A is lesser by a previous(more significant) bit then it will remain lesser no matter the inputs
			next_state = S1;
		else if(present_state == S2) // similarly, if A is greater by a previous(more significant) bit then it will remain greater  no matter what the input
			next_state = S2;
		else if(present_state == S0) begin // if the current state is equal then following cases arise
			if(a_bit == 1 && b_bit == 0) // if equal until now and A sees a 1 and B sees a 0, A is greater
				next_state = S2;
			else if(a_bit == 0 && b_bit == 1) // if equal until now and A sees 0 and B sees 1, A is lesser
				next_state = S1;
			else // if A and B see the same bit then still equal
				next_state = S0;
			end	
		else 
			next_state = S0;
	end
	
	// Output Logic
	always @ (*) begin
		if(present_state == S0)
			out = 3'b010; // A is equal to B
		else if(present_state == S1)
			out = 3'b100; // A is lesser than B
		else if(present_state == S2)
			out = 3'b001; // A is greater than B
		else
			out = 3'b010;
	end
		
endmodule
