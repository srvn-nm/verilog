`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:56:45 11/04/2021 
// Design Name: 
// Module Name:    xnor1 
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
module xnor1(
    input a,
    input b,
    input c,
    output f
    );
	xnor(f,a,b,c);
	//assign f = ~(a^b^c)

endmodule
