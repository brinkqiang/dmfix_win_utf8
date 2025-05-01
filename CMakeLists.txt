cmake_minimum_required(VERSION 3.8)

PROJECT(dmfix_win_utf8)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

InterfaceImport("dmfix_win_utf8" "include" "")

ExeImport("test" "dmfix_win_utf8")
