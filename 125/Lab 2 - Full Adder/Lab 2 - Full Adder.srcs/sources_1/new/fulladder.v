`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/11/2024 04:45:38 PM
// Design Name: 
// Module Name: fulladder
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


module fulladder(A,B,Cin, S, Cout);
    input A,B,Cin;
    output S, Cout;
    assign S = A ^ B ^ Cin;
    // The original expression to test the reduced version
    //assign Cout = (A & B) | (B & Cin) | (A & Cin);
    // Reduced Version
    assign Cout = (A & (B | Cin)) | (B & Cin);
endmodule

module two_BitAdder(S, Cout, A, B, Cin);
    output [1:0] S;
    output Cout;
    input[2:0] A, B;
    input Cin;
    //carry is the connecting signal
    wire carry; 
    
    fulladder fa0(
        A[0], B[0], Cin, S[0], carry
     );
    fulladder fa1(
        A[1], B[1], carry, S[1], Cout
     );
endmodule