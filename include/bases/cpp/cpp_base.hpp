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
    "# Prerequisites",
    "*.d",
    "",
    "# Compiled Object files",
    "*.slo",
    "*.lo",
    "*.o",
    "*.obj",
    "",
    "# Precompiled Headers",
    "*.gch",
    "*.pch",
    "",
    "# Compiled Dynamic libraries",
    "*.so",
    "*.dylib",
    "*.dll",
    "",
    "# Fortran module files",
    "*.mod",
    "*.smod",
    "",
    "# Compiled Static libraries",
    "*.lai",
    "*.la",
    "*.a",
    "*.lib",
    "",
    "# Executables",
    "*.exe",
    "*.out",
    "*.app",
    "",
    "# Others",
    ".vscode/",
    ".DS_Store",
    "build*",
    "src/cfg/config.cpp",
    "src/cfg/cfg.cpp",
    "lib/"
};

std::vector<std::string> cpp_entry_point_slash_cmds = {
    "#include <dpp/dpp.h>",
    "#include <iostream>",
    "#include \"{bot}.h\"",
    "",
    "int main() {",

};

#endif