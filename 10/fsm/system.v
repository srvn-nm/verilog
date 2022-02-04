`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:23 12/19/2021 
// Design Name: 
// Module Name:    system 
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
module system(
    input rst,
    input clk,
    input [3:0] din,
    input confirm,
    output [3:0] doutLeft,
    output [3:0] doutRight
    );
wire en1,en2;
wire [3:0] w;
fsm f1(.rst(rst),.clk(clk),.confirm(confirm),.passData(din),.enLeft(en1),.enRight(en2),.dout(w));
register rLeft(.rst(rst),.clk(clk),.en(en1),.din(w),.qout(doutLeft));
register rRight(.rst(rst),.clk(clk),.en(en2),.din(w),.qout(doutRight));

endmodule
