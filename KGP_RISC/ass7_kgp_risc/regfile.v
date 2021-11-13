`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    register file [32, 32Bit Registers]  
// Description:     central register file with 32 registers
//
//////////////////////////////////////////////////////////////////////////////////
module RegFile(
	// Inputs
   input rst,
	input clk,
	input [4:0] regAddr1,
	input [4:0] regAddr2,
	input [4:0] writeAddr,
	input [31:0] writeData,
	input regWrite,
	// Outputs
	output reg [31:0] regData1,
	output reg [31:0] regData2,
	output reg [31:0] resOut
);

	reg [31:0] regBank[31:0];
	integer i;

	always @(negedge clk) begin
		if(rst) begin
			for(i=0;i<32;i=i+1)
				regBank[i] = 32'd0;
		end
		else if(regWrite) begin
			regBank[writeAddr] = writeData;
		end
		resOut = regBank[12];
    end	
	always @(*) begin
		/*if(regAddr1 >= 32 ) begin
			regData1 = 32'hXXXXXXXX;
		end
		else begin*/
			regData1 = regBank[regAddr1];
		//end

		/*if(regAddr2 >= 32) begin
			regData2 = 32'hXXXXXXXX;
		end
		else begin*/
			regData2 = regBank[regAddr2];
		//end
		//$display("regAddr1 = %d, regAddr2 = %d", regAddr1, regAddr2);
		//$display("resOut = %b", regBank[12]);
	end

	
endmodule