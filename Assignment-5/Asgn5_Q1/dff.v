`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:35:45 09/26/2021 
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
module DFF(Q, D, CLK, RST);
	input D, CLK, RST;
	output reg Q;
	
	always @ (posedge CLK or posedge RST) begin
	if(RST)
		Q <= 0;
	else
		Q <= D;
	end
endmodule
