`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:54:59 11/09/2021
// Design Name:   RISC
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_Master.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RISC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Master;

	// Inputs
	reg CLK;
	reg RST;
	
	// Outputs
	wire [31:0] resOut, PC;

	// Instantiate the Unit Under Test (UUT)
	RISC uut (
		.CLK(CLK), 
		.RST(RST),
		.resOut(resOut),
		.PC(PC)
	);
	always #10 CLK = ~CLK;
	initial begin
		// Initialize Inputs
		CLK = 1'b0;
		RST = 1'b1;

		#50
		RST = 1'b0;
		
		$monitor("resOut=%b", resOut);
		#4000 $finish();

	end
      
endmodule

