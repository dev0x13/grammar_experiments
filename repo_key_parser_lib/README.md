THIS IS A LEGACY FOLDER, THIS LIBRARY IS NO LONGER RELEVANT.

Directory structure:

```
repo_key_parsers
├── include - ANTLR4 generated parser headers (no symbols export options so far)
├── prebuilt
│   ├── antlr4_cpp_runtime-4.7.2 - Prebuilt binaries for ANTLR4 C++ runtime (static and shared)
│   │   ├── include
│   │   └── lib
│   │       ├── x64-gcc5.4 - 64-bit binaries
│   │       └── x86-gcc5.4 - 32-bit binaries
└── src - ANTLR4 generated parser sources
```

CMake options:

* `lib_type` - parser library build type (STATIC or SHARED)
* `prebuilt_type` - ANTLR4 prebuilt binaries type to use (x64-gcc5.4 or x86-gcc5.4)
* `antlr4_link_type` - specifies which binaries of ANTLR4 runtime to use (STATIC or SHARED)
