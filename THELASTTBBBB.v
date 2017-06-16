`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:51:12 05/20/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/THELASTTBBBB.v
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

module THELASTTBBBB;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] value;

	// Outputs
	wire [6:0] sevent;
	wire [3:0] enable;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst), 
		.value(value), 
		.sevent(sevent), 
		.enable(enable)
	);
always#5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		value = 0;
		// Wait 100 ns for global reset to finish
		#10;
		rst = 0;
        
		// Add stimulus here

	end
      
endmodule

