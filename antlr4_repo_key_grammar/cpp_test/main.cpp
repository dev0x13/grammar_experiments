#include <iostream>

#include "antlr4-runtime.h"
#include "repo_key_generated/RepoKeyLexer.h"
#include "repo_key_generated/RepoKeyParser.h"

using namespace antlr4;

int main(int argc, char* argv[]) {
    if (argc < 1) {
        std::cout << "Usage: repo_key_test_cpp <test string>\n";
        return 1;
    }

    ANTLRInputStream input(argv[1]);
    RepoKeyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    /*
    tokens.fill();
    for (auto token : tokens.getTokens()) {
      std::cout << token->toString() << std::endl;
    }
    */

    RepoKeyParser parser(&tokens);
    tree::ParseTree* tree = parser.key();

    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
