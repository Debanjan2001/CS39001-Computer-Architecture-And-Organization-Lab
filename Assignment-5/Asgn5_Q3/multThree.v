`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Pritkumar Godhani [19CS10048], Debanjan Saha [19CS30014] 
//  
// Module Name: MultThreeDetector [main FSM module]
// Project Name: Assignment-5 Question 3
//
//////////////////////////////////////////////////////////////////////////////////
module MultThreeDetector(out_bit, in_bit, clk, rst);
	input clk, rst, in_bit;
	output reg out_bit;
	
	reg [1:0] present_state, next_state;
	
	//DFF d1(present_state[0], next_state[0], clk, rst);
	//DFF d2(present_state[1], next_state[1], clk, rst);
	/** Machine Description:
		- Input : in_bit, the next bit of the number from MSB to LSB
		- Type : Mealy
		- States : S0, S1, S2 representating Omod3 , 1mod3, 2mod3 respectively.
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
		else if(present_state == S0) begin
			next_state = in_bit ? S1 : S0;
			end
		else if(present_state == S1) begin
			next_state = in_bit ? S0 : S2;
			end
		else if(present_state == S2) begin
			next_state = in_bit ? S2 : S1;
			end
		else 
			next_state = S0; // default, to prevent latch
	end
	
	
	// Output Logic 
	always @ (*) begin
		if(present_state == S0) begin
			out_bit = in_bit ? 1'b0 : 1'b1;
			end
		else if(present_state == S1) begin
			out_bit = in_bit ? 1'b1 : 1'b0;
			end
		else if(present_state == S2) begin
			out_bit = in_bit ? 1'b0 : 1'b0;
			end
		else 
			out_bit = 1'b0; // default, to prevent latch
	end
endmodule
