#include <iostream>

#include "antlr4-runtime.h"
//#include "repo_key_generated/RepoKeyLexer.h"
//#include "repo_key_generated/RepoKeyParser.h"
#include "repo_key_generated/RepoQueryLexer.h"
#include "repo_key_generated/RepoQueryParser.h"
//#include "repo_key_generated/RepoKeyVisitorImpl.h"

using namespace antlr4;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: repo_key_test_cpp <test string>\n";
        return 1;
    }

    const std::string key = argv[1];//"1..N [{((5 * 1) * N + 1), 10}, 1..N, *]]";

    ANTLRInputStream input(key);
    RepoQueryLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    RepoQueryParser parser(&tokens);

    parser.query();

    std::cout << key << std::endl;
    std::cout << parser.getNumberOfSyntaxErrors() << std::endl;

//    std::cout << tree->toStringTree(&parser) << std::endl;
//
//    std::unordered_map<std::string, double> magicVars = {{"N", 10}};
//
//    RepoKeyVisitorImpl visitor(magicVars);
//
//    const auto result = visitor.visit(tree);
//
//    const auto res = result.as<std::vector<std::string>>();
//
//    for (const auto& r : res) {
//        std::cout << r << std::endl;
//    }

    return 0;
}
