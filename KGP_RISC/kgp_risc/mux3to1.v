`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:39:38 11/09/2021 
// Design Name: 
// Module Name:    mux3to1 
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
module Mux3To1(A, B, C, sel, out);
	input [31:0] A, B, C;
	input [1:0] sel;
	output reg [31:0] out;
	
	always @(*) begin
		if(sel == 2'b00)
			out = A;
		else if(sel == 2'b01)
			out = B;
		else if(sel == 2'b10)
			out = C;
		else
			out = A;
	end

endmodule
