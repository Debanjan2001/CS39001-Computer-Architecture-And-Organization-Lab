module booth_mult (
    result, multiplicand, multiplier, clk, rst, start, active
);

    input [7:0] multiplicand, multiplier;
    output reg [15:0] result;
    input clk, rst;
    
    // whether to start the computation or not.
    input start;

    // Denotes whether module is active and computing product or not.
    output reg active;


    // Following the Standard Booth Algorithm Convention
    // A => Will contain Leftmost 8 bits of the final product to be generated.
    // Q => Will contain Rightmost 8 bits of the final product to be generated.
    // M => Will hold the multiplicand to add or subtract between the generation of product
    reg [7:0] A,Q,M;
    
    // Q_prev => LSB of Q stored before right shifting Q. Used for decision steps in Booth Algo. 
    reg Q_prev;

    // count of how many bits read so far.
    reg [3:0] count;

    // what is the state '10' or '01'
    reg [1:0] state;
    reg [7:0] temp;

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            active <= 1'b0;
            result <= 16'b0; 
            count <= 4'b0;
            A <= 8'b0;
            Q <= 8'b0;
            Q_prev <= 1'b0;
            M <= 8'b0;
        end

        if(start) begin
            active <= 1'b1;
            result <= 16'b0; 
            count <= 4'b1000;
            A <= 8'b0;
            Q <= multiplier;
            Q_prev <= 1'b0;
            M <= multiplicand;
        end

        else if(active) begin
            state = {Q[0], Q_prev};
            case (state)
                2'b10: begin
                    // QQ_prev =  10
                    temp = A + (~M) + 1'b1;   // A - M is equivalent to adding 2's compliment of M
                    {A, Q, Q_prev} <= {temp[7], temp, Q};
                end
                2'b01:begin
                    // QQ_prev =  01
                    temp = A + M;  
                    {A, Q, Q_prev} <= {temp[7], temp, Q};
                end
                   
                default: begin
                    // QQ_prev =  11 or 00 
                    {A, Q, Q_prev} <= {A[7], A, Q};   
                end
            endcase

            count <= count - 1; 
            active <= (count > 0);
            result <= {A,Q};
        end
    end
    
endmodule


module booth_tb();

    reg [7:0] multiplier,multiplicand;
    wire [15:0] result;

    reg clk,rst,start;
    wire active;

    booth_mult uut(
        .result(result),
        .multiplier(multiplier),
        .multiplicand(multiplicand),
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
        multiplier = 1;
        multiplicand = -5;

        $display("Multiplier = %b, Multiplicand = %b",multiplier, multiplicand );
        start = 1'b0;

        // load into module
        #1 rst = 1'b1;
        
        // module starts product computation now.
        #1 rst = 1'b0;
        #1 start = 1'b1;
        #1 start = 1'b0;

        #20 $finish; 
    end

endmodule