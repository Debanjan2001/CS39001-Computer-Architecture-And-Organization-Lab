`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: Master Testbench for Final SequentialComparator With Shift Registers
// Project Name: Assignment-5 Question 4
//
//////////////////////////////////////////////////////////////////////////////////

module master_testbench;
	// Extra Signal to enable printing
	reg on;
	
	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg clk;
	reg rst;
	reg op;
	reg load;
	reg shftrst;

	// Outputs
	wire [2:0] out;
	wire [31:0] regtempA;
	wire [31:0] regtempB;

	// Instantiate the Unit Under Test (UUT)
	SeqCompWithRegister uut (
		.A(A), 
		.B(B), 
		.out(out), 
		.clk(clk), 
		.rst(rst),
		.shftrst(shftrst),
		.op(op), 
		.load(load), 
		.regtempA(regtempA), 
		.regtempB(regtempB)
	);

	always #1 clk = ~clk;

	// printing on negative edge to avoid transistional changes on the posedge
	always @ (negedge clk)
		if(on) $display("ShiftRegA: %b, ShiftRegB: %b, OP = %b, L-E-G = %b", regtempA, regtempB, op, out);
		
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1'b0;
		A = 32'b0;
		B = 32'b0;
		load = 1'b0;
		on = 1'b0;
		op = 1'b0;
		shftrst = 1'b0;
		
		// Load A, B into the shift register and keep resetting the FSM until the loading completes
		#1 A = 32'b1; B = 32'b1; load = 1'b1; rst = 1'b1;
		// Once loading is completing start the FSM and put signal on to 1 to start printing
		#5 load = 1'b0; rst = 1'b0; on = 1'b1; op = 1'b0;
		
		// once 32 bits are shifted finish the testing, stop printing register temporary and print LEG
		#63 op = 1'b1;
		#2 on = 1'b0;
		#1 $display("All 32 bits shifted. OP = %b. FINAL L-E-G: %b", op ,out); 
		#1 $finish;

	end
      
endmodule

