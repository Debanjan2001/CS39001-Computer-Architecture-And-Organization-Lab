`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014]
//  
// Module Name: Parallel In Serial Out Shift Register module
// Project Name: Assignment-6 Question 1
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftRegPISO(out, data, in, clk, load, rst);
	input clk, load, rst;
	input [7:0] in;
	output reg [7:0] data;
	output reg out;
	
	
	always @ (posedge clk) begin
		if(load) begin
			data <= in;
		end
		else if(rst) begin
			data <= 8'b0;
		end
		else begin
			out <= data[0];
			data <= {1'b0, data[7:1]};
		end
	end

endmodule
