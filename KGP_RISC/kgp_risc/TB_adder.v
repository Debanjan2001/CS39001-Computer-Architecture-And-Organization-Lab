`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: PG & DS
//
// Create Date:   00:17:28 11/08/2021
// Design Name:   Adder
// Project Name:  kgp_risc  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder
////////////////////////////////////////////////////////////////////////////////
module TB_adder;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg cin;

	// Outputs
	wire [31:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	Adder uut (
		.A(A), 
		.B(B), 
		.sum(sum), 
		.cin(cin), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		A = 32'b0;
		B = 32'b0;
		cin = 1'b0;
		$monitor("A=%b, B=%b, CarryIn=%b, CarryOut=%b, Sum=%b", A, B, cin, cout, sum);
		#100;
		#1 A = 32'b11001100110010011100110011001001; B = 32'b00110010011100110011100111001001; cin = 1'b0;
		#5 #1 A = 32'b11001100110010011100110011001001; B = 32'b11110010011100110011100111001001; cin = 1'b0;
		#10 $finish;

	end
      
endmodule

