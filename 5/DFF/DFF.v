`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:23:22 12/16/2021 
// Design Name: 
// Module Name:    DFF 
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
module DFF(
    input D,
    input CLK,
    output Q1,
    output Q2
    );
	wire p1,p2,p3,p4;
	wire temp;
	nand #(15) (p1,p3,CLK);
	and #(10) (temp,p1,p4);
	nand #(10) (p2,temp,CLK);
	nand #(10) (p3,p1,p4);
	nand #(10) (p4,p2,D);
	nand #(10) (Q1,Q2,p1);
	nand #(15) (Q2,Q1,p2);
endmodule
