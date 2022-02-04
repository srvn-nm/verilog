`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:35:37 12/23/2021
// Design Name:   FSM
// Module Name:   C:/Users/ASUS.PIESC/Desktop/logicLab/10/lab10new/testBench.v
// Project Name:  lab10new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testBench;

	// Inputs
	reg [3:0] passedData;
	reg clk;
	reg confirm;
	reg request;
	reg [3:0] password;
	reg [3:0] d;

	// Outputs
	wire evenEnable;
	wire oddEnable;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.passedData(passedData), 
		.clk(clk), 
		.confirm(confirm), 
		.request(request), 
		.password(password), 
		.d(d), 
		.evenEnable(evenEnable), 
		.oddEnable(oddEnable)
	);
	
	initial begin
		// Clock intialize
		clk = 0;
		repeat (30)
			#10 clk = ~ clk;
	end
	
	initial begin
		// Initialize Inputs
		passedData = 4'b1010;
		clk = 0;
		confirm = 0;
		request = 0;
		password = 4'b1000;
		d = 4'b0001;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// Defining a process
		# 10
		request = 1;
		# 20
		confirm = 1;
		# 20
		confirm = 1;
		# 20
		request = 0;
		confirm = 0;
		# 20
		password = 4'b1010;
		request = 1;
		confirm = 1;
		# 20
		d = 4'b0000;
		confirm = 1;
		# 20
		request = 0;
		confirm = 0;
		# 20
		password = 4'b1010;
		request = 1;
		confirm = 1;
		# 20
		d = 4'b0011;
		confirm = 0;
		# 20
		request = 0;
		
		confirm = 0;
		# 20
		password = 4'b1010;
		request = 1;
		confirm = 1;
		# 20
		d = 4'b0011;
		confirm = 1;
		# 20
		request = 0;
		$finish;
		
	end
      
endmodule

