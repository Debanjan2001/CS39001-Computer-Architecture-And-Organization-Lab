`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Pritkumar Godhani [19CS10048],  Debanjan Saha [19CS30014],
//  
// Module Name: 8 bit Shift Register (Parallel-in-Parallel-out)
// Project Name: Assignment-6 Question 3
//
//////////////////////////////////////////////////////////////////////////////////

module shiftreg8_pipo (
    out,
    in,
    clk,
    load,
    rst
);
	
	 // 8 bit input line
    input [7:0] in;
	 
    input clk,load,rst;
    
	 // 8 bit output line
	 output reg [7:0] out;
	
	 // temporary lines for storing input when loading
    reg [7:0] temp;

    always @(posedge clk) begin
        if(rst) begin
            temp <= 0;
            out <= 0;
        end

        else if (load) begin
            temp <= in;
            out <= 0;
        end

        else begin
            out <= temp;
        end
    end
endmodule