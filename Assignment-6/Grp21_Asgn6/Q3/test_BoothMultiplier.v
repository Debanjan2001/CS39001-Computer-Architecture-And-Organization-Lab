`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: TestBench for Booth Multiplier 
// Project Name: Assignment-6 Question 3
//
//////////////////////////////////////////////////////////////////////////////////

module test_BoothMultiplier;

	// Inputs
	reg [7:0] multiplicand;
	reg [7:0] multiplier;
	reg clk;
	reg rst;
	reg start;

	// Outputs
	wire [15:0] result;
	wire active;

	// Instantiate the Unit Under Test (UUT)
	BoothMultiplier uut (
		.result(result), 
		.multiplicand(multiplicand), 
		.multiplier(multiplier), 
		.clk(clk), 
		.rst(rst), 
		.start(start), 
		.active(active)
	);

	 always #1 clk = ~clk;

    always @(posedge clk) begin
        $display("result = %b,active = %b",result, active);
    end

    initial begin
        clk = 1'b0;
        rst = 1'b0;
		  start = 1'b0;
        multiplier = 6;
        multiplicand = -4;

        $display("Multiplier = %b, Multiplicand = %b \n",multiplier, multiplicand );
        start = 1'b0;

        // load into module
        #1 rst = 1'b1;
        
        #1 rst = 1'b0;
        // module starts product computation now.

        #1 start = 1'b1;
        #1 start = 1'b0;

        #20 $finish; 
    end

endmodule