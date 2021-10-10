`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048]
//  
// Module Name: SequentialComparator [main FSM module]
// Project Name: Assignment-5 Question 4
//
//////////////////////////////////////////////////////////////////////////////////
module SequentialComparator(a_bit, b_bit, op, out, clk, rst);
	input a_bit, b_bit, rst, clk, op;
	output reg [2:0] out; // L-E-G signal in order
	reg [2:0] next_state, present_state;
	
	/** Machine Description:
		- Input : a_bit, b_bit, next bits of A and B respectively from MSB to LSB.
		- Type : Mealy
		- States : S0, S1, S2 representating A==B (temp), A<B (temp), A>B (temp) respectively.
				   : SFL, SFE, SFG representating A<B(final state), A==B(final state), A>B(final state) respectively.
	*/
	parameter S0 = 3'b000, S1 = 3'b001, S2 = 3'b010, SFE = 3'b011, SFL = 3'b100, SFG = 3'b110;
	
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
			next_state = op ? SFL : S1;
		else if(present_state == S2) // similarly, if A is greater by a previous(more significant) bit then it will remain greater  no matter what the input
			next_state = op ? SFG : S2;
		else if(present_state == S0) begin // if the current state is equal then following cases arise
			if(a_bit == 1 && b_bit == 0 && op == 0) // if equal until now and A sees a 1 and B sees a 0, A is greater
				next_state = S2;
			else if(a_bit == 0 && b_bit == 1 && op == 0) // if equal until now and A sees 0 and B sees 1, A is lesser
				next_state = S1;
			else if(op == 1)// if A and B see the same bit then still equal
				next_state = SFE;
			else
				next_state = S0;
			end	
		else if(present_state == SFL)
			next_state = SFL;
		else if(present_state == SFE)
			next_state = SFE;
		else if(present_state == SFG)
			next_state = SFG;
		else 
			next_state = S0;
	end
	
	// Output Logic
	always @ (*) begin
		if(present_state == S1) // if A is lesser by a previous(more significant) bit then it will remain lesser no matter the inputs
			out = op ? 3'b100 : 3'b000;
		else if(present_state == S2) // similarly, if A is greater by a previous(more significant) bit then it will remain greater  no matter what the input
			out = op ? 3'b001 : 3'b000;
		else if(present_state == S0) // if the current state is equal then following cases arise
			out = op ? 3'b010 : 3'b000;
		else if(present_state == SFE) 
			out = 3'b010; // when in a final equal state, any input will give 010
		else if(present_state == SFL)
			out = 3'b100; // when in a final lesser state, any input will give 100
		else if(present_state == SFG)
			out = 3'b001; // when in a final greater state, any input will give 001
		else
			out = 3'b000; // default
	end
		
endmodule
