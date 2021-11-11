`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for the processor  
// Description:     final top level module with the PC, datapath, and controls connected
//
//////////////////////////////////////////////////////////////////////////////////
module TB_risc;

	// Inputs
	reg CLK;
	reg MEMCLK;
	reg RST;

	// Outputs
	wire [31:0] resOut, PC_;

	// Instantiate the Unit Under Test (UUT)
	RISC uut (
		.CLK(CLK), 
		.MEMCLK(MEMCLK), 
		.RST(RST), 
		.resOut(resOut), 
		.PC_(PC_)
	);
	always #10 CLK = ~CLK;
	always #1 MEMCLK = ~MEMCLK;
	initial begin
		// Initialize Inputs
		CLK = 0;
		MEMCLK = 0;
		RST = 1'b1;

		#50 RST = 1'b0;
		
		$monitor("resOut = %b", resOut);
      #5000 $finish();

	end
      
endmodule

