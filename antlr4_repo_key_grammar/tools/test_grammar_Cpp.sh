#!/bin/bash

set -e

if (( $# < 1 )); then
    echo "Usage: $0 <test string>"
    exit 1;
fi

script_dir=$(dirname "$0")

source $script_dir/base.sh

test_string=$1

cd $cpp_test_dir/bin
./repo_key_test_cpp "$test_string"
