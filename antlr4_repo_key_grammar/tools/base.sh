#!/bin/bash

# set -x

root=$(pwd)/$(dirname $BASH_SOURCE)/..

output_dir=$root/output
output_dir_java=$output_dir/Java
output_dir_cpp=$output_dir/Cpp
cpp_test_dir=$root/cpp_test

antlr4_runtime_jar=$root/antlr4_java_runtime/antlr-4.7.2-complete.jar
antlr4_cmd="java -Xmx500M -classpath $antlr4_runtime_jar:$output_dir_java org.antlr.v4.Tool"
grun_cmd="java -Xmx500M -classpath $antlr4_runtime_jar:$output_dir_java org.antlr.v4.gui.TestRig"

mkdir -p $output_dir

function abs_path {
  (cd "$(dirname '$1')" &>/dev/null && printf "%s/%s" "$PWD" "${1##*/}")
}
