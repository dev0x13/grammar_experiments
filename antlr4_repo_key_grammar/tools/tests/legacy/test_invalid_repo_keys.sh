#!/bin/bash

# This is a simple test for Repo Key grammar.
# It contains only invalid keys, so expected output
# should contain errors for each key with.

if (( $# < 1 )); then
    echo "Usage: $0 <Cpp|Java>"
    exit 1;
fi

language=$1

case "$language" in "Cpp"|"Java")
    ;;
*)
    echo "Language should be 'Cpp' or 'Java'"
    exit 1;
    ;;
esac

script_dir=$(dirname "$0")
source $script_dir/../base.sh

valid_keys=(
    "[1[]]"
    "[1[0]"
    "2[,0,1]]"
    "[2[3.4]]"
    "[10[aaa]]"
    "[1[-]]"
    "[1]"
    "[10[/3]]"
    "[2[1+2+]]"
    "[3[N+M]]"
    "[*N[1:N]]"
    "[10[1][2]]"
)

if [[ "$language" == "Java" ]]; then
    cmd="$script_dir/../test_grammar_Java.sh RepoKey key"
else
    cmd=$script_dir/../test_grammar_Cpp.sh
fi

for key in "${valid_keys[@]}"; do
    echo -e "\nTesting $key"
    eval "$cmd \"$key\""
done
