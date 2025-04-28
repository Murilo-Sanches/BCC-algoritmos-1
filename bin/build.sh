#!/bin/bash
filename=$(basename -- "$1")

output="${filename%.*}"

if [ ! -d "build" ]; then
    mkdir build
fi

gcc "$1" -o "build/$output" && ./build/"$output"
