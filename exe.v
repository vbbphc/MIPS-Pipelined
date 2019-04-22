`timescale 1ns / 1ps

module exe(
		input [7:0] input_1,
		input [7:0] input_2,
		input ctrl,
		output reg [7:0] exe_output
    );
	
	always @ (*)
	begin
		if (ctrl == 1)
			exe_output = input_1 + input_2;
		else
			exe_output = input_1;
	end

endmodule
