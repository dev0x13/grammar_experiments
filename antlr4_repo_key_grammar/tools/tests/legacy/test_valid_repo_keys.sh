#!/bin/bash

# This is a simple test for Repo Key grammar.
# It contains only valid keys, so expected output
# should be an AST for each key with no errors.

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
    "[1[0]]"
    "[1 [ 0 ]]"
    "[2[0,1]]"
    "[ 2 [ 0, 1 ] ]"
    "[10[*]]"
    "[*[10]]"
    "[*[*]]"
    "[10[1:3]]"
    "[2[-1]]"
    "[3[-1:-2]]"
    "[3*N[1:N]]"
    "[3[1:N/2]]"
    "[ 10 [ 1:N + 1 , 100 / 5 + N ] ]"
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
