`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Serial In Parallel Out Shift Register module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftRegSIPO(out, in, clk, rst);
	input clk, rst, in;
	output reg [7:0] out;
	
	always @ (posedge clk) begin
		if(rst) begin
			out <= 8'b0;
		end
		else begin 
			out <= {in, out[7:1]};
		end
	end
endmodule
