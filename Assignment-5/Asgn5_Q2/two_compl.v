`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048]
//  
// Module Name: TwosComplementor [main FSM module]
// Project Name: Assignment-5 Question 2
//
//////////////////////////////////////////////////////////////////////////////////
module TwosComplementor(in_bit, out_bit, clk, rst);
	input in_bit, clk, rst;
	output reg out_bit;
	reg next_state, present_state;
	
	/** Machine Description:
		- Input : in_bit, next bit of the number from LSB to MSB.
		- Type : Mealy
		- States : S0, S1 representating states occupied until and including the first 1 from LSB and there after respectively.
	*/
	parameter S0 = 1'b0, S1 = 1'b1;
	
	// Sequential Logic (Async Reset)
	always @ (posedge clk or posedge rst) begin
		if(rst)
			present_state <= S0;
		else 
			present_state <= next_state;
	end 
	
	// Next-State Logic
	always @ (*) begin
		if (rst)
			next_state = S0;
		else if(present_state == S0) begin
			if(in_bit)
				next_state = S1; // if 1 is read go to S1
			else
				next_state = S0; // stay in S0 if zero is read
		end
		else if(present_state == S1) 
			next_state = S1; // once in S1 stay in S1
		else 
			next_state = S0; // default to prevent latch
	end
	
	// Output Logic
	always @ (*) begin
		if (present_state == S0)
			out_bit = in_bit ? 1'b1 : 1'b0; // if in S0 output bit is same as input
		else if (present_state == S1)
			out_bit = in_bit ? 1'b0 : 1'b1; // if in S1 complement the input-bit
		else 
			out_bit = 1'b0; // default, to prevent latch
	end
endmodule
