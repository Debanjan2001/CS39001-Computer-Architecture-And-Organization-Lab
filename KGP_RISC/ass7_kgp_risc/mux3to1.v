`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    3:1 multiplexor 
// Description: 	 mulitplexor 3:1 
// 					 
//////////////////////////////////////////////////////////////////////////////////
module Mux3To1(A, B, C, sel, out);
	input [31:0] A, B, C;
	input [1:0] sel;
	output reg [31:0] out;
	always @(*) begin
        if(sel == 2'b00) begin
            out = A;
            end
        else if(sel == 2'b01) begin
            out = B;
            end
        else if(sel == 2'b10) begin
            out = C;
            end
        else begin
            out = A;
            end
    end

endmodule