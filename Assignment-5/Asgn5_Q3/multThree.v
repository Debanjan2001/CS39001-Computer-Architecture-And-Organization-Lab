`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:45:16 09/26/2021 
// Design Name: 
// Module Name:    multThree 
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
module MultThreeDetector(out_bit, in_bit, clk, rst);
	input clk, rst, in_bit;
	output reg out_bit;
	wire[1:0] present_state;
	reg[1:0] next_state;
	
	DFF d1(present_state[0], next_state[0], clk, rst);
	DFF d2(present_state[1], next_state[1], clk, rst);
	
	// Next State Logic
	always @ (*) begin
		if(rst) 
			next_state = 2'b00;
		else if(present_state == 2'b00) begin
			if(in_bit)
				next_state = 2'b01;
			end
		else if(present_state == 2'b01) begin
			if(in_bit)
				next_state = 2'b00;
			else 
				next_state = 2'b10;
			end
		else if(present_state == 2'b10) begin
			if(in_bit)
				next_state = 2'b01;
			end
	end
	
	
	// Output Logic 
	always @ (*) begin
		if(present_state == 2'b00)
			out_bit = 1'b1;
		else 
			out_bit = 1'b0;
	end
endmodule
