`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:52:50 12/23/2021 
// Design Name: 
// Module Name:    machine4bit 
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
module machine4bit(input clk,input en,input [3:0] din,output [3:0] dout);

	 // Input is a 4 bit vector and output is also a 4 bit vector.
	 
	 //connecting wires
	 reg [3:0] d;
	 
	 //1bits registers
	 machine1bit
		f0 (clk, en, d[0], dout[0]),
		f1 (clk, en, d[1], dout[1]),
		f2 (clk, en, d[2], dout[2]),
		f3 (clk, en, d[3], dout[3]);
	
	 //Dataflow
	 always @ ( posedge clk ) begin
		d[0] <= din[0];
		d[1] <= din[1];
		d[2] <= din[2];
		d[3] <= din[3];
	 end
endmodule
