add_library(antlr4_cpp_runtime INTERFACE)

target_include_directories(antlr4_cpp_runtime INTERFACE include/)

if (antrl4_link_type STREQUAL "SHARED")
    target_link_libraries(antlr4_cpp_runtime INTERFACE ${CMAKE_CURRENT_LIST_DIR}/lib/${prebuilt_type}/libantlr4-runtime.so)
elseif (${antlr4_link_type} STREQUAL "STATIC")
    target_link_libraries(antlr4_cpp_runtime INTERFACE ${CMAKE_CURRENT_LIST_DIR}/lib/${prebuilt_type}/libantlr4-runtime.a)
else ()
    message(FATAL_ERROR "Unsupported ANTLR4 link type: ${antlr4_link_type}. Should be STATIC or SHARED")
endif()
