`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:52 11/04/2021 
// Design Name: 
// Module Name:    xnor_sop 
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
module xnor_sop(
    input a,
    input b,
    input c,
    output f
    );

assign f = a&(~b)&c|(~a)&b&c|(~a)&(~b)&(~c)|a&b&(~c);
endmodule
