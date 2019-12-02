#!/bin/bash

# 0. Validate arguments

if (( $# < 2 )); then
    echo "Usage: $0 <g4 file path> <Cpp|Java>"
    exit 1;
fi

language=$2

case "$language" in "Cpp"|"Java")
    ;;
*)
    echo "Language should be `Cpp` or `Java`"
    exit 1;
    ;;
esac

script_dir=$(dirname "$0")

source $script_dir/base.sh

grammar_def=$(abs_path $1)
lang_output_dir=$output_dir/$language

# 1. Generate lexer and parsers with ANTLR

echo "[Generating code]"

mkdir -p $lang_output_dir

rm $lang_output_dir/*

$antlr4_cmd -Dlanguage=$language -o $lang_output_dir $grammar_def

# 2. Compile generated code to executable

echo "[Compiling code]"

if [[ "$language" == "Java" ]]; then
    javac -classpath $antlr4_runtime_jar $lang_output_dir/*.java
else
	cd $cpp_test_dir/
	mkdir -p bin/
	rm -rf bin/*
	cd bin/
	cmake ..
	make -j
fi
