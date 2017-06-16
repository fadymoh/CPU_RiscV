`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:31:08 05/09/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/CPU_TBBBBD.v
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

module CPU_TBBBBD;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] instruction_word;

	// Outputs
	wire [31:0] Addition_result;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst), 
		.Addition_result(Addition_result), 
		.instruction_word(instruction_word)
	);
	always #5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		instruction_word = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
		#10;
		instruction_word =  32'b00000000000100000111000010010011;
		#10;
		instruction_word =  32'b00000000000100000111000000010011;
		#10;
      instruction_word =  32'b00000000000100000000000000110011;
		#10;
		// Add stimulus here

	end
      
endmodule

