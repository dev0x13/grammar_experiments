#!/bin/bash

script_dir=$(dirname "$0")

source $script_dir/base.sh

cpp_output_dir=$output_dir/Cpp

find $cpp_output_dir -type f -exec sed -i 's/dynamic_cast/static_cast/g' {} +
