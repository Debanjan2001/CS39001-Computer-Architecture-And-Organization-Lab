`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:22:20 10/07/2021 
// Design Name: 
// Module Name:    shiftregout 
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
module ShiftRegSIPO(out, in, clk, rst, load);
	input clk, rst, load, in;
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
