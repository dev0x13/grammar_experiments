This direcoty contains a toolkit for bulding and debuging a formal language using ANTLR4.

Directory structure:

```
antlr4_repo_key_grammar
├── antlr4_cpp_runtime - runtime for generated C++ parsers
│   ├── CMakeLists.txt
│   ├── include
│   ├── lib
│   └── README
├── antlr4_java_runtime - basically ANTLR4 itself (and runtime for generated Java parsers)
│   ├── antlr-4.7.2-complete.jar
│   └── README
├── cpp_test - C++ code, which utilizes generated C++ RepoKey parser
│   ├── antlr4_cpp_runtime -> ../antlr4_cpp_runtime/
│   ├── CMakeLists.txt
│   ├── main.cpp
│   └── repo_key_generated -> ../output/Cpp
├── output - ANTLR generated code (may be deleted, because it can be recreated with provided scripts from tools/)
│   ├── Cpp
│   └── Java
├── README
├── grammars - a set of grammars (the relevant one is RepoQuery.g4)
└── tools - various tools for grammar compiling and testing
    ├── base.sh
    ├── compile_grammar.sh - generates parser code and compiles it (Java/Cpp)
    ├── draw_parse_tree.sh - draws built parse tree for the given expression
    ├── test_grammar_Cpp.sh - tests C++ parser with given string
    ├── test_grammar_Java.sh - tests Java parser with given string
    ├── test_list_of_queries.sh - tests a set of repo queries using generated parser
    └── tests - sample valid and invalid repo quieres
