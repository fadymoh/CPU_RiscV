`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:01:29 05/09/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/CPU_XD.v
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

module CPU_XD;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] instruction_word;

	// Outputs
	wire [31:0] Addition_result;
	wire RF_WRITING;
	wire [31:0] Alu_Result;
	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst), 
		.Addition_result(Addition_result), 
		.instruction_word(instruction_word), 
		.RF_WRITING(RF_WRITING),
		.Alu_Result(Alu_Result)
	);
always#5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		instruction_word = 0;

		// Wait 100 ns for global reset to finish
		#10;
		rst = 0;
		#10;
		instruction_word =  32'b00000000100000000000010100010011;
		#10;
		instruction_word =  32'b00000000001000000000010110010011;
		#10;
		
		/*instruction_word =  32'b00000000000100000000000010010011;
		#10;
		instruction_word =  32'b00000000000100000000000010010011;
		#10;
		instruction_word =  32'b00000000000100000000000000010011;
		#10;
      instruction_word =  32'b00000000000100000000000100110011;
		#10;*/
		// Add stimulus here

	end
endmodule
