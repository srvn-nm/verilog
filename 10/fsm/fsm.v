`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:21:44 12/19/2021 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
    input rst,
    input clk,
    input confirm,
    input [3:0] passData,
    output enLeft,
    output enRight,
    output [3:0] dout
    );
reg [3:0] dout;
reg enLeft;
reg enRight;
reg [2:0] prvsState,nxtState;
parameter s0=3'b000,s1=3'b001,s2=3'b010,s3=3'b100,s4=3'b101,s5=3'b110,s6=3'b111;
	always @(posedge clk or negedge rst)
if(~rst) prvsState = s0;
else prvsState = nxtState;
	always @(prvsState or passData)
	case(prvsState)
	s0:nxtState=s1;
						s1:if(passData==4'b1001) nxtState=s4;
							else nxtState=s6;
						s2:nxtState=s0;
						s3:nxtState=s0;
						s4:nxtState=s5;
						s5:nxtState=s0;
						s6:nxtState=s6;
endcase
	always @(prvsState or passData)
	case(prvsState)
	s0:begin enLeft=0;enRight=0;dout=4'b0000;end
	s1:begin enLeft=0;enRight=0;dout=4'b0000;end
	s2:begin enLeft=0;enRight=0;dout=4'b0000;end
	s3:begin enLeft=0;enRight=0;dout=4'b0000;end
	s4:begin enLeft=0;enRight=0;dout=4'b0000;end
	s5:if(passData==4'b0000)begin enLeft=0;enRight=1;dout=4'b0000;end
	s5:if(passData==4'b0001)begin enLeft=1;enRight=1;dout=4'b0001;end
	s5:if(passData==4'b0010)begin enLeft=0;enRight=1;dout=4'b0010;end
	s5:if(passData==4'b0100)begin enLeft=0;enRight=1;dout=4'b0100;end
	s5:if(passData==4'b1000)begin enLeft=0;enRight=1;dout=4'b1000;end
	s5:if(passData==4'b1001)begin enLeft=1;enRight=0;dout=4'b1001;end
	s5:if(passData==4'b1010)begin enLeft=0;enRight=1;dout=4'b1010;end
	s5:if(passData==4'b1100)begin enLeft=0;enRight=1;dout=4'b1100;end
	s5:if(passData==4'b0110)begin enLeft=0;enRight=1;dout=4'b0110;end
	s5:if(passData==4'b0011)begin enLeft=1;enRight=1;dout=4'b0011;end
	s5:if(passData==4'b0111)begin enLeft=1;enRight=0;dout=4'b0111;end
	s5:if(passData==4'b1011)begin enLeft=1;enRight=0;dout=4'b1011;end
	s5:if(passData==4'b1110)begin enLeft=0;enRight=1;dout=4'b1110;end
	s5:if(passData==4'b1101)begin enLeft=1;enRight=0;dout=4'b1101;end
	s5:if(passData==4'b1111)begin enLeft=1;enRight=0;dout=4'b1111;end
	s6:begin enLeft=0;enRight=0;dout=4'b0000;end
endcase

endmodule
