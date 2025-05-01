cmake_minimum_required(VERSION 3.8)

PROJECT(dmfix-win-utf8)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

LibImport("dmfix-win-utf8_module" "src/dmfix-win-utf8_module")

ExeImport("test" "dmfix-win-utf8_module")
