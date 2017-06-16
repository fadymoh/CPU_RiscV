`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:30:38 05/17/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/CPU_TB_ROM.v
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

module CPU_TB_ROM;

	// Inputs
	reg clk;
	reg rst;
	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst),
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

