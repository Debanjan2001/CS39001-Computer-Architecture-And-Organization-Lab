`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:12:05 11/09/2021
// Design Name:   DataMem
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_datamem.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_datamem;
	// Inputs
	reg clka;
	reg rsta;
	reg [0:0] wea;
	reg [9:0] addra;
	reg [31:0] dina;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	DataMem uut (
		.clka(clka), 
		.rsta(rsta), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);
	always #10 clka = ~clka;
	initial begin
		// Initialize Inputs
		clka = 0;
		rsta = 0;
		wea = 0;
		addra = 0;
		dina = 0;

		#100
		addra = 10'b1;
		
		#100
		wea = 1'b1;
		addra = 10'b10;
		dina = 32'b101;
		
		#100
		wea = 1'b0;
		addra = 10'b100;
		
		#100
		wea = 1'b0;
		addra = 10'b10;
        
		end
      
endmodule

