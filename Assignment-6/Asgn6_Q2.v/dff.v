`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:35:24 10/07/2021 
// Design Name: 
// Module Name:    dff 
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
module DFF(Q, D, clk, rst);
	input D, clk, rst;
	output reg Q;
	always @ (posedge clk) begin
		if(rst) begin
			Q <= 1'b0;
		end
		else begin
			Q <= D;
		end
	end
endmodule

