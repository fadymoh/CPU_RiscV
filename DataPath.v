module clkDiv(clk, reset, clkA, clkB, en);
    parameter n= 8;
    parameter k = 1;
    parameter l = 2;
    input clk, reset, en;
    output reg clkA, clkB;
    reg [31:0]counterA, counterB;
    always @(posedge clk) begin
        if(reset) begin
            counterA<=32'd1;
            counterB<=32'd1;
            clkA <= 1'b0;
            clkB <= 1'b0;
        end
        else begin
            if(en) begin
                if(counterA == (n/(2*k))) begin
                    clkA <= ~clkA;
                    counterA <= 32'd1;
                end
                else begin
                counterA <= counterA +1;
                end
                
                if(counterB == (n/(2*l))) begin
                    clkB <= ~clkB;
                    counterB <= 32'd1;
                end
                else begin
                counterB <= counterB +1;
                end
            end
            else begin
                counterA <= counterA;
                counterB <= counterB;
                clkB <= clkB;
                clkA <= clkA;
            end            
        end
    end
endmodule
module prog(toggle,seven,en,clk);
input [15:0] toggle;
input  clk;
output reg [6:0] seven;
output reg [3:0] en;
wire [9:0] nums;
wire clkA, clkB;
wire [6:0] s [4:1];

reg rst;

 
binary_to_BCD bcd(toggle,nums[3:0],nums[7:4],nums[9:8]);

Sevenseg s0(.in(toggle[3:0]), .out(s[1]));
Sevenseg s1(.in(toggle[7:4]), .out(s[2]));
Sevenseg s2(.in(toggle[11:8]), .out(s[3]));
Sevenseg s3(.in(toggle[15:12]), .out(s[4]));


clkDiv #(50000000,500, 1) c342(clk,1'b0, clkA, clkB, 1'b1);


initial begin en = 4'b1110; seven = 7'b1111111;  end


always @(posedge clkA) begin
	case (en) 
	4'b1110: begin seven <= s[2]; en <= 4'b1101; end
	4'b1101: begin seven <= s[3]; en <= 4'b1011; end
	4'b1011: begin seven <= s[4]; en <= 4'b0111; end
	default: begin seven <= s[1]; en <= 4'b1110; end
	endcase
end
endmodule

////////////////////////////////////////////////////////////////////////////////////////////////////////////
module binary_to_BCD(A,ONES,TENS,HUNDREDS);
input [7 :0] A;
output [3:0] ONES, TENS;
output [1:0] HUNDREDS;
wire [3:0] c1,c2,c3,c4,c5,c6,c7;
wire [3:0] d1,d2,d3,d4,d5,d6,d7;

assign d1 = {1'b0,A[7:5]};
assign d2 = {c1[2:0],A[4]};
assign d3 = {c2[2:0],A[3]};
assign d4 = {c3[2:0],A[2]};
assign d5 = {c4[2:0],A[1]};
assign d6 = {1'b0,c1[3],c2[3],c3[3]};
assign d7 = {c6[2:0],c4[3]};
add3 m1(d1,c1);
add3 m2(d2,c2);
add3 m3(d3,c3);
add3 m4(d4,c4);
add3 m5(d5,c5);
add3 m6(d6,c6);
add3 m7(d7,c7);
assign ONES = {c5[2:0],A[0]};
assign TENS = {c7[2:0],c5[3]};
assign HUNDREDS = {c6[3],c7[3]};

endmodule


/////////////////////////////////////////////////////////////////////

module add3(in,out);
input [3:0] in;
output [3:0] out;
reg [3:0] out;

always @ (in)
	case (in)
	4'b0000: out = 4'b0000;
	4'b0001: out = 4'b0001;
	4'b0010: out = 4'b0010;
	4'b0011: out = 4'b0011;
	4'b0100: out = 4'b0100;
	4'b0101: out = 4'b1000;
	4'b0110: out = 4'b1001;
	4'b0111: out = 4'b1010;
	4'b1000: out = 4'b1011;
	4'b1001: out = 4'b1100;
	default: out = 4'b0000;
	endcase
endmodule
///////////////////////////////////////////////////////////////////////////////////////////////////////////
module Sevenseg(in, out);
	input [3:0] in;
	output reg [6:0] out;
	
	always @ (in) begin 
		case(in)
			4'd0: out =7'b0000001;
			4'd1: out =7'b1001111;
			4'd2: out =7'b0010010;
			4'd3: out =7'b0000110;
			4'd4: out =7'b1001100;
			4'd5: out =7'b0100100;
			4'd6: out =7'b0100000;
			4'd7: out =7'b0001111;
			4'd8: out =7'b0000000;
			4'd9: out =7'b0000100;
			4'd10: out =7'b0001000;
			4'd11: out =7'b1100000;
			4'd12: out =7'b0110001;
			4'd13: out =7'b1000010;
			4'd14: out =7'b0110000;
			4'd15: out =7'b0111000;
			default: out= 7'b1111111;
		endcase
	end
endmodule
module immediates_generator ( inst , I , S , B , U , J  );

input [31:0] inst ;
output [31:0] I , S , B , U , J ;


//I immediate
assign I[0] = inst[20] ;
assign I[4:1] = inst[24:21] ;
assign I[10:5] = inst[30:25] ;

assign I[31:11] = { 21 { inst[31] } } ;

//S type 
assign S[0] = inst[7] ;
assign S[4:1] = inst[11:8] ;
assign S[10:5] = inst[30:25] ;

assign S[31:11] = { 21 { inst[31] } } ;


//B type 
assign B[0] = 1'b0 ;
assign B[4:1] = inst[11:8] ;
assign B[10:5] = inst[30:25] ;
assign B[11] = inst[7] ;

assign B[31:12] = { 20 {inst[31]} } ;



//U type 

assign U[11:0] = 12'b0 ;
assign U[19:12] = inst[19:12] ;
assign U[30:20] = inst[30:20] ;
assign U[31] = inst[31] ;


//J Type 
assign J[0] = 1'b0 ;
assign J[4:1] = inst[24:21] ;
assign J[10:5] = inst[30:25] ;
assign J[11] = inst[20] ;
assign J[19:12] = inst[19:12] ;

assign J[31:20] = { 12 {inst[31]} } ;

endmodule


module Control_Unit (opcode, func3, func7, alu_op,  REG_WRITE, ALU_SRC , MEM_WRITE, MEM_TO_REG, I, S, B, U, J, Correct_immediate , check , type ) ;

	input [6:0] opcode;
	input [2:0] func3;
	input [6:0] func7;
	input [31:0] I, S, B, U, J ;

	output reg [3:0] alu_op;

	output reg REG_WRITE;
	output reg ALU_SRC;
	output reg MEM_WRITE;
	output reg [1:0]MEM_TO_REG;
	output reg [31:0] Correct_immediate;

	output reg check ;
	output reg [3:0] type ;


	always @(opcode or func3 or func7 or I or S or B or U or J)
	begin //beginning of always block
	if (opcode == 7'b0110011)  //R-Type Instructions

		begin
		
		check = 1'b0 ;

		REG_WRITE = 1'b1;
		MEM_WRITE = 1'b0;
		ALU_SRC = 1'b0;
		//PC_SRC = 1'b1;
		MEM_TO_REG = 2'b01;
		if (func3 == 3'b000)

		begin
			if (func7 == 7'b0000000)

				alu_op = 4'b0000; //ADD

			else if (func7 == 7'b0100000)

				alu_op = 4'b0001; //SUB

		end

		else if (func3 == 3'b001)

			alu_op = 4'b0101; //SLL

		else if (func3 == 3'b010)

			alu_op = 4'b0110; //SLT

		else if (func3 == 3'b011)

			alu_op = 4'b0110; //SLTU

		else if (func3 == 3'b100)

			alu_op = 4'b0100; //XOR

		else if (func3 == 3'b101)

		begin

			if (func7 == 7'b0000000)

				alu_op = 4'b1000; //SRL

			else if (func7 == 7'b0100000)

				alu_op = 4'b0111; //SRA

		end

		else if (func3 == 3'b110)

			alu_op = 4'b0011; //OR	

		else if (func3 == 3'b111)

			alu_op = 4'b0010; //AND

	end

	else if (opcode == 7'b0010011)  //I_type Instructions

	begin

		check = 1'b0 ;
		REG_WRITE = 1'b1;
		ALU_SRC = 1'b1;
		//PC_SRC = 1'b1;
		MEM_TO_REG = 2'b01;
		MEM_WRITE = 1'b0;
		Correct_immediate = I;
		if (func3 == 3'b000)

			alu_op = 4'b0000; //ADDI

		else if (func3 == 3'b001)

			alu_op = 4'b0101; //SLLI

		else if (func3 == 3'b010)

			alu_op = 4'b0110; //SLTI

		else if (func3 == 3'b011)

			alu_op = 4'b0110; //SLTIU

		else if (func3 == 3'b100)

			alu_op = 4'b0100; //XORI

		else if (func3 == 3'b101)

		begin

			if (func7 == 7'b0000000)

				alu_op = 4'b1000; //SRLI

			else if (func7 == 7'b0100000)

				alu_op = 4'b0111; //SRAI

		end

		else if (func3 == 3'b110)

			alu_op = 4'b0011; //ORI

		else if (func3 == 3'b111)

			alu_op = 4'b0010; //ANDI

		end

		else if (opcode == 7'b0100011)  //SW Instructions

		begin 

			check = 0 ;
			REG_WRITE = 1'b0;
			ALU_SRC = 1'b1;
			//PC_SRC = 1'b1;
			alu_op = 4'b0000;
			MEM_WRITE = 1'b1;
			MEM_TO_REG = 2'b00;
			Correct_immediate = S;
		end

		else if (opcode == 7'b0000011)  //LW Instructions

		begin

			check = 1'b0 ;
			alu_op = 0000;
			//PC_SRC = 1'b1;
			REG_WRITE = 1'b1;
			ALU_SRC = 1'b1;
			MEM_TO_REG = 2'b00;
			MEM_WRITE = 1'b0;
			Correct_immediate = I;

	end

	else if ( opcode == 7'b1100011 )  //Branch Instructions

	begin

			check = 1 ;
			REG_WRITE = 1'b0;
			ALU_SRC = 1'b0;
			MEM_TO_REG = 2'b00;
			MEM_WRITE = 1'b0;
			Correct_immediate = B;

			//BEQ
			if ( func3  == 3'b000 )begin
				alu_op = 4'b0001;
				type = { 0 , func3 } ;
			end
			//BNE
			else
				if ( func3  == 3'b001 ) begin
					alu_op = 4'b0001 ;
					type = { 0 , func3 } ;
				end
			//BLT
			else
				if ( func3 == 3'b100) begin
					alu_op = 4'b0110 ;
					type = { 0 , func3 } ;
				end
			//BGE
			else 
				if ( func3  == 3'b101 ) begin
					alu_op = 4'b0110 ;
					type = { 0 , func3 } ;
				 
				end
			//BLTU
			else 
				if ( func3 == 3'b110 ) begin
					alu_op = 4'b0110 ;
					type = { 0 , func3 } ;
				end		
			//BGEU
			else 
				if ( func3 == 3'b111 ) begin
					alu_op = 4'b0110 ;
					type = { 0 , func3 } ;
				end
	end


	else if (opcode == 7'b1100111)  //JALR Instruction

	begin

		check = 1 ;
		type = 4'b1001 ;
		REG_WRITE = 1'b1;
		MEM_TO_REG = 2'b11;
		MEM_WRITE = 1'b0;
		//PC_SRC = 1'b0;
		ALU_SRC = 1'b1;
		alu_op = 4'b0000;
		Correct_immediate =  I;
		
	end

	else if (opcode == 7'b1101111)  //JAL Instruction

	begin

		check = 1 ;
		type = 4'b1111 ;
		
		REG_WRITE = 1'b1; //
		//PC_SRC = 1'b0;
		MEM_TO_REG = 2'b10; //
		ALU_SRC = 1'b1;  //
		alu_op = 4'b0000;
		MEM_WRITE = 1'b0;
		Correct_immediate = J;

	end

	else if (opcode == 7'b0010111)  //AUI PC Instruction

	begin

		check = 1 ;
		type = 4'b1111 ;
		REG_WRITE = 1'b1;
		ALU_SRC = 1'b0;
		MEM_TO_REG = 2'b11;
		MEM_WRITE = 1'b0;
		//PC_SRC = 1'b0;
		alu_op = 4'b0000;
		Correct_immediate = U;
		
	end

	else if (opcode == 7'b0110111)  //LUI Instruction

	begin
		
		check = 1'b0 ;
		type = 4'b1111 ;
		REG_WRITE = 1'b1;
		//PC_SRC = 1'b0;
		MEM_WRITE = 1'b0;
		ALU_SRC = 1'b1;
		MEM_TO_REG = 2'b01;
		alu_op = 4'b0000;
		Correct_immediate =  U;

	end

	end //end of always block

endmodule

module MUX_2to1( input1 , input2, select, out );
	parameter N = 32;
   input [N-1:0] input1, input2;
   input select;
   output [N-1:0]out;
   reg [N-1:0]out;
  
  always @(input1 or input2 or select )
    begin 
      case(select)
       
          1'b0:   out=input1;
          1'b1:  out=input2;
          
      endcase
    end
 endmodule 

 
 module MUX_4to1( input1 , input2, input3, input4 ,select, out );
	parameter N = 32;
   input [N-1:0] input1, input2, input3, input4;
   input[1:0] select;
   output [N-1:0]out;
   reg [N-1:0]out;
  
  always @(input1 or input2 or input3 or input4 or select )
    begin 
      case(select)
       
          2'b00: out = input1;
          2'b01: out = input2;
			 2'b10: out = input3;
			 2'b11: out = input4;
          
      endcase
    end
 endmodule  


module Adder32Bit(input1, input2, out, overflowBit);
  input [31:0] input1, input2;
  output [31:0] out;
  reg [31:0]out;
  output reg overflowBit;
  
      always@(input1 or input2)
        begin
          
          {overflowBit , out } = input1 + input2;
			 
        end		  
endmodule

module ALU (A, B, Result, ALUSel, ZFlag);
	input [31:0] A, B;
	input [3:0] ALUSel;
	output reg [31:0] Result;
	output ZFlag;
	assign ZFlag = (Result==32'b0);
	always @ (*) begin
		case (ALUSel)
			4'b0000: Result = A + B; // addition
			4'b0001: Result = A - B; // subtraction
			4'b0010: Result = A & B; // And
			4'b0011: Result = A | B; // OR
			4'b0100: Result = A ^ B; // Xor
			4'b0101: Result = A << B; // SLL
			4'b0110: Result = (A<B)?1:0; //SLT
			4'b0111: Result = A >>> B;// SRA
			4'b1000: Result = A >> B;   // SRL
			default:
			Result = 0;
		endcase
	end
endmodule


module check_branching ( Result , zflag , jump_type , check , pc_source ) ;

	input [31:0] Result ;
	input zflag ;

	output reg [1:0] pc_source ;

	input [3:0] jump_type ;
	input check ;


always @* begin

	if( check ) begin		
		//BEQ
		if ( jump_type  == 4'b0000 ) begin		
			if ( zflag == 1 )
				pc_source = 2'b00;
				
			else 
				pc_source =  2'b01 ;
		end
		
		//BNE
		else
			if ( jump_type  == 4'b0001 ) begin
				if ( zflag != 0 )
					pc_source = 2'b00 ;					
				else 
					pc_source =  2'b01 ;		
			end
		//BLT
		else
			if ( jump_type == 4'b0100)	 begin
				if ( Result == 1 )
					pc_source = 2'b00 ;
				else 
					pc_source =  2'b01 ;					
			end
		//BGE
		else 
			if ( jump_type  == 4'b0101 ) begin
				if ( Result == 0 )
					pc_source = 2'b00 ;		
				else 
					pc_source = 2'b01 ;
			end
		//BLTU
		else 
			if ( jump_type == 4'b0110 ) begin
				if ( Result == 1 )
					pc_source = 2'b00 ;
				else 
					pc_source =  2'b01 ;
			end	
		//BGEU
		else 
			if ( jump_type == 4'b0111 )begin
				if ( Result == 0 )
					pc_source = 2'b00 ;		
				else 
					pc_source = 2'b01 ;
			end

		else
		
			if ( jump_type == 4'b1111 )
				pc_source = 2'b00 ;
				
		else
			if ( jump_type == 4'b1001 )
				pc_source = 2'b10 ; 
		end 
		
		
	else 
		pc_source = 2'b01 ;

end


endmodule 

module SevSegDis(In, Out);
input [3:0] In;
output reg [6:0] Out;
always @(In) begin
	case (In)
		4'd0:	Out = 7'b0000001;
		4'd1:	Out = 7'b1001111;
		4'd2:	Out = 7'b0010010;
		4'd3:	Out = 7'b0000110;
		4'd4:	Out = 7'b1001100;
		4'd5:	Out = 7'b0100100;
		4'd6:	Out = 7'b0100000;
		4'd7:	Out = 7'b0001111;
		4'd8:	Out = 7'b0000000;
		4'd9:	Out = 7'b0000100;
		default:	Out = 7'b1111111;
	endcase
end
endmodule

module regFile(clk, rst, A_data, B_data, W_data, A_addr, B_addr, W_addr, wr, Addressreg, en, display);

	input clk, rst;
	output[31:0] A_data, B_data;
	input[31:0] W_data;
	input [4:0] Addressreg;	// new  
	input en;	// new
	output reg [15:0]display;
	input[4:0] A_addr, B_addr, W_addr;
	input wr;
	reg[31:0] RegFile[31:0]; // declaring array of 32, 32-bit registers - Register File
	integer i, j;
	   
	initial begin
       for(i=0 ; i<32 ; i=i+1)
       begin
              for(j=0 ; j<32 ; j= j+1)
                RegFile[i][j] = 1'b0;
       end
    end
	  
	// Reading register
		assign A_data = RegFile[A_addr];
		assign B_data = RegFile[B_addr];
		
	// Writing to a register
	always @ (posedge clk) begin
	if(!rst) begin
		if(wr)
			RegFile[W_addr] <= W_data; // writing data to register number W_addr
		 if (en) // new
			begin 
			 display  <= (RegFile[Addressreg])  ; 
			end  
end			
	end 
	
endmodule 


module DataPath( clk, rst, toggle_switches, enabler_segment, sevent, x);
/////////////////////////////////////
reg [31:0]PC;
input x;
output [3:0] enabler_segment;
input [4:0] toggle_switches;
output [6:0] sevent;
wire [31:0] nextPCval;
reg [31:0]constantFour;
wire [15:0]display;
wire [31:0] nextPCvalPlusOffset; 
wire [31:0] nextPCactual;
/////////////////////////////////////
wire [31:0] Alu_Result;
input clk, rst;
wire [31:0]instruction_word;
/////////////////////////////////////
wire write;
wire [31:0] Output_data;
/////////////////////////////////////
wire overflowbit1;
/////////////////////////////////////
wire overflowbit2;

/////////////////////////////////////

wire [3:0] Alu_op;
wire [31:0] B_bus, B_Mux_output, A_bus;
wire Alu_src;
wire zflag;

/////////////////////////////////////

wire RF_Write;
wire [1:0]PC_src;

/////////////////////////////////////

wire [31:0] RegisterFile_write_data;

////////////////////////////////////

wire [31:0] I_immed, S_immed, B_immed, U_immed, J_immed;
wire [31:0] Correct_immed;
wire [1:0]Memtoreg;
wire [31:0] PCII;
wire [3:0] jump_type;
wire jump_flag;



////////////////////////////////////

ROM your_instance_name(
  .clka(clk), // input clka
  .addra(PC/4), // input [9 : 0] addra
  .douta(instruction_word) // output [31 : 0] douta
); 

CPU_RAMMM your_instance_names (
  .clka(clk), // input clka
  .wea(write), // input [0 : 0] wea
  .addra(Alu_Result[10:0]), // input [7 : 0] addra
  .dina(B_bus), // input [31 : 0] dina
  .douta(Output_data) // output [31 : 0] douta
);

initial begin
constantFour = 32'd4;
end


//Immediate Generator Takes in the instruction word and outputs all the 5 immediates needed to 

immediates_generator my_immed_generator( .inst(instruction_word) , .I(I_immed) , .S(S_immed) , .B(B_immed) , .U(U_immed) , .J(J_immed) );

//Control Unit to output all the selection lines needed to perform the operation

Control_Unit myControlUnit(.opcode(instruction_word[6:0]), .func3(instruction_word[14:12]), .func7(instruction_word[31:25]), .alu_op(Alu_op),
  .REG_WRITE(RF_Write), .ALU_SRC(Alu_src) , .MEM_WRITE(write), .MEM_TO_REG(Memtoreg), .I(I_immed) , 
 .S(S_immed) , .B(B_immed) , .U(U_immed) , .J(J_immed), .Correct_immediate(Correct_immed), .check(jump_flag) , .type( jump_type ) );

//{RF_Write, Alu_src, write, Memtoreg, jump_flag, jump_type};

//Register File

regFile myfile (.clk(clk), .rst(rst), .A_data(A_bus), .B_data(B_bus), .W_data(RegisterFile_write_data), .A_addr(instruction_word[19:15]), .B_addr(instruction_word[24:20]),
 .W_addr(instruction_word[11:7]), .wr(RF_Write), .Addressreg(toggle_switches), .en(x), .display(display));

//ALU Module

ALU myalu (.A(A_bus), .B(B_Mux_output), .Result(Alu_Result), .ALUSel(Alu_op), .ZFlag(zflag));

assign PCII = Alu_Result & 32'hFFFFFFFE; //JALR INSTRUCTION

// check if condition of branching instruction is true 

check_branching solve( Alu_Result , zflag , jump_type , jump_flag , PC_src );

//Our 2 Adders

Adder32Bit myadder1(.input1(PC), .input2(constantFour), .out(nextPCval), .overflowBit(overflowbit2)); //PC_immediate Adder

Adder32Bit myadder2(.input1(nextPCval), .input2(Correct_immed), .out(nextPCvalPlusOffset), .overflowBit(overflowbit2)); //PC_immediate Adder

//Our 3 Muxes

MUX_2to1 B_mux(.input1(B_bus) , .input2(Correct_immed), .select(Alu_src), .out(B_Mux_output)); //B_Bus MUX

MUX_4to1 RPC_counter(.input1(nextPCvalPlusOffset) , .input2(nextPCval), .input3(PCII), .input4(0) ,.select(PC_src), .out(nextPCactual)); //PC_MUX

MUX_4to1 RAM_MUX(.input1(Output_data) , .input2(Alu_Result), .input3(nextPCval), .input4(nextPCvalPlusOffset) ,.select(Memtoreg), .out(RegisterFile_write_data)); 

prog fpga(.toggle(display), .seven(sevent), .en(enabler_segment), .clk(clk) );

always @(posedge clk) 

begin
	if (rst)
		PC <= 0;
	else
		PC <= nextPCactual;
end
 
endmodule 