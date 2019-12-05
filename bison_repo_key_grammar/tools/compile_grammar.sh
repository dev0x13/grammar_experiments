#!/bin/bash

# 0. Validate arguments

if (( $# < 2 )); then
    echo "Usage: $0 <*.lex file path> <*.yacc file path>"
    exit 1;
fi

script_dir=$(dirname "$0")

source $script_dir/base.sh

lexer_def=$(abs_path $1)
parser_def=$(abs_path $2)

# 1. Generate lexer and parsers with flex and bison

echo "[Generating code]"

mkdir -p $output_dir

rm $output_dir/*

#bison -d json.y
#flex -o json.lex.c json.l
#gcc -o json.o json.lex.c json.tab.c json.tab.h -lfl

parser_generated_code=$output_dir/$(basename $parser_def).cpp
lexer_generated_code=$output_dir/$(basename $lexer_def).cpp

$bison_bin -d -o$parser_generated_code $parser_def

# IMPORTANT: flex does not allow a space between -o option ant its value,
# so it should be "-o<path>"
$flex_bin -o$lexer_generated_code $lexer_def

# 2. Compile generated code to executable

echo "[Compiling code]"

g++ -std=c++11 -o $output_dir/parser $parser_generated_code $lexer_generated_code $root/src/*.cpp -I $root/src -lfl

#if [[ "$language" == "Java" ]]; then
#    javac -classpath $antlr4_runtime_jar $lang_output_dir/*.java
#else
#	cd $cpp_test_dir/
#	mkdir -p bin/
#	rm -rf bin/*
#	cd bin/
#	cmake ..
#	make -j
#fi
