`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group:21
// Members:  Debanjan Saha [19CS30014], Pritkumar Godhani [19CS10048] 
//  
// Module Name: Booth Multiplier Module with Integrated PIPO Shift Register for input loading
// Project Name: Assignment-6 Question 3
//
//////////////////////////////////////////////////////////////////////////////////
module BoothMultWithShiftReg(
    multiplier,
    multiplicand,
    product,
    load,
    start,
    clk,
    rst,
    active
);
    
    input [7:0] multiplicand, multiplier;
    output [15:0] product;

    // Refer to BoothMultiplier.v and shiftreg8_piso.v for their meaning
    input clk, rst, load, start ;
    output active;

    // for shifting multiplier and multiplicand into mr and md.
    wire [7:0] mr, md;

    // Instantiate One shift register
    shiftreg8_pipo PIPO_0(
        .out(mr),
        .in(multiplier),
        .clk(clk),
        .load(load),
        .rst(rst)
    );

    // Instantiate Another shift register
    shiftreg8_pipo PIPO_1(
        .out(md),
        .in(multiplicand),
        .clk(clk),
        .load(load),
        .rst(rst)
    );

    // Instantiate the booth multiplier
    BoothMultiplier BMULT_0(
        .result(product), 
        .multiplicand(md), 
        .multiplier(mr), 
        .clk(clk), 
        .rst(rst), 
        .start(start), 
        .active(active)
    );

endmodule