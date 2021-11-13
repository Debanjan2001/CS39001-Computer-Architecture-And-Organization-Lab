`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Group: 21 
// Engineers: P. Godhani & D. Saha
// Module Name:    instruction update module  
// Description:     Computes the next instruction to be fed into the PC
//
//////////////////////////////////////////////////////////////////////////////////
module NextInstr(
	// Inputs
	input rst,	
	input [2:0] branch,
	input carry,
	input negative,
	input zero,
	input [2:0] funccode,
	input [31:0] pc,
	input [23:0] label,
	input [31:0] regData,
	// Outputs
	output reg [31:0] nextInstrAddr,
	output reg [31:0] brLinkAddr
);
	wire [31:0] pc_1;
	parameter BTYP1 = 3'b001, BTYP2 = 3'b010, BTYP3 = 3'b100;
	
	// Increment the Program Counter
	assign pc_1 = pc + 1;
	
	// Set the next instruction depending on branch instructions
	always @(*) begin
		
		if(rst) begin
			nextInstrAddr = 32'd0;
			brLinkAddr = 32'd0;
		end
		
		else begin
			brLinkAddr = pc_1;
			case(branch) 
				// br rs
				BTYP1: begin
					nextInstrAddr = regData[31:0];
				end
				
				
				BTYP2: begin
					
					// b L
					if(funccode == 3'b000) begin
						nextInstrAddr = {8'd0,label};
					end

					// bl L
					else if(funccode == 3'b001) begin
						nextInstrAddr = {8'd0,label};
						// Have some doubt here 31 <-- (PC) + 4
						// pc <= pc + 1; // but i havent taken pc inside the module
						
					end
					
					// bcy L
					else if(funccode == 3'b010) begin
						if(carry)
							nextInstrAddr = {8'd0,label};
						else
							nextInstrAddr = pc_1;
					end
					
					// bcny L
					else if(funccode == 3'b011) begin
						if(carry == 0)
							nextInstrAddr = {8'd0,label};
						else
							nextInstrAddr = pc_1;
					end
					
					else begin
						nextInstrAddr = pc_1;
					end
		
				end
				BTYP3: begin
					
					// bltz rs, L
					if(funccode == 3'b000) begin
						if(negative)
							nextInstrAddr = {13'd0,label[18:0]};
						else
							nextInstrAddr = pc_1;
					end
					
					// bz rs, L
					else if(funccode == 3'b001) begin
						if(zero)
								nextInstrAddr = {13'd0,label[18:0]};
							else
								nextInstrAddr = pc_1;
					
					end
					
					else if(funccode == 3'b010) begin
						if(zero == 0)
								nextInstrAddr = {13'd0,label[18:0]};
							else
								nextInstrAddr = pc_1;
					
					end
					
					else begin
						nextInstrAddr = pc_1;
					end
				
				end
				
				default: begin
					nextInstrAddr = pc_1;
				end
			endcase
			
		end
		
	end
	
endmodule