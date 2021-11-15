`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for register file 
// Description:     register file tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_regfile;

	// Inputs
	reg rst;
	reg clk;
	reg [4:0] regAddr1;
	reg [4:0] regAddr2;
	reg [4:0] writeAddr;
	reg [31:0] writeData;
	reg regWrite;

	// Outputs
	wire [31:0] regData1;
	wire [31:0] regData2;
	wire [31:0] resOut;

	// Instantiate the Unit Under Test (UUT)
	RegFile uut (
		.rst(rst), 
		.clk(clk), 
		.regAddr1(regAddr1), 
		.regAddr2(regAddr2), 
		.writeAddr(writeAddr), 
		.writeData(writeData), 
		.regWrite(regWrite), 
		.regData1(regData1), 
		.regData2(regData2), 
		.resOut(resOut)
	);
	always #1 clk = ~clk;
	initial begin
		// Initialize Inputs
		rst = 1'b1;
		clk = 0;
		regAddr1 = 0;
		regAddr2 = 0;
		writeAddr = 0;
		writeData = 0;
		regWrite = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#1 rst = 0;
		regAddr1 = 5'd5;
		regAddr2 = 5'd31;
		writeAddr = 5'd5;
		regWrite = 1;
		writeData = 32'd64;
		
		#5 
		regAddr1 = 5'd12;
		regAddr2 = 5'd31;
		writeAddr = 5'd12; 
		regWrite = 1;
		writeData = 32'd15;
		
		
		
		#50 $finish;

	end
      
endmodule

