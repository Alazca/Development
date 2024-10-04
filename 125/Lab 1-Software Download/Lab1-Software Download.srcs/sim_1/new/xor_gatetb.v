`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/04/2024 11:30:56 PM
// Design Name: 
// Module Name: xor_gatetb
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


module xor_gatetb();
reg a,b;
wire c;
xor_gate xor_test(c,a,b);
initial 
begin
#00 a = 0; b = 0;
#100 a = 0; b = 1;
#100 a = 1; b = 0;
#100 a = 1; b = 1;
end
initial
begin
$monitor($time, "a=%b,b=%b, c=%b", a,b,c);
end
endmodule
