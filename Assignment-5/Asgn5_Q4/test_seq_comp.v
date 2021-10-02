`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: Testbench for SequentialComparator
// Project Name: Assignment-5 Question 4
//
//////////////////////////////////////////////////////////////////////////////////

module test_seq_comp;

	// Inputs
	reg clk;
	reg rst;
	reg rst2;
	reg [31:0] A, B;
	reg op;
	reg load;
	reg on;

	// Outputs
	wire [2:0] out;
	wire A_out, B_out;
	wire [31:0] regtemp_A, regtemp_B;
	
	// Instantiate the Shift Register for A and B
	ShiftRegLeft a(A_out, regtemp_A, A, clk, load);
	ShiftRegLeft b(B_out, regtemp_B, B, clk, load);

	// Instantiate the Unit Under Test (UUT)
	SequentialComparator uut (
		.a_bit(A_out), 
		.b_bit(B_out), 
		.op(op),
		.out(out), 
		.clk(clk), 
		.rst(rst)
	);
	// start the clock
	always #1 clk = ~clk;

	// printing on negative edge to avoid transistional changes on the posedge
	always @ (negedge clk)
		if(on) $display("ShiftRegA: %b, ShiftRegB: %b, OP = %b, L-E-G = %b", regtemp_A, regtemp_B, op, out);
		
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1'b0;
		A = 32'b0;
		B = 32'b0;
		load = 1'b0;
		on = 1'b0;
		op = 1'b0;
		
		// Load A, B into the shift register and keep resetting the FSM until the loading completes
		#1 A = 32'b11001; B = 32'b01011; load = 1'b1; rst = 1'b1;
		// Once loading is completing start the FSM and put signal on to 1 to start printing
		#5 load = 1'b0; rst = 1'b0; on = 1'b1; op = 1'b0;
		
		// once 32 bits are shifted finish the testing
		#64 op = 1'b1; on = 1'b0; 
		#1 $display("All 32 bits shifted. OP = %b. FINAL L-E-G: %b", op ,out);
		#1 $finish;

	end
      
endmodule
