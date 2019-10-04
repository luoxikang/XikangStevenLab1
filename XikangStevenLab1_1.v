// Verilog test fixture created from schematic B:\XikangStevenLab1\Try1.sch - Mon Sep 30 19:56:30 2019

`timescale 1ns / 1ps

module Try1_Try1_sch_tb();

// Inputs
   reg XLXN_42;
   reg XLXN_46;

// Output
   wire XLXN_47;
   wire XLXN_48;
   wire XLXN_49;
   wire XLXN_50;

// Bidirs

// Instantiate the UUT
   Try1 UUT (
		.XLXN_42(XLXN_42), 
		.XLXN_46(XLXN_46), 
		.XLXN_47(XLXN_47), 
		.XLXN_48(XLXN_48), 
		.XLXN_49(XLXN_49), 
		.XLXN_50(XLXN_50)
   );
// Initialize Inputs
   `ifdef auto_init
       initial begin
		XLXN_42 = 0;
		XLXN_46 = 0;
   `endif
endmodule
