`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:15:12 05/13/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/CPU_TBD.v
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

module CPU_TBD;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] instruction_word;
	reg [31:0] initialPCval;
	reg pause;

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
		.Alu_Result(Alu_Result), 
		.initialPCval(initialPCval),
		.pause (pause)
	);
always#5 clk = ~clk;
	initial begin
	// Initialize Inputs
		clk = 0;
		rst = 1;
		instruction_word = 0;
		pause = 0;
		initialPCval = 1;
		initialPCval = 0;
		// Wait 100 ns for global reset to finish
		#10;
		rst = 0;

		/*
		instruction_word = 32'b00000000101000000000000100010011;  	//ADDI x2,x0,10
		#10;	
      instruction_word = 32'b00000000111000000000000110010011;  	//ADDI x3,x0,10
		#10;	
		
		instruction_word = 32'b00000000000000001111010100110111;		//LUI x10
		#10;
		
      //instruction_word = 32'b10000000001000011101000001100011;	//BGT
		//#10;
		
		/*
      instruction_word = 32'b00000000101000011000000110010011;  	//ADDI x3,x3,10
		#10 ;	
		*/
		/*
      instruction_word = 32'b00000000000000101000010001100011; 	//BEQ x5,x0,+8
      instruction_word = 32'b00000000010000010000001000110011; 	//ADD x4,x4,x2
      instruction_word = 32'b00000000000100010001000100010011; 	//SLLI x2,x2,1
      instruction_word = 32'b00000000000100011101000110010011; 	//SRLI x3,x3,1*/
   //   instruction_word = 32'b11111110100111111111000001101111;    //JAL -24
		
		//#10;
		/*instruction_word = 32'b00000000011100011000100001100111;  //jalr x16, x3
										 00000000011100011000100001100111;
	//	instruction_word = 32'b00000000000000000000000000010011;  	//ADDI x2,x0,0
		#10 ;*/
		//pause = 1;	
		// Add stimulus here

	end
      
endmodule
