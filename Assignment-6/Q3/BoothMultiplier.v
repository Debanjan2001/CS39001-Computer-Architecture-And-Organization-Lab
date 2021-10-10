`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: Booth Multiplier 
// Project Name: Assignment-6 Question 3
//
//////////////////////////////////////////////////////////////////////////////////
module BoothMultiplier (
    result, 
    multiplicand, 
    multiplier, 
    clk, 
    rst, 
    start, 
    active
);

    input [7:0] multiplicand, multiplier;
    output reg [15:0] result;
    input clk, rst;
     
    // Control Singal to decide whether to initialize the bits of A, Q, M
    input start;

    // Control Singal to decide whether module is active and computing product or not.
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

    // what is the state QQ_prev ==> '10' or '01' or '00' or '11'
    reg [1:0] state;

    // Temporary for calculating A + M or A - M 
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

        else if(start) begin
            active <= 1'b1;
            result <= 16'b0; 
            count <= 4'b1000;
            A <= 8'b0;
            Q <= multiplier;
            Q_prev <= 1'b0;
            M <= multiplicand;
        end
		  
		  else if(active) begin
            state = {Q[0],Q_prev}; 
            case (state)

                2'b10: begin
                    // QQ_prev =  10
                    temp = A + (~M) + 1'b1;   // A - M is equivalent to adding 2's compliment of M
                    // Arithmetic Right Shift of the concatenated bits tempQQ_prev
						  {A, Q, Q_prev} <= {temp[7], temp, Q};
                end

                2'b01:begin
                    // QQ_prev =  01
                    temp = A + M;  
						  // Arithmetic Right Shift of the concatenated bits tempQQ_prev
                    {A, Q, Q_prev} <= {temp[7], temp, Q};
                end
                   
                default: begin
                    // QQ_prev =  11 or 00 
						  
						  // Arithmetic Right Shift of the concatenated bits AQQ_prev
                    {A, Q, Q_prev} <= {A[7], A, Q};   
                end
            endcase

            result <= {A,Q};
            active <= (count > 4'b0);
            count <= (count - 4'b1); 
        end
        
    end
    
endmodule