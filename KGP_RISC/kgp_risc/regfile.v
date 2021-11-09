`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:38 11/09/2021 
// Design Name: 
// Module Name:    regfile 
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
module RegFile(
   input rst,
	input clk,
	input [4:0] regAddr1,
	input [4:0] regAddr2,
	input [4:0] writeAddr,
	input [31:0] writeData,
	input regWrite,
	output reg [31:0] regData1,
	output reg [31:0] regData2
);

	reg [31:0] regBank[31:0];
	integer i;

	always @(posedge clk or posedge rst) begin

		if(rst) begin
			for(i=0;i<32;i=i+1)
				regBank[i] = 32'd0;
		end

		else if(regWrite) begin
			regBank[writeAddr] = writeData;
		end
	end

	always @(*) begin
		if(regAddr1 >= 32 ) begin
			regData1 = 32'hXXXXXXXX;
		end
		else begin
			regData1 = regBank[regAddr1];
		end

		if(regAddr2 >= 32 ) begin
			regData2 = 32'hXXXXXXXX;
		end
		else begin
			regData2 = regBank[regAddr2];
		end
	end


endmodule
