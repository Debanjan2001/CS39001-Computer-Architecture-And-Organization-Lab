`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048]
//  
// Module Name: Testbench for Sequential Two's Complementor
// Project Name: Assignment-5 Question 2
//
//////////////////////////////////////////////////////////////////////////////////

module test_2scomplement;

	// Inputs
	reg clk;
	reg rst;
	reg [15:0] data;
	reg load;
	reg on;
	// Outputs
	wire out_bit;
	wire serial_out;
	wire [15:0] regtemp;
	
	// Result
	reg [15:0] bitstring_out;
	integer count = 1'd0;
		
	ShiftRegRight sr1(serial_out, regtemp, data, clk, load);
	
	// Instantiate the Unit Under Test (UUT)
	TwosComplementor uut (
		.in_bit(serial_out), 
		.out_bit(out_bit), 
		.clk(clk), 
		.rst(rst)
	);
	// Start the clock
	always #1 clk = ~clk;
	
	// printing on negative edge to avoid transistional changes on the posedge
	always @ (negedge clk)
		if(on) begin
			$display("ShiftReg: %b, Output = %b", regtemp, out_bit);
			if(count > 0) begin
				bitstring_out[count-1] = out_bit;
				$display("Current 2's Complement [Accumulated Output Bits] = %b", bitstring_out);
			end
			count = count + 1'd1;
		end
		
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1'b0;
		data = 16'b0;
		load = 1'b0;
		on = 1'b0;
		
		// Load A, B into the shift register and keep resetting the FSM until the loading completes
		#1 data = 16'b01011; load = 1'b1; rst = 1'b1;
		// Once loading is completing start the FSM and put signal on to 1 to start printing
		#5 load = 1'b0; rst = 1'b0; on = 1'b1;
		
		// once 16 bits are shifted finish the testing
		#33 $finish;

	end
      
endmodule

