#!/bin/bash

set -x

root=$(pwd)/$(dirname $BASH_SOURCE)/..

output_dir=$root/output
cpp_test_dir=$root/cpp_test

bison_bin=/usr/bin/bison
flex_bin=/usr/bin/flex

mkdir -p $output_dir

function abs_path {
  (cd "$(dirname '$1')" &>/dev/null && printf "%s/%s" "$PWD" "${1##*/}")
}
