`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members: Pritkumar Godhani [19CS10048], Debanjan Saha [19CS30014] 
//  
// Module Name: ShiftRegLeft 
// Project Name: Assignment-5 Question 3
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftRegLeft(out, temp, data_in, clk, load);
	input clk, load;
	input [15:0] data_in;
	output reg out;
	output reg [15:0] temp;
	
	always @ (posedge clk) begin
		if(load) 
			temp <= data_in;
		else begin
			out <= temp[15];
			temp <= {temp[14:0], 1'b0};
		end 
	end

endmodule 