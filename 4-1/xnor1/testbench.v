`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:00:53 11/04/2021
// Design Name:   xnor1
// Module Name:   C:/Users/ASUS.PIESC/Desktop/logicLab/4-1/xnor1/testbench.v
// Project Name:  xnor1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: xnor1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire f;

	// Instantiate the Unit Under Test (UUT)
	xnor1 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.f(f)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		#50 a=0;b=0;c=0;
		#50 a=0;b=0;c=1;
		#50 a=0;b=1;c=0;
		#50 a=0;b=1;c=1;
		#50 a=1;b=0;c=0;
		#50 a=1;b=0;c=1;
		#50 a=1;b=1;c=0;
		#50 a=1;b=1;c=1;
		// Wait 100 ns for global reset to finish
		#100;
        $finish;
		// Add stimulus here

	end
      
endmodule

