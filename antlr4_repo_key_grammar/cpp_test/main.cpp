#include <iostream>

#include "antlr4-runtime.h"

#include "repo_key_generated/RepoQueryLexer.h"
#include "repo_key_generated/RepoQueryParser.h"

using namespace antlr4;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: repo_key_test_cpp <test string>\n";
        return 1;
    }

    const std::string key = argv[1];

    ANTLRInputStream input(key);
    RepoQueryLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    RepoQueryParser parser(&tokens);

    std::cout << "Parsed key: " << key << std::endl;
    std::cout << "Parse tree: " << parser.query()->toStringTree() << std::endl;
    std::cout << "Number of parser errors: " << parser.getNumberOfSyntaxErrors() << std::endl;
    std::cout << "Number of lexer errors: "  << lexer.getNumberOfSyntaxErrors()  << std::endl;

    return parser.getNumberOfSyntaxErrors() + lexer.getNumberOfSyntaxErrors();
}
