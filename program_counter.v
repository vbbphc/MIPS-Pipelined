`timescale 1ns / 1ps

module program_counter(
	input [7:0] previous_address,
	input clk,
	input reset,
	output reg [7:0] instruction_address
    );
	 
	 always @ (reset)
	 begin
	 
	 if (reset == 1)
		instruction_address = -1;
	 
	 end
	 
	 always @ (posedge clk)
	 begin
		instruction_address = previous_address;
	 end


endmodule
