`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/19/2024 07:24:30 PM
// Design Name: 
// Module Name: minority
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


module minority(
    input a,
    input b,
    input c,
    output y
);
    assign y = (~a & ~b) | (~b & ~c) | (~a & ~c);
    // Testing concise method
    // assign y = ~(a | b | c) | (a ~^ b ~^ c);
endmodule

