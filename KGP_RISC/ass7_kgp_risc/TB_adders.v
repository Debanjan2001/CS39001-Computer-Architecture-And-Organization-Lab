`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for adder  
// Description:     adder tests
//
//////////////////////////////////////////////////////////////////////////////////
module TB_adders;

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
		//.of(of)
	);

	initial begin
		// Initialize Inputs
		A = 32'b0;
		B = 32'b0;
		cin = 1'b0;
		$monitor("A=%b, B=%b, CarryIn=%b, CarryOut=%b, Sum=%b", A, B, cin, cout, sum);
		#100;
		#1 A = 32'b11001100110010011100110011001001; B = 32'b00110010011100110011100111001001; cin = 1'b0;
		#5 A = 32'b11001100110010011100110011001001; B = 32'b11110010011100110011100111001001; cin = 1'b0;
		#6 A = 32'b01111100110010011100110011001001; B = 32'b01110010011100110011100111001001; cin = 1'b0;
		#10 $finish;

	end
      
endmodule