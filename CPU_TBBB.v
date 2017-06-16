`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:28:36 05/09/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/CPU_TBBB.v
// Project Name:  CPU_RISCV
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataPath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_TBBB;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] Addition_result;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst), 
		.Addition_result(Addition_result)
	);
	always#5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
		
        
		// Add stimulus here

	end
      
endmodule

