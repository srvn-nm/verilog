`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:29:58 12/17/2021
// Design Name:   main
// Module Name:   C:/Users/ASUS.PIESC/Desktop/logicLab/5/DFF/main_test.v
// Project Name:  DFF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// `timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:09:54 12/17/2021
// Design Name:   main
// Module Name:   C:/Users/ASUS.PIESC/Desktop/logicLab/5/DFF/main-test.v
// Project Name:  DFF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_test;

	// Inputs
	reg A;
	reg B;
	reg CLK;

	// Outputs
	wire Y;
	wire Z;
	wire S;
	wire R;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.A(A), 
		.B(B), 
		.CLK(CLK), 
		.Y(Y), 
		.Z(Z), 
		.S(S), 
		.R(R)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#40; A=0;B=0;CLK=0;
		#40; A=0;B=0;CLK=1;
		
		#40; A=0;B=1;CLK=0;
		#40; A=1;B=1;CLK=1;
		
		#40; A=1;B=1;CLK=0;
		#40; A=0;B=1;CLK=1;
		
		#40; A=0;B=1;CLK=0;
		#40; A=0;B=0;CLK=1;
		
		#40; A=1;B=0;CLK=0;
		#40; A=1;B=0;CLK=1;
		
		#40; A=1;B=0;CLK=0;
		#40; A=1;B=1;CLK=1;
		
		#40; A=0;B=0;CLK=0;
		#40; A=0;B=0;CLK=1;
		
		#40; A=0;B=0;CLK=0;
		#40; A=0;B=1;CLK=1;
		
		#40; A=1;B=1;CLK=0;
		#40; A=1;B=1;CLK=1;
		#100;
		$finish;

	end
      
endmodule


// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_test;

	// Inputs
	reg A;
	reg B;
	reg CLK;

	// Outputs
	wire Y;
	wire Z;
	wire S;
	wire R;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.A(A), 
		.B(B), 
		.CLK(CLK), 
		.Y(Y), 
		.Z(Z), 
		.S(S), 
		.R(R)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

