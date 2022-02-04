`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:55 12/23/2021 
// Design Name: 
// Module Name:    FSM 
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
module FSM(input [3:0] passedData,input clk,input confirm,input request,input [3:0] password,input [3:0] d,output evenEnable,output oddEnable);
//The FSM circuit which will manage the user inputs,and change the outputs if needed.Using 3 D-FFs and 1 comparator.

 // The password comparator
	 wire p1, p2;
	 xnorComparator4bit checkingPassword (passedData, password, p1);
	 not pInventor (p2, p1);
	 
	 
	 // FlipFlops inputs and outputs
	 wire q0, q02, q1, q12, q2, q22, in0, in1, in2;
	 not 
		Inventor0 (q02, q0),
		Inventor1 (q12, q1),
		Inventor2 (q22, q2);
	 
	 // N2 Flip Flop input
	 wire n2MiddleWire;
	 or n2Middle (n2MiddleWire, q2, confirm);
	 and n2Input (in2, q0, q12, request, n2MiddleWire);
	 
	 // N1 Flip Flop input
	 wire n1MiddleWire;
	 or n1Middle (n1MiddleWire, q2, p2);
	 and n1Input (in1, q0, q12, request, confirm, n1MiddleWire);
	 
	 // N0 Flip Flop input
	 wire n0MiddleWire1, n0MiddleWire2, CP;
	 not cInventor (CP, confirm);
	 and n0Middle1 (n0MiddleWire1, q0, CP);
	 or n0Middle2 (n0MiddleWire2, q22, n0MiddleWire1);
	 and n0Input (in0, q12, request, n0MiddleWire2);
	 
	 
	 // Flip Flops instantiates
	 DFF
		n0 (clk, in0, q0),
		n1 (clk, in1, q1),
		n2 (clk, in2, q2);
	
		
	 // Output functions
	 wire  lp;
	 not dInventor (lp, d[0]);
	 and 
		evenOut (evenEnable, q2, q12, q0, request, confirm, lp),
		oddOut (oddEnable, q2, q12, q0, request, confirm, d[0]);
endmodule
