`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/12/2024 08:39:07 PM
// Design Name: 
// Module Name: adder_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module two_BitAdder_tb;

    // Inputs
    reg [2:0] A;
    reg [2:0] B;
    reg Cin;

    // Outputs
    wire [1:0] S;
    wire Cout;

    // Instantiate the two_BitAdder module
    two_BitAdder test (
        .S(S),
        .Cout(Cout),
        .A(A),
        .B(B),
        .Cin(Cin)
    );

    // Test procedure
    initial begin
        // Monitor signals
        $monitor("Time = %0d | A = %b (%0d), B = %b (%0d), Cin = %b, S = %b (%0d), Cout = %b", 
                 $time, A, A, B, B, Cin, S, S, Cout);
        Cin = 0;
        // Test cases
         for (A = 0; A <= 3; A = A + 1)begin
            for(B = 0;B <= 3; B= B + 1) begin
                #10;
            end
         end
        // End the simulation
        $finish;
    end
endmodule
