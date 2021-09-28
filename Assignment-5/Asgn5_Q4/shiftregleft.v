`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048]
//  
// Module Name: ShiftRegLeft 
// Project Name: Assignment-5 Question 4
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftRegLeft(out, temp, data_in, clk, load);
	input clk, load;
	input [31:0] data_in;
	output reg out;
	output reg [31:0] temp;
	
	always @ (posedge clk) begin
		if(load) 
			temp <= data_in;
		else begin
			out <= temp[31];
			temp <= {temp[30:0], 1'b0};
		end 
	end

endmodule 