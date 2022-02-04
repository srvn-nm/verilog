`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:06:54 01/23/2022
// Design Name:   controller
// Module Name:   C:/Users/ASUS.PIESC/Desktop/Logic Circuit Final Project Section-01/module_7/test_bench.v
// Project Name:  module_7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_bench;
   //Inputs
reg [2:0]      system_token;
reg            request;
reg  [7:0]    TimeData;
reg           reset;
reg           clock;
reg           confirm ;
reg  [2:0]    user_token;
   //Outputs
wire   [7:0]  data_Q;
wire   [7:0]  data_P;
// Instantiate the Unit Under Test (UUT)
	controller uut (
		.system_token(system_token), 
		.request(request), 
		.TimeData(TimeData), 
		.reset(reset), 
		.clock(clock), 
		.confirm(confirm), 
		.user_token(user_token), 
		.data_Q(data_Q), 
		.data_P(data_P)
	);

initial begin
// Initialize Inputs
		system_token = 3'b101;
		request = 1'b0;
		reset = 1'b0;
		
		
		#30
		reset = 1'b1;
		request = 1'b1;

		#30
		//S1
		request = 1'b1;
		confirm = 1'b1;
		user_token = 3'b101;
		
		#40
		//S2
		request = 1'b1;
		confirm = 1'b1;
		TimeData = 8'b11110010;
end

initial
   begin
      clock = 1'b0;
      #600 $finish; 
   end

always
   #10 clock = ~clock;


endmodule


