`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:17:48 11/08/2021
// Design Name:   ALU
// Module Name:   /home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_alu.v
// Project Name:  kgp_risc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_alu;

	// Inputs
	reg [31:0] reg1;
	reg [31:0] reg2;
	reg [2:0] op;
	reg cin;
	reg dir;

	// Outputs
	wire [31:0] res;
	wire carryFlag;
	wire zeroFlag;
	wire negFlag;
	wire overflowFlag;
	wire updateCarry;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.reg1(reg1), 
		.reg2(reg2), 
		.op(op), 
		.res(res), 
		.cin(cin), 
		.dir(dir), 
		.carryFlag(carryFlag), 
		.zeroFlag(zeroFlag), 
		.negFlag(negFlag), 
		.overflowFlag(overflowFlag),
		.updateCarry(updateCarry)
	);

	initial begin
		// Initialize Inputs
		reg1 = 0;
		reg2 = 0;
		op = 0;
		cin = 0;
		dir = 0;

		$monitor("A = %b, B = %b, Res = %b, OP = %b, cin = %b, dir = %b, carryFlag = %b, zeroFlag = %b, negFlag = %b, overflowFlag = %b", reg1, reg2, res, op, cin, dir, carryFlag, zeroFlag, negFlag, overflowFlag);
		#100;
		
		#1 op = 3'b000; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b00110010011100110011100111001001; cin = 1'b0;
      
		#3 op = 3'b001; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b00110010011100110011100111001001;
		
		#5 op = 3'b100; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b011; dir = 1'b0;
		
		#7 op = 3'b100; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b011; dir = 1'b1;
		
		#9 op = 3'b101; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b011;
		
		#11 op = 3'b010; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b00110010011100110011100111001001;
		
		#13 op = 3'b011; reg1 = 32'b11001100110010011100110011001001; reg2 = 32'b00110010011100110011100111001001;
		
		#15 $finish();
	end
      
endmodule

