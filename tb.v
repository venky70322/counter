

module tb;

reg clk;
reg rst;
wire [3:0] q;

counter dut (
    .clk(clk),
    .rst(rst),
    .q(q)
);

always #5 clk = ~clk;

initial begin
    $dumpfile("counter.vcd");
    $dumpvars(0,tb);

    clk = 0;
    rst = 1;

    #10 rst = 0;
    #100 rst = 1;
    #10 rst = 0;
    #50 $finish;
end

always @(posedge clk) begin
    $display("time=%0t  q=%0d",$time,q);
end

endmodule
