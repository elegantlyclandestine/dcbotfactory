#pragma once
#ifndef dbf_cpp_base_hpp
#define dbf_cpp_base_hpp

#include "../dbf.hpp"

std::vector<fs::path> cpp_base_filepaths = {
    "include/{bot}.h",
    "src/main.cpp",
    "CMakeLists.txt",
    "LICENCE",
    "README.md"
};

std::vector<fs::path> cpp_base_directories = {
    "include",
    "lib",
    "src"
};

std::vector<std::string> cpp_main_header_slash_interactions = {
    "#pragma once",
    "#ifndef {bot}_h",
    "#define {bot}_h",
    "",
    "#include <dpp/dpp.h>",
    "#include <string>",
    "#include <iostream>",
    "",
    "#endif"
};

std::vector<std::string> cpp_gitignore = {

};

std::vector<std::string> cpp_main_source_slash_interactions = {
    "#include <dpp/dpp.h>",
    "#include <iostream>",
    "#include \"{bot}.h\"",
    "",
    "int main() {",

};

#endif