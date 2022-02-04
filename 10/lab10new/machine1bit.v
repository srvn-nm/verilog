`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:28:10 12/23/2021 
// Design Name: 
// Module Name:    machine1bit 
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
module machine1bit(input clk,input en,input din,output dout); 
	 //checking for positive edge of clock to make the changes on output , based on the input and register enable status.
	 always @ ( posedge clk ) begin
		if ( enable ) dout <= din;
	 end

endmodule
