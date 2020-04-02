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
├── RepoKey.g4 - RepoKey grammar definition (lexer and parser)
├── RepoQuery.g4 - RepoQuery (RepoKey extended with filters) grammar definition (lexer and parser)
└── tools - various tools for grammar compiling and testing
    ├── base.sh
    ├── compile_grammar.sh - generates parser code and compiles it (Java/Cpp)
    ├── test_grammar_Cpp.sh - tests C++ parser with given string
    ├── test_grammar_Java.sh - tests Java parser with given string
    └── tests
        ├── test_invalid_repo_keys.sh - tests a set of invalid repo keys
        └── test_valid_repo_keys.sh - tests a set of valid repo keys
```
