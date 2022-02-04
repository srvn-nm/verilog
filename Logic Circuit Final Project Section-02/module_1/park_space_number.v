/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************************************************
--  Student ID  : 9931103
--  Student Name: Sarvin Nami
--  Student Mail: srvn0nm@gmail.com
--  *******************************************************
--  *******************************************************
--  Student ID  : 9931071
--  Student Name: Abtin Zandi
--  Student Mail: abtin81@aut.ac.ir
--  *******************************************************
--  Additional Comments:this method will user priority encoder to show the empty park field
--
--*/

/*-----------------------------------------------------------
---  Module Name: park_space_number 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module park_space_number(enable,parking_capacity,park_number);
input enable;//this var will show us that is our parking space full or not?(enable = 0 , enable = 1)
input [7:0] parking_capacity;//capacity of parking
output [2:0] park_number;//the out put ticket
reg [2:0] park_number;

//our priority encoder
always @ (enable,parking_capacity)
begin
if(enable == 0 )park_number = 3'bxxx;//enable --> 0 (parking space full)
else 
begin
case (parking_capacity)
//priority encoder truth table with 8 bit input
//3 bit out put --> park_number

8'b00000001 : park_number = 3'b000;
8'b0000001x : park_number = 3'b001;
8'b000001xx : park_number = 3'b010;
8'b00001xxx : park_number = 3'b011;
8'b0001xxxx : park_number = 3'b100;
8'b001xxxxx : park_number = 3'b101;
8'b01xxxxxx : park_number = 3'b110;
8'b1xxxxxxx : park_number = 3'b111; 
endcase
end
end 
endmodule
