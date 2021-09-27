`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:23:11 09/26/2021 
// Design Name: 
// Module Name:    two_compl 
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
module TwosComplementor(in_bit, out_bit, clk, rst);
	input in_bit, clk, rst;
	output reg out_bit;
	wire present_state;
	reg next_state;
	
	// DFF States = {0,1}
	DFF d0(present_state, next_state, clk, rst);
	
	// Next-State Logic
	always @ (*) begin
		if (rst)
			next_state = 1'b0;
		else if(present_state == 1'b0) begin
			if(in_bit)
				next_state = 1'b1;
			else
				next_state = 1'b0;
		end
	end
	
	// Output Logic
	always @ (*) begin
		if (present_state == 1'b0)
			out_bit = in_bit;
		else if (present_state == 1'b1)
			out_bit = ~in_bit;
	end
endmodule
