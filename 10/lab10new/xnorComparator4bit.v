`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:22:27 12/23/2021 
// Design Name: 
// Module Name:    xnorComparator4bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module xnorComparator4bit(input [3:0] first,input [3:0] second,output out);
 wire [3:0] result;
	 xnor
		b0 (result[0], first[0], second[0]),
		b1 (result[1], first[1], second[1]),
		b2 (result[2], first[2], second[2]),
		b3 (result[3], first[3], second[3]);
		
	 and finalResult (out, result[3], result[2], result[1], result[0]);

endmodule
