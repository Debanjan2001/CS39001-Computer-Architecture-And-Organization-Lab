`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:15:45 11/09/2021
// Design Name:   instrmem
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_imem.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: instrmem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_imem;

	// Inputs
	reg clka;
	reg rsta;
	reg [9:0] addra;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	instrmem uut (
		.clka(clka), 
		.rsta(rsta), 
		.addra(addra), 
		.douta(douta)
	);

	always #10 clka = ~clka;
	initial begin
		// Initialize Inputs
		clka = 0;
		rsta = 0;
		addra = 0;
	
		#100 addra = 10'b1;
		
		#100 addra = 10'b10;
       
		// Add stimulus here

	end
      
endmodule

