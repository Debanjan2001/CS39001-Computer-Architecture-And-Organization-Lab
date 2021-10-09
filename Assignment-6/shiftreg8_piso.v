module shiftreg8_piso(
    out,
    in,
    clk,
    load,
    rst
);

    input [7:0] in;
    input clk,load,rst;
    output reg out;

    reg [7:0] temp;

    always @(posedge clk or posedge rst) begin
        
        if(rst) begin
            temp <= 0;
            out <= 0;
        end

        else if (load) begin
            temp <= in;
            out <= 0;
        end

        else begin
            out <= temp[0];
            temp <= (temp >> 1);
            
        end
    end
endmodule