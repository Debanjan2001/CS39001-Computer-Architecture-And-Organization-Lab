`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    testbench for alu 
// Description:     alu test
//
//////////////////////////////////////////////////////////////////////////////////
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
	// wire overflowFlag;
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
		//.overflowFlag(overflowFlag),
		.updateCarry(updateCarry)
	);

	initial begin
		// Initialize Inputs
		reg1 = 0;
		reg2 = 0;
		op = 0;
		cin = 0;
		dir = 0;

		$monitor("A = %b, B = %b, Res = %b, OP = %b, cin = %b, dir = %b, carryFlag = %b, zeroFlag = %b, negFlag = %b", reg1, reg2, res, op, cin, dir, carryFlag, zeroFlag, negFlag);
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
