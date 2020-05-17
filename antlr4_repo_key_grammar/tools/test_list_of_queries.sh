#!/bin/bash

# This is a simple test for Repo Key grammar.
# It contains only valid keys, so expected output
# should be an AST for each key with no errors.

GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

if (( $# < 2 )); then
    echo "Usage: $0 <Cpp|Java> <path to queries file>"
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
source $script_dir/base.sh

mapfile -t keys < $2

if [[ "$language" == "Java" ]]; then
    cmd="$script_dir/test_grammar_Java.sh RepoQuery query"
else
    cmd=$script_dir/test_grammar_Cpp.sh
fi

for key in "${keys[@]}"; do
    echo -e "\nTesting $key"
    eval "$cmd \"$key\""

    if [ $? -eq 0 ]; then
        echo -e "${GREEN}OK${NC}"
    else
        echo -e "${RED}FAIL${NC}"
    fi
done
