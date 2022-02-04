`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:59:41 12/17/2021 
// Design Name: 
// Module Name:    main 
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
module main(
    input A,
    input B,
    input CLK,
    output Y,
    output Z,
    output S,
    output R
    );
wire s,dffin1,dffin2,qdff1,qdff2,temp,r;
and #(10) (s,qdff2,B);
and #(10) (S,qdff2,B);
or #(10) (dffin1,s,A);
DFF d1(dffin1,CLK,Y,qdff1);
nor #(10) (dffin2,dffin1,qdff1);
DFF d2(dffin2,CLK,temp,qdff2);
and #(10) (r,B,qdff2);
and #(10) (R,B,qdff2);
or #(10) (Z,odff1,r);
endmodule
