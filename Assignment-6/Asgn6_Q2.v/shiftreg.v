`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:12:42 10/07/2021 
// Design Name: 
// Module Name:    shiftreg 
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
