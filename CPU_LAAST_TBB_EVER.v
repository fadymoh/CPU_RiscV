`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:26:20 05/20/2017
// Design Name:   DataPath
// Module Name:   G:/AUC/Assembly/Lectures/CPU_RISCV/CPU_LAAST_TBB_EVER.v
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

module CPU_LAAST_TBB_EVER;

	// Inputs
	reg clk;
	reg rst;
	reg [4:0] toggle_switches;

	// Outputs
	wire [3:0] enabler_segment;
	wire [6:0] sevent;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst), 
		.toggle_switches(toggle_switches), 
		.enabler_segment(enabler_segment), 
		.sevent(sevent)
	);
always#5 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst =1;
		toggle_switches = 0;

		// Wait 100 ns for global reset to finish
		#10;
		rst = 0;
        
		// Add stimulus here

	end
      
endmodule

