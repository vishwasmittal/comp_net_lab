#!/bin/bash

# shell file for demonstrating the uses of different flags

# Preprocess only; do not compile, assemble or link
g++ -E q1.c >> q1_E_flag.txt
echo "File preprocessed. Check q1_E_flag.txt for result."

# Compile only; do not assemble or link
g++ -S q1.c
echo "File compiled. Check q1.s for the output."

# Compile and assemble, but do not link
g++ -c q1.c
echo "File compiled and assembled. Check q1.o for the result."

# Place the output into file q1_o_flag.out
g++ -o q1_o_flag.out q1.c
echo "Output file ready. Check q1_o_flag.out for result"

echo ""
echo ""
echo "running file q1_o_flag.out"
./q1_o_flag.out

