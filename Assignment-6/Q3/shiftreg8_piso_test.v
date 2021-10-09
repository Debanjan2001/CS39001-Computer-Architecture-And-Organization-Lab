module shiftreg8_piso_test;
    reg [7:0] in;
    reg clk,rst,load;
    wire out;

    shiftreg8_piso uut(
        .in(in), .out(out), .clk(clk), .rst(rst), .load(load) 
    );

    always #1 clk = ~clk;

    always @(negedge clk) 
        $display("in = %b,load = %b, rst = %b, out = %b", in, load, rst,  out);
	
    initial begin
        in = 8'd246;
        load = 1'b0;
        clk = 1'b0;
        rst = 1'b0;


        #1 load = 1'b1;

        #2 load = 1'b0; 
        
        #16 $finish;
    end

endmodule