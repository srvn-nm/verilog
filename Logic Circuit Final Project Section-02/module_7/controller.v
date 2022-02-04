/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************
--  Student ID  : 9931103
--  Student Name: Sarvin Nami
--  Student Mail: srvn0nm@gmail.com
--  *******************
--  *******************
--  Student ID  : 9931071
--  Student Name: Abtin Zandi
--  Student Mail: abtin81@aut.ac.ir
--  *******************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: controller
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module controller(
input [2:0] system_token,
input request,
input [7:0] TimeData,
input reset,
input clock,
input confirm,
input [2:0] user_token,
output reg [7:0] data_Q,
output reg [7:0] data_P
);
	wire enQ;
	wire enP;
	wire [7:0] dq;
	wire [7:0] dp;
	fsm fsm1(request, TimeData,reset, clock, confirm, enP, enQ);
	register pr(TimeData, clock, reset, enP, dp);
	register qr(TimeData, clock, reset, enQ, dq);
	always @(*)
  if (~(system_token[0]^user_token[0])&~(system_token[1]^user_token[1])&~(system_token[2]^user_token[2]))
  begin
   data_Q <= dq;
	data_P <= dp;
	end
endmodule
