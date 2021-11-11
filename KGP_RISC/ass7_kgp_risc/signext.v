`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    sign extendor 
// Description: 	 extends a 16bit input to a 32-bit output whilst preserving sign
//
//////////////////////////////////////////////////////////////////////////////////
module SignExt(in, out);
	input [15:0] in;
	output [31:0] out;
	
	assign out[31:16] = {16{in[15]}};
	assign out[15:0] = in;

endmodule