`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for data memory bram single port ram
// Description:     data memory tests
//
//////////////////////////////////////////////////////////////////////////////////
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

		#20
		addra = 10'b1;
		
		#20
		wea = 1'b1;
		addra = 10'b10;
		dina = 32'b101;
		
		#20
		wea = 1'b0;
		addra = 10'b100;
		
		#20
		wea = 1'b0;
		addra = 10'b10;
        
		end
      
endmodule

