`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048]
//  
// Module Name: Right Shift Register [auxiliary module]
// Project Name: Assignment-5 Question 2
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftRegRight(out, temp, data_in, clk, load);
	input clk, load;
	input [15:0] data_in;
	output reg out;
	output reg [15:0] temp;
	
	always @ (posedge clk) begin
		if(load)
			temp <= data_in;
		else begin
			out <= temp[0];
			temp <= {1'b0, temp[15:1]};
			end
	end

endmodule
