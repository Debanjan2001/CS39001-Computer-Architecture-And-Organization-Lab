`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:03:32 11/09/2021 
// Design Name: 
// Module Name:    pc 
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
module PC(
	input clk,
	input rst,
   input [31:0] pc_in,
   output reg [31:0] pc_out
);
	always @(posedge clk or posedge rst) begin
		if(rst) begin
			pc_out <= 32'd0;
		end
		else begin
			pc_out <= pc_in;
		end
	end
	
endmodule
