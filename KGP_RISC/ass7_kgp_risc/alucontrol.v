`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    alu control
// Description: 	ALU Control module to decide the ALU Result Selection signal, carry input, and shift direction signals
//
//////////////////////////////////////////////////////////////////////////////////
module ALUControl(ALUOp, funccode, cin, dir, resOp);
	input [4:0] funccode;
	input [1:0] ALUOp;
	parameter R = 2'b01, I = 2'b10, LS = 2'b11, DEF = 2'b00;
	parameter ADD=3'b000, COMP=3'b001, AND=3'b010, XOR=3'b011, SHIFT_L=3'b100, SHIFT_A=3'b101;
	output reg [2:0] resOp;
	output reg cin, dir;
	always @(*) begin
		case (ALUOp)
			LS: begin
				resOp = ADD;
				cin = 1'b0;
				dir = 1'b0;
			end
			
			I: begin
				if(funccode == 5'b00000) begin
					resOp = ADD;
					cin = 1'b0;
					dir = 1'b0;
				end
				else if(funccode == 5'b00001) begin
					resOp = COMP;
					cin = 1'b0;
					dir = 1'b0;
				end
				else begin
					resOp = ADD;
					cin = 1'b0;
					dir = 1'b0;
				end
			end
			
			R: begin
				if(funccode == 5'b00000) begin
					resOp = ADD;
					cin = 1'b0;
					dir = 1'b0;
				end
				else if(funccode == 5'b00001) begin
					resOp = COMP;
					cin = 1'b0;
					dir = 1'b0;
				end
				else if(funccode == 5'b00010) begin
					resOp = AND;
					cin = 1'b0;
					dir = 1'b0;
				end
				else if(funccode == 5'b00011) begin
					resOp = XOR;
					cin = 1'b0;
					dir = 1'b0;
				end
				else if(funccode == 5'b00100 || funccode == 5'b00101) begin
					resOp = SHIFT_L;
					cin = 1'b0;
					dir = 1'b0;
				end
				else if(funccode == 5'b00110 || funccode == 5'b00111) begin
					resOp = SHIFT_L;
					cin = 1'b0;
					dir = 1'b1;
				end
				else if(funccode == 5'b01000 || funccode == 5'b01001) begin
					resOp = SHIFT_A;
					cin = 1'b0;
					dir = 1'b0;
				end
				else begin
					resOp = ADD;
					cin = 1'b0;
					dir = 1'b0;
				end
			end
			
			DEF: begin
				resOp = ADD;
				cin = 1'b0;
				dir = 1'b0;
			end
		endcase	
	end

endmodule
