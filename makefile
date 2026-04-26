compile:
	verilator -Wall --binary --trace --timing counter.v tb.v
run:
	./obj_dir/Vcounter
all: compile run
