`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:03 12/19/2021 
// Design Name: 
// Module Name:    register 
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
module register(
    input rst,
    input clk,
    input en,
    input [3:0] din,
    output [3:0] qout
    );
reg [3:0] qout;
always @(posedge clk)
if(en) qout <=din;
else begin qout[0]<=qout[1];qout[1]<=qout[2];qout[2]<=qout[3];qout[3]<=rst;end

endmodule
