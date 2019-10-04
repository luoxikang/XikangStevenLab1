// Verilog test fixture created from schematic B:\XikangStevenLab1\Try1.sch - Mon Sep 30 20:02:56 2019

`timescale 1ns / 1ps

module Try1_Try1_sch_tb();

// Inputs
   reg InputUp;
   reg InputBottom;

// Output
   wire OutNand;
   wire OutAnd;
   wire OutOr;
   wire OutNor;
// Clock definitions
	reg clk;

// Bidirs

// Instantiate the UUT
   Try1 UUT (
		.InputUp(InputUp), 
		.InputBottom(InputBottom), 
		.OutNand(OutNand), 
		.OutAnd(OutAnd), 
		.OutOr(OutOr), 
		.OutNor(OutNor)
   );
// Initialize Inputs
   
	initial begin
		clk = 0;
		forever begin
			#20 clk = ~clk;
		end
	end
			initial begin
			#40;
			InputUp = 1'b1;
			InputBottom = 1'b1;
			#40;
			$display("TC1 ");
			if({OutNand, OutAnd, OutOr, OutNor}!= 4'b0110) $display ("Result is Wrong %b", {OutNand, OutAnd, OutOr, OutNor});
			
			InputUp = 1'b0;
			InputBottom = 1'b0;
			#40;
			$display("TC2 ");
			if({OutNand, OutAnd, OutOr, OutNor}!= 4'b1010) $display ("Result is Wrong %b", {OutNand, OutAnd, OutOr, OutNor});
			end

			

		
	
	
	
	
	
	
	
endmodule
