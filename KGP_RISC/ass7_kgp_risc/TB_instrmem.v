`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for instruction memory bram single port rom 
// Description:     instruction memory tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_instrmem;

	// Inputs
	reg clka;
	reg [9:0] addra;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	InstrMem uut (
		.clka(clka), 
		.addra(addra), 
		.douta(douta)
	);
	always #10 clka = ~clka;
	initial begin
		// Initialize Inputs
		clka = 0;
		addra = 0;

		#100 addra = 10'b1;
		
		#100 addra = 10'b10;
       
		#1000 $finish();

	end
      
endmodule

