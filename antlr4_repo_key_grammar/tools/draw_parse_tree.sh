#!/bin/bash

script_dir=$(dirname "$0")
source $script_dir/base.sh

if (( $# < 4 )); then
    echo "Usage: $0 <generated Java code for parser> <expression> <grammar name> <rule name> [ps file to save]"
    echo "e.g. $0 output/Java/ \"[1[STEP_N-1]]:a(b>c).d\" RepoQuery query tree.ps"
    exit 1;
fi

parser_dir=$1
expression=$2
grammar_name=$3
rule=$4

# echo "[1[STEP_N-1]]:a(b>c).d" | java org.antlr.v4.gui.TestRig RepoQuery query -tree -ps kek

if [ "$#" -eq "5" ]; then
    echo "$expression" | \
    java -classpath $antlr4_runtime_jar:$(realpath $parser_dir) org.antlr.v4.gui.TestRig \
        $grammar_name $rule -gui -ps $5
else
    echo "$expression" | \
    java -classpath $antlr4_runtime_jar:$(realpath $parser_dir) org.antlr.v4.gui.TestRig \
        $grammar_name $rule -gui
fi
