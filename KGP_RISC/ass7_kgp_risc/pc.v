`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    program counter module  
// Description:     PC stores the instruction address of the current instruction and updates at clock pulse
//
//////////////////////////////////////////////////////////////////////////////////
module PC(
	// inputs
	input clk,
	input rst,
   input [31:0] pc_in,
	// outputs
   output reg [31:0] pc_out
);
	// Program Counter
	always @(posedge clk) begin
		if(rst) begin
			pc_out <= 32'd0;
		end
		else begin
			pc_out <= pc_in;
		end
	end
	
endmodule