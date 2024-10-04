`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/04/2024 11:27:59 PM
// Design Name: 
// Module Name: xor_gate
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

// Gate level modeling
module xor_gate(c,a,b);
input a,b;
output c;
xor(c,a,b);
endmodule

// Data flow modeling
module xor_gate_bm(c,a,b);
input a,b;
output c;
assign x = (a & ~b) | (~a & b);
endmodule
