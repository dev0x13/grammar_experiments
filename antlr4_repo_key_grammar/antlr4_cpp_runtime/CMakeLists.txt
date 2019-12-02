add_library(antlr4_cpp_runtime INTERFACE)

target_include_directories(antlr4_cpp_runtime INTERFACE include/)
target_link_libraries(antlr4_cpp_runtime INTERFACE ${CMAKE_CURRENT_LIST_DIR}/lib/libantlr4-runtime.so)
