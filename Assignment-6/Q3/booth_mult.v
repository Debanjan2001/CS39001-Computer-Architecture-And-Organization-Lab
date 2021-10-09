module booth_mult (
    result, multiplicand, multiplier, clk, rst, start, active
);

    input [7:0] multiplicand, multiplier;
    output reg [15:0] result;
    input clk, rst, start;

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

    reg [1:0] state;
    reg [7:0] temp;

    always @(posedge clk or posedge rst) begin
        $display("count = %d, A = %b, Q = %b, M = %b, start=%d, state=%b",count, A, Q, M, start, state);
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
            state <= 2'b0;
        end

        else if(active) begin
            state = {Q[0], Q_prev};
            case (state)
                2'b10: begin
                    temp = A + (~M) + 1'b1;
                    {A, Q, Q_prev} = {temp[7], temp, Q};
                end
                2'b01:begin
                     temp = A + M;
                    {A, Q, Q_prev} = {temp[7], temp, Q};
                end
                   
                default: begin
                    {A, Q, Q_prev} = {A[7], A, Q};   
                end

            endcase
            // Q_prev = Q[0];
            // Q = {A[0],Q[7:1]};
            // A = {A[7],A[7:1]};
            count = count - 1; 
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
        multiplier = 6;
        multiplicand = -4;
        start = 1'b0;

        // load into module
        #1 rst = 1'b1;
        
        // see the power of module.
        #1 rst = 1'b0;
        #1 start = 1'b1;
        #1 start = 0;

        #20 $finish; 
    end

endmodule