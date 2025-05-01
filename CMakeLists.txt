cmake_minimum_required(VERSION 3.8)

PROJECT(dmfix_win_utf8)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

LibImport("dmfix_win_utf8_module" "src/dmfix_win_utf8_module")

ExeImport("test" "dmfix_win_utf8_module")
