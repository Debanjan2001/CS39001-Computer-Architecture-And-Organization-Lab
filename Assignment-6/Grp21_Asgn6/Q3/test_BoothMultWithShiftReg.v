`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: TestBench for Booth Multiplier  with integrated shift register
// Project Name: Assignment-6 Question 3
//
//////////////////////////////////////////////////////////////////////////////////

module test_BoothMultWithShiftReg;

	// Inputs
	reg [7:0] multiplier;
	reg [7:0] multiplicand;
	reg load;
	reg start;
	reg clk;
	reg rst;

	// Outputs
	wire [15:0] product;
	wire active;

	// Instantiate the Unit Under Test (UUT)
	BoothMultWithShiftReg uut (
		.multiplier(multiplier), 
		.multiplicand(multiplicand), 
		.product(product), 
		.load(load), 
		.start(start), 
		.clk(clk), 
		.rst(rst), 
		.active(active)
	);

	always #10 clk = ~clk;

    always @(posedge clk) begin
        $display("Product = %b, IsActive = %b",product, active);
    end

    initial begin

        // Start the clock and initiate all values
        clk = 1'b0;
        rst = 1'b0;
        load = 1'b0;
        start = 1'b0;

        // Set the Multiplier and Multiplicand
        multiplier = 2;
        multiplicand = -4;

        // Sanity Check 
        $display("Multiplier = %b, Multiplicand = %b \n",multiplier, multiplicand );
        
        // Reset Every Module
        #10 rst = 1'b1;

        // Parallely Load the shift registers
        // Before that set reset = false;
        #10 rst = 1'b0;
        #10 load = 1'b1;

        // Start Shifting from the shift registers to mr and md.
        #10 load = 1'b0;

        // After one clock cycle, the shifting will be finished 
        // after that set start = 1 for product computation
        #20 start = 1'b1;

        // Once it has started,it will follow its activity using control signal : 'active'
        // So turn off 'start'
        #20 start = 1'b0;
        
        
        #200 $finish; 
    end

endmodule