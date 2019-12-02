#!/bin/bash

set -e

if (( $# < 3 )); then
    echo "Usage: $0 <grammar name> <expression name> <test string>"
    exit 1;
fi

script_dir=$(dirname "$0")

source $script_dir/base.sh

grammar_name=$1
exp_name=$2
test_string=$3

cd $output_dir
# Change `-tree` to `-gui` to show AST
$grun_cmd $grammar_name $exp_name -tree <<< "$test_string"
